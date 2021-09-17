// Classes and methods implemented here
#include "book.h"

// getters
string Book::title() const
{
    return title_;
}

string Book::author() const
{
    return author_;
}

int Book::length() const
{
    return length_;
}

int Book::bookmark() const
{
    return bookmark_;
}


// setters
bool Book::set_title(string title)
{
    title_ = title;
    return true;
}

bool Book::set_author(string author)
{
    author_ = author;
    return true;
}

bool Book::set_length(int length)
{
    if (length >= 0)
    {
        length_ = length;
        return true;
    }
    else 
    {
        return false;
    }
}

bool Book::set_bookmark(int bookmark)
{
    if ((bookmark < 0 ) || (bookmark > length_))
    {
        return false;
    }
    else 
    {
    bookmark_ = bookmark;
    return true;
    }
}
