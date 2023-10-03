#include <iostream>

// int test(char c)
// {
//     if(c >= 'a' && c <= 'z')
//         return (1);
//     return (0);
// }
int main(int argc, char **argv)
{
    char s;
    int i = 1, j = 0;

    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                s = std::toupper(argv[i][j]);
                std::cout << s;
                j++;
            }
            if(argv[i + 1])
                std::cout << " ";
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";   
    return (0);
}