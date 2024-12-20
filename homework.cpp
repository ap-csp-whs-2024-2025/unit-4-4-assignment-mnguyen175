#include <iostream>  // std::cin, std::cout, std::getline
#include <string>    // std::string

int main()
{
    // Complete the homework problems here
    
    // Problem 1
    int number; 
    std::cout << "Enter a number from 1 to 100: "; 
    std::cin >> number; 

    while (number < 1 || number > 100)
    {
        std::cout << "Invalid number, please enter again: ";
        std::cin >> number;
    }

    std::cout << "Thank you!" << std::endl;
    
    
    // Problem 2
    int num = 1;
    std::string favoriteColor = "pink"; 
    std::string guessColor;

    std::cout << "Guess my favorite color: "; 
    std::cin >> guessColor; 

    while (guessColor != favoriteColor)
    {
        std::cout << "Wrong! Guess again: ";
        std::cin >> guessColor;
        num = num + 1;
    }

    std::cout << "Correct! You guessed my favorite color in " << num << " attempt(s)." << std::endl;
    
    
    // Problem 3
    int times;
    int sum = 0;
    std::cout << "How many numbers? "; 
    std::cin >> times; 

    for (times) 
    { 
        int num;
        std::out << "Enter a number: "; 
        std::cin >> num; 
        sum = num + sum; 
    }

    std::out << "The sum is " << sum << "." << std::endl;


    
    
    return 0;
}
