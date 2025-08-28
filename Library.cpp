#include<Library.h>


void Library::addBook(Book &x)
{
    listofBooks.push_back(x);
}


void Library::removeBook(const int &x)
{
    int idToRemove=x;
    for(auto i:listofBooks)
    {
       auto newEnd=remove_if(listofBooks.begin(),listofBooks.end(),[idToRemove](const Book &x){return x.uniqueID==idToRemove;});
       listofBooks.erase(newEnd,listofBooks.end());
    }
}


bool Library::searchBook(const int &x)
{
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x)
        {
            return true;
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

    
}

void Library::manageBooks(const int &x, const int &z)
{
    if (z==borrowBook)
    {
        for (auto &book : listofBooks)
        {
            if (book.uniqueID == x)
            {
                book.availabilityStatus = false;
                break;
            }
        }
        removeBook(x);
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

}

