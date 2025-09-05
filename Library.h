#include<iostream>
using namespace std;
#include<vector>
#include "Book.h"
#include "Member.h"

class Library
{
    public:
    vector<Member>listOfMembers;
    vector<Book>listofBooks;
    enum action {borrowBook=1, acceptBook=2};

    void addBook(Book &x);
    void removeBook(const int &x);
    bool bookAvailability(Book x);
    void setBookStatus(int &x, const bool &y);

    bool searchBook(const int &x);

    void addMember(Member &x);
    void removeMember(int id);
    bool searchMember(const int &x);
    bool checkMember(const int memID);
    int BorrowedBookCountOfMember(const int &x);

    void manageBooks(const int &bookid, const int &memberid, const int &userChoice);
    
};