#include<Library.h>


void Library::addBook(Book x)
{
    listofBooks.push_back(x);
}


void Library::removeBook(const int &x)
{
    int idToRemove=x.uniqueID;
    for(auto i:listofBooks)
    {
       auto newEnd=remove_if(listofBooks.begin(),listofBooks.end(),[idToRemove](const Book &x){return x.uniqueID==idToRemove;});
       listofBooks.erase(newEnd,listofBooks.end());
    }
}


bool Library::searchBook(const Book &x, vector<Book>&listofBooks)
{
    for(auto i:listofBooks)
    {
        if(i.uniqueID==x.uniqueID)
        {
            return true;
        }

    }
}

void Library::addMember(Member x, vector<Member>&listOfMembers)
{
    listOfMembers.push_back(x);
}

bool Library::searchMember(const Member &x, vector<Member>&listOfMembers)
{
    for(auto i:listOfMembers)
    {
        if(i.memberID==x.memberID)
        {
            return true;
        }

    }
}

void Library::manageBooks(const Book &x, enum action, vector<Book>&listofBooks)
{
 

}

bool bookAvailability(Book x, vector<Book>&listofBooks)
{
    if(x.availabilityStatus==true)
    {
        return true;
    }

}

