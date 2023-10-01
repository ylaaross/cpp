#include<string>
enum Color {
    ADRESS,
    FIRSTNAME,  
    LASTNAME,  
    NICKNAME,
    PHONENUMBER,
    DARKESTSECRET,   
};

class Contact
{
    private:
        int index;
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string adress;
        std::string phonenumber;
        std::string dark_secret;
    public:
        void message(std::string NAME);
        int   error(int exist);
        void set_val(int i);
        void get_va();
        int size_obj();
        int show();
        int empty_test();
        std::string test(std::string firstname, std::string enter);
};