#include <iostream>

int main()
{
    int left = 0, right = 0;
    while ( left >= right){
        std::cout << "Please enter two integers:" << '\n';
        std::cin >> left >> right;
        if (left < right){
            std::cout << "The integer between "<< left << " and " << right << " are:"<< '\n';
            for(int i = left + 1; i < right; ++i){
                std::cout << i << ", ";
            }
        }
    }
    std::cout << std::endl;
    return 0;
}