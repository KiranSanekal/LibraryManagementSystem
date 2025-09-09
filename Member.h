using namespace std;
#include <iostream>
#include <vector>


class Member
{
    public:
    int memberID;
    string memName;
    enum class action:int {borrowBook=1, returnBook=2};
    vector<int> borrowedBookIDs;

    void updateListOfBorrowedBooks(const int &bookID, action useraction);

};