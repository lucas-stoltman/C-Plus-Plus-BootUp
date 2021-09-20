// Classes and methods actually implemented here
#include "book.h"
#include <iostream>
using namespace std;

// GETTERS
// getters never change the data, therefor, they should always be const
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

// SETTERS
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

// CONSTRUCTORS
// super basic constructor
Book::Book()
{
    title_ = "";
    author_ = "";
    length_ = 0;
    bookmark_ = 1;
}

// intermediate constructor
Book::Book(string title, string author)
{
    title_ = title;
    author_ = author;
    length_ = 0;
    bookmark_ = 1;
}

// complete constructor
Book::Book(string title, string author, int length, int bookmark)
{
    title_ = title;
    author_ = author;
    length_ = length;
    bookmark_ = bookmark;
}


int Book::TurnPage(int num_pages)
{
    set_bookmark(bookmark_ + num_pages);
    return bookmark_;
}

void Book::PrintDetails(ostream& stream) const
{
    stream << "Title: " << title_ << endl;
    stream << "Author: " << author_ << endl;
    stream << "Length: " << length_ << endl;
    stream << "Current Location: " << bookmark_ << endl << endl;
}