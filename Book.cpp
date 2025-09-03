#include "Book.h"

void Book::storeMetaData(int bookid, string bookTitle, string bookAuthor, bool bookStatus)
{
    
    this->author=bookAuthor;
    this->availabilityStatus=true;
    this->uniqueID=bookid;
    this->title=bookTitle;



}

bool Book::statusBorrowed(string uniqueID)
{
    return availabilityStatus;

}

