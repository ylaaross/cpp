#include "Contact.hpp"   
#include <string>

class PhoneBook
{
    public : 
        Contact c[8];
    public :
        void choices();
        void add();
        void clear(); 
        std::string toUpper(std::string);
        int compare(std::string choice);
        std::string change_Choice(int j);
        void exec(int);
        void search();
        int empty_data();
};
