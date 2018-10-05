#include <iostream>
using namespace std;

int main()
{
    int v1 = 5;
    int v2 = 6;
    // the following expression is not legal
    std::cout << "The sum of " << v1;
              << " and " << v2;
              << " is " << v1 + v2 << endl;
}