#include "Contact.hpp"
#include <iostream>

void Contact::set_val(int index)
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string adress;
    std::string phonenumber;
    std::string dark_secret;
       
    this->index = index + 1;
    this->firstname = test(firstname, "firstname\n");
    this->lastname = test(lastname, "lastname\n");
    this->nickname = test(nickname, "nickname\n");
    this->adress = test(adress, "adress\n");
    this->phonenumber = test(phonenumber, "phone number\n");
    this->dark_secret = test(dark_secret, "dark secret\n");
}

void Contact::message(std::string NAME)
{
    std::cout << "enter your " << NAME;
}

int Contact::error(int exist)
{
    if (exist)
    {
        std::cout << "the text is empty\n";
        return (1);
    }
    return(0);
}

std::string Contact::test(std::string firstname, std::string enter)
{
    do
    {
    message(enter);
        std::getline(std::cin, firstname);
    }while(error(firstname.empty()));
    return (firstname);       
}

void width_adjustments(std::string NAME)
{
    int i;
   
  
   i = 0;
   if(!NAME.empty())
   {
        if(NAME.size() <= 10)
        {
                while (i < 10 - NAME.size())
                {
                    std::cout << " ";
                    i++;
                }
                std::cout << NAME; 
        }
        else
        {
                std::cout << "|";
                i = 0;
                while (i <  9)
                {
                    std::cout << NAME[i];
                    i++;
                }
                std::cout << ".";

        }
            std::cout << "|";
    }
}
void Contact::get_va()
{
    if(!firstname.empty())
    {
        std::cout << "---------------------------------------------\n";
        std::cout << "|         " << this->index << "|";
    }
    width_adjustments(firstname);
    width_adjustments(lastname);
    width_adjustments(nickname);
    if (!firstname.empty())
        std::cout << "\n---------------------------------------------\n";

}

int Contact::size_obj()
{
    return(this->index);    
}


int Contact::empty_test()
{
    if(firstname.empty())
        return(1);
    return(0);
}
int Contact::show()
{
    if(!firstname.empty())
    {
        std::cout << "index  ";
        std::cout << this->index << "\n";
        std::cout << "firstname";
        std::cout << this->firstname << "\n";
        std::cout << "lastname";
        std::cout << this->lastname << "\n";
        std::cout <<  "nickname";
        std::cout <<  this->nickname << "\n";
        return(1);
    }
    return(0);
}