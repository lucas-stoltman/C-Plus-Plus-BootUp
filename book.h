// Specifics about the object included and what they can do with it

#include <string>
using namespace std;

class Book 
{
public:
//accessors
    string title() const;
    string author() const;
    int length() const;
    int bookmark() const;

    bool set_title(string title);
    bool set_author(string author);
    bool set_length(int length);
    bool set_bookmark(int bookmark);

private:
    string title_;
    string author_;
    int length_;
    int bookmark_;
};