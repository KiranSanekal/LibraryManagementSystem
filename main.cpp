#include "Library.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;
Library lib;


// === UI helpers ===
int userChoice;
void showMainMenu();
void showUserMenu();
void showStaffMenu();
Book getbookfromstaff();
int getbookIDfromstaff();
Member getmemberfromstaff();


Book getbookfromstaff()
{
    Book b;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // flush newline
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
    "1. Give book\n"
    "2. Take Book" <<endl; 
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
    return m;

}

int getmemberIDfromstaff()
{
    
    cout<<"Enter Member ID : \n";
    std::cin>>userChoice;
    return userChoice;
}
void showStaffMenu()
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
      
        cin>>userChoice;
    
        switch(userChoice)
        {
            case 1:
            {
                Book b=getbookfromstaff();
                lib.addBook(b);
                cout<<"Book" <<b.title << " by "<<b.author<< " succesfully added"<<endl;
                break;

            }
            case 2:
            {
                int id;
                id=getbookIDfromstaff();
                lib.removeBook(id);
                cout<<"Book with ID "<<id<<" successfully removed."<<endl;
                break;
            }
            case 3:
            {
                int bookid;
                int res;
                bookid=getbookIDfromstaff();
                res=lib.searchBook(bookid);
                if(res==1)
                {
                    cout<<"book exists and can be borrowed"<<endl;
                    cout<<"Do you want to borrow it?"<<endl;
                    cout<<"1.Yes\n";
                    cout<<"2.Return to main menu"<<endl;
                    cin>>userChoice;
                    if(userChoice==1)
                    {
                        int memberid;
                        memberid=getmemberIDfromstaff();
                        lib.manageBooks(bookid,memberid, userChoice);
                    }
                }
                else if(res==2)
                {
                    cout<<"book exists but not available at the moment"<<endl;
                }
                else if(res==3)
                {
                    cout<<"book doesnt exist in the library"<<endl;
                }
                break;
            }
            case 4:
            {
                int id;
                id=getmemberIDfromstaff();
                lib.searchMember(id);
                break;
            }
            /*
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
            
            
            */
            
            
            case 6:
            {
                Member m;
                m=getmemberfromstaff();
                break;
            }
            
            
        }

    } while (userChoice!=0);
    
}

void showUserMenu()
{
    cout<<"xxxx"<<endl;
}



void showMainMenu()
{
    cout<<"Welcome to Daisy library"<<endl;
    cout<<"Which among the following are you \n"<<endl;
    cout<<"1. Staff \n"
    "2. Member" <<endl;
    cin>>userChoice;
    switch(userChoice)
    {
        case 1:
        {
            showStaffMenu();
            break;

        }
        case 2:
        {
            showUserMenu();
            break;
        }
    }

}



int main()
{
    showMainMenu();


}