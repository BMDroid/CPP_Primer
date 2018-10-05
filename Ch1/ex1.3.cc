# include <iostream>
int main()
{
    // Two types of string
    // 1. c-type char string
    // string class introduced with the standard library
    std::string t = "Hello";
    char s1[] = "World";
    std::cout<<"Hello, World."<<std::endl;
    std::cout << s1 << '\n';
}