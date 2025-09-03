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
    int searchBook(const int &x);
    void addMember(Member &x);
    void removeMember(int id);
    bool searchMember(const int &x);
    void manageBooks(const int &x, const int &y, const int &z);
    bool checkMember(const int memID);
    bool bookAvailability(Book x);
};