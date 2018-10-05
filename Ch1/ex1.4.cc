# include <iostream>
using namespace std;

double multiply(double a, double b)
{
    return a * b;
}

int main()
{
    int a = 5;
    int b = 6;
    std::cout << multiply(a, b) << '\n';
}