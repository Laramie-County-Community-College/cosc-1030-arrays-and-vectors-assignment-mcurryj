/*

Write a program that reads a list of words. Then, the program outputs those words and their frequencies. The input begins with an integer indicating the number of words that follow. Assume that the list will always contain fewer than 20 words.

Ex: If the input is:

5 hey hi Mark hi mark
the output is:

hey - 1
hi - 2
Mark - 1
hi - 2
mark - 1
Hint: Use two vectors, one vector for the strings and one vector for the frequencies.
*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
   vector<string> userWords;
   vector<int> wordFreq;
   string currWord;
   unsigned int i;
   unsigned int j;
   unsigned int numWords;
   
   // Integer indicating the number of integers that follow
   cin >> numWords;
   
   // Gets list of words from input and initialize word's frequency to 0
   for(i = 0; i < numWords; ++i) {
      cin >> currWord;
      userWords.push_back(currWord);
      wordFreq.push_back(0); 
   }
   
   // Determine frequency of each word
   for (i = 0; i < userWords.size(); ++i) {
      for (j = 0; j < userWords.size(); ++j) {
         if (userWords.at(i) == userWords.at(j)) { 
            wordFreq.at(i) = wordFreq.at(i) + 1; 
         }
      }
   }
   
   // Outputs words and their frequencies
   for(i = 0; i < userWords.size(); ++i) {
      cout << userWords.at(i) << " - " << wordFreq.at(i) << endl;
   }

   return 0;
}