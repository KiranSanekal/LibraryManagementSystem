using namespace std;
#include <iostream>;
#include <vector>; 

class Book
{
    public:
    int uniqueID;
    string title;
    string author;
    bool availabilityStatus;

    void storeMetaData(string bookid, string bookTitle, string bookAuthor, bool bookStatus);
    bool statusBorrowed(string uniqueID);

};


