#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include <limits>

void PhoneBook::add()
{
    static int i;


    if (i == 8)
        i = 0;
    c[i].set_val(i);
    i++;
}

void PhoneBook::choices()
{
    std::cout << " -------------------------------------------------------------------------------\n";
    std::cout << "|                       1/    ADD                                               |\n";                                             
    std::cout << " -------------------------------------------------------------------------------\n";
      std::cout << " -------------------------------------------------------------------------------\n";
    std::cout << "|                       2/    SEARCH                                            |\n";                                             
    std::cout << " -------------------------------------------------------------------------------\n";
      std::cout << " -----------------------------------------------------------------------------\n";
    std::cout << "|                       3/    EXIT                                             |\n";                                            
    std::cout << " ------------------------------------------------------------------------------\n";
}

void PhoneBook::clear()
{
    std::cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}


std::string PhoneBook::toUpper(std::string choice)
{
    int i;

    i = 0;
    while (choice[i])
    {
        if (choice[i] >= 'a' && choice[i] <= 'z')
           choice[i] = choice[i] - 32;
        i++;
    }
    return(choice);
}



std::string PhoneBook::change_Choice(int j)
{
    if(j == 0)
        return("SEARCH");
    else
        return("EXIT");
}

int PhoneBook::compare(std::string choice)
{
    int i;
    int j;
    std::string cmp;

    i = 0;
    j = 0;
    cmp = "ADD";
    choice = toUpper(choice);
   
    while (choice[i] || cmp[i])
    {
        if (choice[i] != cmp[i])
        {
            if(j == 3)
                return(0);
            cmp = change_Choice(j);
            j++;
            i = -1;
        }
        i++;
    }
    return(j + 1);
}

int PhoneBook::empty_data()
{
    int i;

    i = 0;
    while(i < 8)
    {
        if(!c[i].empty_test())
        return(0);
        i++;
    }
    return (1);
}

void PhoneBook::search()
{
    int i;
    int index;



    if(!empty_data())
    {
        i = 0;
        index = 0;
        while(i < 8)
        {
            c[i].get_va();
            i++;
        }
        std::cout << "enter the index\n";
        std::cin >> index;
        while (index <= 0 || index > 8)
        {
         std::cout << "enter the right index\n";
            std::cin >> index;
        }

        while(!c[index - 1].show())
        {
            std::cout << "enter the right index\n";
            std::cin >> index;

        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear input buffer

         std::cin.clear();
    }
    else
    {
        std::cout << "no contact \n";
        std::cin.clear();
    }
}



void PhoneBook::exec(int res)
{
    if(res == 1)
        add();  
    else if(res == 2)
        search();
    else
        exit(0);
}
