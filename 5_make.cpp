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
