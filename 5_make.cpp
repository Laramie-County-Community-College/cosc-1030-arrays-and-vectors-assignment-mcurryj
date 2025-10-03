#include <iostream>   // lets us use cout for printing to the screen
#include <vector>     // lets us use vectors (like a flexible array)
#include <cstdlib>    // gives us access to rand() for random numbers
#include <ctime>      // gives us time() so we can seed the random generator
#include <string>     // lets us use strings like "Heads" and "Tails"

using namespace std;  // saves us from typing std:: in front of everything

int main() {
    // Seed the random number generator with the current time
    // This makes the random numbers different each time you run the program
    srand(time(0));

    // Create a vector to store the results of 500 coin flips
    vector<string> coinFlips;

    // Flip the coin 500 times
    for (int i = 0; i < 500; i++) {
        int randomNumber = rand();   // generate a random number
        string result;               // store result as "Heads" or "Tails"

        // Use % (modulus) to check if randomNumber is even or odd
        if (randomNumber % 2 == 0) {
            result = "Heads";   // even = Heads
        } else {
            result = "Tails";   // odd = Tails
        }

        // Add this result to the vector
        coinFlips.push_back(result);
    }

    // Now count the number of heads
    int headsCount = 0;
    for (const auto& flip : coinFlips) {  // loop through every flip in the vector
        if (flip == "Heads") {
            headsCount++;  // add 1 to headsCount if we see "Heads"
        }
    }

    // The number of tails is total flips minus the number of heads
    int tailsCount = coinFlips.size() - headsCount;

    // Print the results
    cout << "Number of Heads: " << headsCount << endl;
    cout << "Number of Tails: " << tailsCount << endl;

    return 0; // program ends here
}