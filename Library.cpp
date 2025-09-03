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


int Library::searchBook(const int &x)
{
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x)
        {
            if(i.availabilityStatus==true)
            {
                 return 1;
            }
            else if (i.availabilityStatus==false)
            {
                return 2;
            }
            
        }
    }
    return 3;
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

void Library::manageBooks(const int &x, const int &y, const int &z)
{
    if (z==borrowBook)
    {
        for (auto &book : listofBooks)
        {
            if (book.uniqueID == x)
            {
                for(auto &m:listOfMembers)
                {
                    if(m.memberID==y)
                    {
                        m.borrowedBookIDs.push_back(x);
                        book.availabilityStatus = false;

                    }


                }
                

                break;
            }
        }
        //removeBook(x);
    }
    else
    {
        for (auto &book : listofBooks)
        {
            if (book.uniqueID == x)
            {
                book.availabilityStatus = false;
                addBook(book);
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

