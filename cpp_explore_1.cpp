/**
* @file     cpp_explore_1.cpp
* @author   Furkan Karagoz
* @date     13 June 2022
*/

#include <iostream>
#include <string>
using namespace std;

class myClass
{
public:
    myClass();
    myClass(int, char, string);
    void setInt( int );
    int getInt( void );
    char getChar(void);
    string getString(void);
private:
    int myInt;
    char myChar;
    string myString;
};

/**
 * @brief sets the instances to default vlaues
*/
myClass::myClass()
{
    myInt = 99;
    myChar = 'R';
    myString = "default_val";

    std::cout << "Default ctor called.";
}

myClass::myClass(int parInt, char parChar, string parSting)
{
    myInt = parInt;
    myChar = parChar;
    myString = parSting;

    std::cout << "Custom ctor called.";
}

void myClass::setInt(int parInt)
{
    myInt = parInt;
}

int myClass::getInt(void)
{
    return myInt;
}

char myClass::getChar(void)
{
    return myChar;
}

string myClass::getString(void)
{
    return myString;
}

int main()
{
    myClass myObj;

    myObj.setInt(100);

    std::cout << "Hello World!\n";
    std::cout << "Int: " << myObj.getInt() << "\tChar: " << myObj.getChar() << "\tString: " << myObj.getString() << "\n";
}

/*  Steps Followed for Git
* 
*   1.  Git installed by Windows installer tool.
*   2.  Git initialized for the current local repo by VS
*   3.  Local directory navigated by PowerShell
*   4.  Git add current .cpp file
*   5.  Git commit -m "" commit message added
*   6.  git remote add Cpp_Explore https://github.com/f-karagoz/Cpp_Explore.git
*   7.  git push and voila!
*/