#include "Member.h"
#include<algorithm>


void Member::updateListOfBorrowedBooks(const int &bookID, action useraction) //Updates the List of borrowedbooks on borrowing or returning
{
    if(useraction==1)
    {
            borrowedBookIDs.push_back(bookID); //Add book to list of borrowed books

    }
    else if (useraction==2)
    {
            //Remove book from list of borrowed books
            auto ne = remove(borrowedBookIDs.begin(), borrowedBookIDs.end(),bookID); 
            borrowedBookIDs.erase(ne, borrowedBookIDs.end());
    }

}
