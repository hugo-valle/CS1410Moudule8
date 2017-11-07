//
// Created by hvalle on 11/7/2017.
//
#include <iostream>
using namespace std;
#include <cstring>
#include "MyString.h"

MyString::MyString(char *s)
{
    int length = strlen(s);   // length of input string
    // Get memory
    str = new char[length + 1];
    strcpy(str, s); // copy argument to new allocated space, and save address to str
}

MyString::~MyString()
{
    cout<<"Deleting memory"<<endl;
    delete [] str;
}

void MyString::display()
{
    cout<<str<<endl;
}
/*!
 * Update string. This will allocate new memory.
 * Change my pointer to the new space
 * Delete old memory
 * @param newStr New string to update
 */
void MyString::updateString(char *newStr)
{
    int length = strlen(newStr);   // length of input string
    char *temp = new char[length + 1]; // allocate new memory
    strcpy(temp, newStr); // copy argument to new allocated space, and save address to str
    cout<<"Deleting Old memory"<<endl;
    delete [] str;  // Delete
    str = temp;     // Point to new allocated space
}
