#include <iostream>
using namespace std;

int main(){
int kilobytes;
cout << "Enter the number of kilobytes:";
cin >> kilobytes;

int bytes = kilobytes * 1024;
int bits = bytes * 8;

cout << kilobytes << " kilobytes is equal to " << bytes << " bytes and " << bits << " bits." << endl;

  return 0;
}
