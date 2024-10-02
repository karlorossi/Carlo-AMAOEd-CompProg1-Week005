#include <iostream>
#include <string>
using namespace std;

int main()
{
string name, password, address;
cout << "Enter your name: ";
getline(cin, name);
cout << "Enter your password: ";
getline(cin, password);
cout << "Enter your address: ";
getline(cin, address);
//“Hi, I am user’s name. I live at user’s address.”.
cout << "Hi, I am "<<name <<". I live at "<< address <<".";
}