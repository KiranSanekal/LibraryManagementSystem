#include "Library.h"
#include <iostream>
#include <string>

using namespace std;
Library lib;


// === UI helpers ===
int userChoice;
int showMainMenu();
int showUserMenu();
int showStaffMenu();
Book getbookfromstaff();
int getbookIDfromstaff();
Member getmemberfromstaff();


Book getbookfromstaff()
{
    Book b;
    std::cout<<"Enter book title: \n"; //Ask Title
    getline(cin,b.title);
    std::cout<<"Enter book author: \n"; 
    getline(cin,b.author);
    std::cout<<"Enter unique ID: \n"; 
    std::cin>>b.uniqueID;
    return b;

}

int getbookIDfromstaff()
{
    std::cout<<"Enter unique ID: \n"; 
    std::cin>>userChoice;
    return userChoice;

}

Member getmemberfromstaff()
{
    Member m;
    cout<<"Enter Member name: \n";
    getline(cin, m.memName);
    cout<<"Enter Member ID : \n";
    cin>>m.memberID;

}

int showMainMenu()
{
    cout<<"Welcome to Daisy library"<<endl;
    cout<<"Which among the following are you \n"<<endl;
    cout<<"1. Staff \n"
    "2. Member" <<endl;
    switch(userChoice)
    {
        case 1:
        {
            showStaffMenu();

        }
        case 2:
        {
            showUserMenu();
        }
    }

}

int showStaffMenu()
{
    cout<<"What do you want to do\n";
    cout<<"1. Add book\n";
    cout<<"2. Remove book\n";
    cout<<"3. Search member\n";
    switch(userChoice)
    {
        case 1:
        {
            Book b=getbookfromstaff();
            lib.addBook(b);

        }
        case 2:
        {
            int id;
            id=getbookIDfromstaff();
            lib.removeBook(id);

            
        }
    }
    
}




int main()
{
    int userIn;

    
    cout<<"Welcome to Daisy library"<<endl;
    cout<<"Which among the following are you"<<endl;
    cout<<endl;
    cout<<"1. Staff\n"
    "2. Member" <<endl;
    cin>>userIn;
    
    cin>>userIn;
    switch (userIn)
    {
    case 1:
    {
        


    }
        

        cout<<"";

        break;
    
    default:
        break;
    }
    if(userIn==1)
    {
        
        cout<<"2. Remove book"<<endl;


    }
    cout<<"Your response: ";
    cin>>userIn;

    if(userIn==1)
    {

    cout<<"What do you want to do\n"
    "1. Borrow book\n"
    "2. Return Book" <<endl;
    cin>>userIn;
    switch (userIn)
    {
    case 1:
        /* code */
        break;
    
    case 2:
        break;
    }



}