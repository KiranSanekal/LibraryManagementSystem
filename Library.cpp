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


void Library::removeBook(const int &x)
{
    int idToRemove=x;
    for(auto i:listofBooks)
    {
       auto newEnd= std::remove_if(listofBooks.begin(),listofBooks.end(),[idToRemove](const Book &x){return x.uniqueID==idToRemove;});
       listofBooks.erase(newEnd,listofBooks.end());
    }
}


bool Library::searchBook(const int &x)
{
    //cout<<listofBooks.size();
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x)
        {
            return 1;
        }
    }
    return 2;
}

void Library::setBookStatus(int &x, const bool &y)
{
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x)
        {
            i.availabilityStatus=y;
        }
    }

}

void Library::addMember(Member &x)
{
    listOfMembers.push_back(x);
}

bool Library::searchMember(const int &x)
{
    for(auto i:listOfMembers)
    {
        if(i.memberID==x)
        {
            return true;
        }
    }
    return false;
    
}

int Library::BorrowedBookCountOfMember(const int &x)
{
    for(auto i:listOfMembers)
    {
        return (i.borrowedBookIDs.size());
    }

}

void Library::manageBooks(const int &bookid, const int &memberid, const int &userChoice)
{
    if (userChoice==1)
    {
            
        if(BorrowedBookCountOfMember(memberid)<3)
        {
            
            setBookStatus(x)
            cout<<book.title<<" successfully assigned to "<<m.memName<<endl;
            break;
        }
        else
        {
            cout<<m.memName<<"  has already reached the max limit for borrowing books"<<endl;
            break;

        }
            }
        }

    else if (z==2)
    {
        for (auto &book : listofBooks)
        {
            if (book.uniqueID == x)
            {
                addBook(book);
                book.availabilityStatus = true;
                cout<<"Book return successful"<<endl;
                break;
            }
        }

    }

 

}

bool bookAvailability(Book &x)
{
    if(x.availabilityStatus==true)
    {
        return true;
    }
    return false;
}

