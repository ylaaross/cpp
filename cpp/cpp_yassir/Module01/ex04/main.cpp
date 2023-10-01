#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream inputFile("example.txt");

    if (!inputFile) {
        std::cerr << "Error: Unable to open the file." << std::endl;
        return 1;
    }

    int number;
    while (inputFile >> number) {
        std::cout << "Read number: " << number << std::endl;
    }

    inputFile.close();
    return 0;
}