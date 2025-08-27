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
    enum action {borrowBook, acceptBook};

    void addBook(Book x);
    void removeBook(const int &x);
    bool searchBook(const Book &x, vector<Book>&listofBooks);
    void addMember(Member x, vector<Member>&listOfMembers);
    void removeMember(int id, vector<Member>&listOfMembers);
    bool searchMember(const Member &x, vector<Member>&listOfMembers);
    void manageBooks(const Book &x, enum action, vector<Book>&listofBooks);
    bool checkMember(int memID, vector<Member>&listOfMembers);
    bool bookAvailability(Book x, vector<Book>&listofBooks);
};