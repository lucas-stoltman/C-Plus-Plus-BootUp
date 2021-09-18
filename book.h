// Header file. Specifics about the object included and what they can do with it

#include <string>
using namespace std;

class Book 
    {
        public:
            // getters
            string title() const;
            string author() const;
            int length() const;
            int bookmark() const;

            // setters
            bool set_title(string title);
            bool set_author(string author);
            bool set_length(int length);
            bool set_bookmark(int bookmark);

            int turn_page(int num_pages);
            void print_details(ostream& stream) const;

            // constructors
            Book();
            Book(string title, string author);
            Book(string title, string author, int length, int bookmark);

        private:
            // private variables encapsulated from the user 
            string title_;
            string author_;
            int length_;
            int bookmark_;
    };