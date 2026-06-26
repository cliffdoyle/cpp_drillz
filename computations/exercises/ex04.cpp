// Program to calculate number of squares needed to get rice grains
#include <iostream>

#include <algorithm>

int main()
{
    int squares = 64;
    double grains = 1;
    int base = 2;
    double total_grains = 1;
    bool is_1k = true;
    bool is_1m = true;
    bool is_1b = true;

    for (int i = 2; i <= squares; i++)
    {
        grains *= base;
        total_grains += grains;
        std::cout << "grains so far is: " << total_grains << "  squares so far is: " << i << "\n";
        if (is_1k && total_grains >= 1000)
        {
            std::cout << "no of squares at 1000 grains is: " << i << "\n";
            is_1k = false;
        }
        else if (is_1m && total_grains >= 1000000)
        {
            std::cout << "no of squares at 1000,000 grains is: " << i << "\n";
            is_1m = false;
        }
        else if (is_1b && total_grains >= 1000000000)
        {
            std::cout << "no of squares at 1000,000,000 grains is: " << i << "\n";
            is_1b = false;
        }
    }
    std::cout << "total number of grains at 64 squares is: " << total_grains << "\n";

    return 0;
}