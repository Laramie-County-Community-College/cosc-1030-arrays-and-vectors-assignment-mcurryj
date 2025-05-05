Coin Flip Simulation Assignment
Objective:
The goal of this assignment is to help you understand the use of vectors, loops, and conditional statements in C++. You will write a program that simulates flipping a coin 500 times and then counts the number of heads and tails.

Instructions:

Write the Code:

Use the provided code snippet to simulate flipping a coin 500 times.
Store the result of each flip ("Heads" or "Tails") in a vector.

Count the number of heads and tails.

If you are unfamiliar with rand, this code snippit creates a random number and then used the modules operator (%) to determine if it is odd or even (a remainder of dividing by 2).  This can be handy for randomly generating a 
heads or tails.  This can then be used in your loop to start counting!
```
int thisRandomNumber = rand();
        if ((thisRandomNumber % 2) == 0) {
            coinFlipResult = "Heads";
        } else {
            coinFlipResult = "Tails";
        }
```

Starter Code

```
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    //srand(123); // Seed the random number generator

    // Flip a coin 500 times
    std::vector <std::string> coinFlips;
    string coinFlipResult = "";
    
    // write a for loop that iternates over 500 flips and counts heads or tails in the coinFlips vector


    // Count the number of heads
    int headsCount = 0;

    //handy code to iterate through a vector.  I'll give this to you for future reference.
    //the auto& is a nice way to have c++ declare the variable as whatever type the variable that follows is first assigned to!  In this case it will be a String, because conflips is declared that way earlier
    for (const auto& flip : coinFlips) {  
        if (flip == "Heads") {
            ++headsCount;
        }
    }
    std::cout << "Number of Heads: " <<  headsCount << '\n';
    std::cout << "Number of Tails: " << coinFlips.size() - headsCount << '\n';

    return 0;
}


```
