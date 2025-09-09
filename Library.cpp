#include "Library.h"

using namespace std;
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> 



void Library::addBook(Book &x)
{
    listofBooks.push_back(x);
    
}


void Library::removeBook(const int &idToRemove) //Tobeadded- when borrowed, book still exists in list of books-add condition to check availability status
{
    
    
    auto newEnd= std::remove_if(listofBooks.begin(),listofBooks.end(),[idToRemove](const Book& x){return x.uniqueID==idToRemove;});
    listofBooks.erase(newEnd,listofBooks.end());
   
  
    
}


bool Library::searchBook(const int &x)
{
    //cout<<listofBooks.size();
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x)
        {
            return true;
        }
    }
    return false;
}

void Library::setBookStatus(const int &bookid, const bool &bookstatus)
{
    for(auto& i:listofBooks)
    {
        if(i.uniqueID==bookid)
        {
            i.availabilityStatus=bookstatus;
        }
    }

}

void Library::addMember(Member &x)
{
    listOfMembers.push_back(x);
}

bool Library::searchMember(const int &x)
{
    for(auto& i:listOfMembers)
    {
        if(i.memberID==x)
        {
            return true;
        }
    }
    return false;
    
}

Member* Library::getMember(const int &memid)
{
    for(auto& i:listOfMembers)
    {
        if(i.memberID==memid)
        {
            return &i;
        }
    }
    return nullptr;
}



int Library::getBorrowedBookCountOfMember(const int &memID)
{
    for(auto& i:listOfMembers)
    {
        if(i.memberID==memID)
        {
            return (i.borrowedBookIDs.size());
        }
    }
    return 0;

}

bool Library::isBookPartOfBorrowedBooks(const int &bookid, const int &memID)
{
    for(auto& i:listOfMembers)
    {
        if(i.memberID==memID)
        {
            cout<<"Mem has borrowed "<<i.borrowedBookIDs.size()<<" Books"<<endl;
            if (std::find((i.borrowedBookIDs).begin(), (i.borrowedBookIDs).end(),bookid)!=(i.borrowedBookIDs).end())
            {
                return true;
            }
        }
        
    }
    return false;
}

Book* Library::getBook(const int &bookid)
{
    for(auto& i:listofBooks)
    {
        if(i.uniqueID==bookid)
        {
            return &i;
        }
    }
    return nullptr;
}

void Library::manageBooks(int &bookid, const int &memberid, const int &userChoice, Member* m)
{
    if (userChoice==1) //Member wishes to borrow book
    {
        
            
        if(getBorrowedBookCountOfMember(memberid)<3) //Checks for max limit of books for borrowing
        {
            m->updateListOfBorrowedBooks(bookid, static_cast<Member::action>(userChoice));
            setBookStatus(bookid,false);

           // cout<<"After setting"<<(getBook(bookid))->availabilityStatus;
            cout<<bookid<<" successfully assigned to "<<memberid<<endl;
            
        }
        else

        {
            cout<<memberid<<"  has already reached the max limit for borrowing books"<<endl;

        }
    }

    else if (userChoice==2) //Member wishes to return book            
    {
        if (isBookPartOfBorrowedBooks(bookid,memberid)==true) //Checks if the book to be returned is part of the borrowed list
        {
            m->updateListOfBorrowedBooks(bookid, static_cast<Member::action>(userChoice));
            setBookStatus(bookid, true);
            cout<<getBook(bookid)->title<<" successfully returned to library"<<endl;
        }

        

    }

 

}

    
bool getBookAvailability(Book &x)
{
    if(x.availabilityStatus==true)
    {
        return true;
    }
    return false;
}

