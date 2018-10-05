#include <iostream> // <header>, the name of the header and the #include must appear on the same line.
using namespace std;
/**
 * Simple main function
 * Read two numbers and write their sum
 */
// 1.1 Writing a Simple C++ Program
int main()
{
    // Writing to a stream
    std::cout << "Enter two nums:" << std::endl; // endl: manipulator, flush the buffer(must when debugging)
    int v1 = 0, v2 = 0;
    //reading from a stream
    std::cin >> v1 >> v2;
    std::cout << "The sum of " << v1 << " and " << v2 << " is: " << v1 + v2 << "." << std::endl;

    // while statement
    // keep excuting the while as long as val is less than or equal to 10
    int sum = 0, val = 1;
    while (val <= 10){
        sum += val;
        ++ val; // val += 1;
    }
    std::cout << "The sum of 1 to 10 (inclusive) is: " << sum << std::endl;
    // return 0; // 0 indicates success
    // return -1; check how the system treats a failure indicator

    // ex1.9
    sum = 0, val = 50;
    while (val <= 100){
        sum += val;
        ++ val;
    }
    std::cout << "The sum of 50 to 100 (inclusive) is: " << sum << std::endl;

    // ex1.10
    int n = 10;
    while (n >= 0){
        std::cout << n << std::endl;
        -- n;
    }

    // ex1.11
    int left, right;
    std::cout << "Please enter two integers:" << std::endl;
    cin >> left >> right;
    n = left + 1;
    std::cout << "The integer between " << left << " and " << right << " are: "<< '\n';
    while (n < right){
        if (n != right - 1)
            std::cout << n << ", ";
        else
            std::cout << n << "." << endl;
        ++ n;
    }

    // for statement
    sum = 0;
    for (int i = 1; i <= 10; ++i) // i exists only inside the for
        sum += i;
    std::cout << "The sum from 1 to 10 is: " << sum << std::endl;

    // ex1.12
    sum = 0;
    for (int i = 50; i <= 100; ++i)
        sum += i;
    std::cout << "The sum from 50 to 100 is: " << sum << '\n';

    for (int i = 10; i >= 0; -- i)
        std::cout << i << '\n';
}
// 1.1.1 Compiling and Executing Program
// $ gcc -o ch1 -Wall ch1.cc // -o ch1 specifies the name of the executable file after compiled
// ./ch1 // excute the file in the current directory
// 1.2 Input and Output
/**
 * 1.3 A Word about Comments: single-line and pair
 * comment pairs do not nest
 */
/**
 * Flow of Control
 *
 * 1. while statement: condition and statements
 * a block is a sequence of zero or more statement encolosed by curly braces
 *
 * 2. for statement
 * contains two parts: header and body
 * and header has three parts: init-statement, condition, expression
 */


