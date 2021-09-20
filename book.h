// Header file. Specifics about the object included and what they can do with it
#include <string>

using namespace std;

class Book
{
public:
    // constructors
    Book();
    Book(string title, string author);
    Book(string title, string author, int length, int bookmark);

    // getters
    // getters never change the data, therefor, they should always be const
    string title() const;
    string author() const;
    int length() const;
    int bookmark() const;

    // setters
    bool set_title(string title);
    bool set_author(string author);
    bool set_length(int length);
    bool set_bookmark(int bookmark);

    // actions
    int TurnPage();
    int TurnPage(int num_pages);
    void PrintDetails(ostream &stream) const; // just a fancy getter, hence const

private:
    // private variables encapsulated from the user
    string title_;
    string author_;
    int length_;
    int bookmark_;
};