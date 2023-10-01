#include <iostream>

int test(char c)
{
    if(c >= 'a' && c <= 'z')
        return (1);
    return (0);
}
int main(int argc, char **argv)
{
    int i,j;

    i = 1;
    j = 0;
    if (argc > 1)
    {
        while (argv[i])
        {
            j = 0;
            while(argv[i][j])
            {
                if (test(argv[i][j]))
                    argv[i][j] -= 32;
                std::cout << argv[i][j];
                j++;
            }
            if(argv[i + 1])
                std::cout << " ";
            i++;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";   
    return (0);
}