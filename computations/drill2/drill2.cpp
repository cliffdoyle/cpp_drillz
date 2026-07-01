#include <iostream>

void swap_v(int a, int b)
{
    int temp = a;
    b = a;
    a = temp;
}

void swap_r(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// void swap_cr(const int &a, const int &b)
// {

//     int temp = a;
//     b = a;
//     a = temp;
// }

int main()
{
    int x = 7;
    int y = 9;
    swap_v(x, y);

    std::cout << "value of x after call to swap_v: " << x << "\n";
    std::cout << "value of y after call to swap_v: " << y << "\n";
    // swap_r(7,9);
    int cx = 7;
    int cy = 9;
    swap_r(cx, cy);
    // swap_r(7.7,9.9);
    std::cout << "value of cx after call to swap_r: " << cx << "\n";
    std::cout << "value of cy after call to swap_r: " << cy << "\n";
    // swap_r(7,9);
    double dx = 7.7;
    double dy = 9.9;
    swap_v(dx, dy);

    std::cout << "value of dx after call to swap_v: " << dx << "\n";
    std::cout << "value of dy after call to swap_v: " << dy << "\n";
    // swap_r(7,9);
    // swap_cr(7.7,9.9);
}