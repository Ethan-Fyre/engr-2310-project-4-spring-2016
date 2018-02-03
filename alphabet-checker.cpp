/* alphabet-checker.cpp
 * Ethan Sayles
 * Feb 29, 2016
 * Purpose: Create a program that checks a user-entered phrase for all the letters of the alphabet.
 */
#include <iostream>

using namespace std;

int main() {

    string Alphabet = "abcdefghijklmnopqrstuvwxyz";  //String containing all the letters of the alphabet
    string All_letters = "";                         //User entered string to be checked for all the letters
    bool letter = false;                             //Whether or not a certain letter is contained in the user phrase
    bool done = false;                               //Whether or not the user wants to try again
    string user_done = "";                                // User - response to ↑

    while (!done) {

        //Prompt the user to enter a string for checking
        cout << "Please enter a sring, to be checked for all the letters of the alphabet: " << endl;
        getline(cin, All_letters);


        //Iterate through the user phrase letter by letter checking for each letter, and tell which ones are missing/contained
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < All_letters.length(); j++) {
                if (All_letters[j] == Alphabet[i]) {
                    cout << "You have: " << Alphabet[i] << endl;
                    letter = true;
                }
            }
            if (!letter) {
                cout << "You are missing: " << Alphabet[i] << endl;
            }
            letter = false;
        }

        cout << "would you like to try again. ('Y' or 'N'): ";
        getline(cin, user_done);
        if (user_done == "N"){
            done = true;
        }
    }
    return 0;
}