#include <iostream>

int main()
{
    // 1.4.4
    /**
     * Count how many consecutive times each distincet value appears in the input.
     */
    int currVal = 0, val = 0;
    // read first num and ensure that we have data to process
    if (std::cin >> currVal){
        int cnt = 1;
        while (std::cin >> val){
            if (val == currVal){
                ++ cnt;
            }
            else {
                std::cout << currVal << " occurs " << cnt << " times " << std::endl;
                currVal = val;
                cnt = 1;
            }
        }
        std::cout << currVal << " occurs " << cnt << " times " << std::endl;
    }
    return 0;
}