// cpp_explore_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class myClass
{
public:
    int myInt;
    char myChar;
    string myString;
};

int main()
{
    myClass myObj;

    myObj.myInt = 10;
    myObj.myChar = 'A';
    myObj.myString = "HELLO";

    std::cout << "Hello World!\n";
    std::cout << "Int: " << myObj.myInt << "\tChar: " << myObj.myChar << "\tString: " << myObj.myString << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/*  Steps Followed for Git
* 
*   1.  Git installed by Windows installer tool.
*   2.  Git initialized for the current local repo by VS
*   3.  Local directory navigated by PowerShell
*   4.  Git add current .cpp file
*   5.  Git commit -m "" commit message added
*   6.  git remote add Cpp_Explore https://github.com/f-karagoz/Cpp_Explore.git
*   7.  git push and voila!
*
*
*
*
*
*/
