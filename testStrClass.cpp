// File: strClass
// Created by Hugo Valle on 11/7/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "MyString.h"
using namespace std;
// Main Program Program
int main()
{
    MyString s1 = "Who knows nothing doubts nothing";
    cout<<"s1= "; s1.display();
    s1.updateString("Now this is what I call music");
    cout<<"now s1= "; s1.display();
    return 0;
}
// Function Definitions