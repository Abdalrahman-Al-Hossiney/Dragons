#include <iostream>
using namespace std;

int main()
{   // Convert ASCII to Character
  int ascii;    
    cout << "Enter an ASCII value: ";
    cin >> ascii;
    cout << "The character for ASCII value " << ascii << " is: " << char(ascii) << endl;
    

   // Convert Character to ASCII
  char character;
    cout << "Enter a character: ";
    cin >> character;
    cout << "The ASCII value for character '" << character << "' is: " << int(character) << endl;

  return 0;
}
