using namespace std;
#include <iostream>;
#include <vector>; 


class Member
{
    public:
    int memberID;
    string memName;
    enum action {borrowBook, returnBook};
    vector<int> borrowedBookIDs;

    void recBorrowedBooks(int bookID, vector <int> &borrowedList);
    void memAction(int bookID, enum action);

};