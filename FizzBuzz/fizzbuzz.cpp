//suppers dude
//Rules of FizzBuzz
//For numbers that are divisible by 3, print Fizz instead of the number
//For numbers that are divisible by 5, print Buzz instead of the number
//For numbers that are divisible by 3, and by 5, print FizzBuzz instead of the number
//Else, print the number

#include <iostream>
int main()
{
    int num;
    std::cout << "Type a number: \n";
    std::cin >> num;

    for(int i = 1; i <= num; i++)
    {
        if(i % 3 == 0 && i % 5 == 0)
        {
            std::cout << "FizzBuzz\n";
        }
        else if(i % 3 == 0)
        {
            std::cout << "Fizz\n";
        }
        else if(i % 5 == 0)
        {
            std::cout << "Buzz\n";
        }
        else
        {
            std::cout << i << std::endl;
        }

    }
}