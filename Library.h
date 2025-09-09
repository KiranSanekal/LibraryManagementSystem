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
    bool getBookAvailability(Book x);
    void setBookStatus(const int &bookid, const bool &bookstatus);
    Book* getBook(const int &bookid);

    bool searchBook(const int &x);

    void addMember(Member &x);
    void removeMember(int id);
    bool searchMember(const int &x);
    Member* getMember(const int &memid);
    bool checkMember(const int memID);
    int getBorrowedBookCountOfMember(const int &x);
    bool isBookPartOfBorrowedBooks(const int &bookid, const int &memID);

    void manageBooks(const int &bookid, const int &memberid, const int &userChoice);
    
};