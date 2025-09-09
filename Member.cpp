#include "Member.h"
#include<algorithm>


void Member::updateListOfBorrowedBooks(int &bookID, action useraction) //Updates the List of borrowedbooks on borrowing or returning
{
    if(useraction==action::borrowBook)
    {

            borrowedBookIDs.push_back(bookID); //Add book to list of borrowed books

    }
    else if (useraction==action::returnBook)
    {
            //Remove book from list of borrowed boo
            auto ne = remove(borrowedBookIDs.begin(), borrowedBookIDs.end(),bookID); 
            borrowedBookIDs.erase(ne, borrowedBookIDs.end());
    }

}
