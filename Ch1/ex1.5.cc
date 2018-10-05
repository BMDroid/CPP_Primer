# include <iostream>
using namespace std;

int main()
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0;
    int v2 = 0;
    std::cin >> v1;
    std::cin >> v2;
    std::cout << "The sum of ";
    cout << v1;
    cout << " and ";
    cout << v2;
    cout << " is ";
    cout << v1 + v2 << endl;
    return 0;
}