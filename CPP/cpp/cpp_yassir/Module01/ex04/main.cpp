#include <iostream>
#include <fstream>
#include <string>




void    replace_sub(std::string &concat, std::string s1, std::string s2)
{
    size_t t;
    t = 0;

    while(1)
    {
        t = concat.find(s1);
        if(t == std::string::npos)
            break;
        else
        {
            // concat.substr(t, s1.length());
            concat.erase(t,s1.length());
            concat.insert(t, s2);
            // std::cout << std::endl;
            // std::cout << concat << std::endl;
            // std::cout << std::endl;
        }
    }
}

int main(int argc , char **argv) {
    std::string filename;
    std::string s1;
    std::string s2;
    if(argc == 4)
    {
        filename = "example.txt";
        s1 = argv[2];
        s2 = argv[3];
        std::ifstream inputFile(filename); // Replace "example.txt" with your file path
        std::string concat;
        if (!inputFile) {
            std::cerr << "Failed to open the file." << std::endl;
            return 1;
        }

        std::string line;

        while (std::getline(inputFile, line)) 
        {
            // Process the line as needed
            std::cout << line << std::endl;
            concat = concat + line + "\n";
        }
        concat.erase(concat.size() - 1, 1);
        std::cout << concat << "ssss";
        replace_sub(concat, s1, s2);

    //    std::cout << std::endl;
    filename.erase(filename.find("."),filename.find(".") - filename.size());
    std::ofstream outputFile(filename+".replace");
    
    if (!outputFile) {
        std::cerr << "Failed to create/open the output file." << std::endl;
        return 1;
    }


    // Write the string to the output file
    outputFile << concat;

    // Close the output file
    outputFile.close();
    inputFile.close(); // Close the file when done
    }
    return 0;
}