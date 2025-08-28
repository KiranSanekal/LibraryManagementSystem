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
int getactionfromstaff()
{
    cout<<"What do you want to do\n"
    "1. Borrow book\n"
    "2. Return Book" <<endl; 
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

int getmemberIDfromstaff()
{
    
    cout<<"Enter Member ID : \n";
    std::cin>>userChoice;
    return userChoice;
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
    
    do
    {
        cout<<"What do you want to do\n";
        cout<<"1. Add book\n";
        cout<<"2. Remove book\n";
        cout<<"3. Search book\n";
        cout<<"4. Search member\n";
        cout<<"5. Mange book\n";
        cout<<"6. Add member\n";
      
    
    
        switch(userChoice)
        {
            case 1:
            {
                Book b=getbookfromstaff();
                lib.addBook(b);
                cout<<"Book" <<b.title << "succesfully added"<<endl;
                break;

            }
            case 2:
            {
                int id;
                id=getbookIDfromstaff();
                lib.removeBook(id);
                break;
            }
            case 3:
            {
                int id;
                id=getbookIDfromstaff();
                lib.searchBook(id);
                break;
            }
            case 4:
            {
                int id;
                id=getmemberIDfromstaff();
                lib.searchMember(id);
                break;
            }
            case 5:
            {
                int action_select;
                int id;
                action_select=getactionfromstaff();

                if(action_select==1)
                {
                    lib.manageBooks(id, action_select);

                }
                if(action_select==2)
                {
                    lib.manageBooks(id,action_select);

                }
                
                break;
            }
            case 6:
            {
                Member m;
                m=getmemberfromstaff();
                break;
            }
            
            
        }

    } while (userChoice!=0);
    
}




int main()
{
    showMainMenu();


}