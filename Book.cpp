#include<Book.h>

void Book::storeMetaData(string bookid, string bookTitle, string bookAuthor, bool bookStatus)
{
    //To be discussed with daisy
    this->author=bookAuthor;



}

bool Book::statusBorrowed(string uniqueID)
{
    return availabilityStatus;

}

