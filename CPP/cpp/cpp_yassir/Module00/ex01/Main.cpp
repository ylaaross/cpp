#include <iostream>
#include "PhoneBook.hpp"


int main()
{
    
    std::string choice;
    PhoneBook p;
    int x;
    
    while(1)
    {

        p.choices();
        std::cin.clear();
        std::getline(std::cin, choice);
        x =(p.compare(choice));
        if (x)
        {
            if(x == 3)
                break;
            p.clear();
            p.exec(x);
        }
        else
            std::cout << "wrong!!\n";

    }
}
