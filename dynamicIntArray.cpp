// File: dynamicIntArray
// Created by Hugo Valle on 11/7/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;
// Constants, Structs, Classes
// Main Program Program
int main()
{
    double sum = 0;
    int size;
    // 1) Capture input
    cout<<"How many numbers you want to store?";
    cin >> size;
    // 2) Allocate array of doubles based on input
    double *info = new double[size];
    // 3) Fill in the values
    for (int i = 0; i < size; ++i)
    {
        cout<<"Enter a double value: ";
        cin >> info[i];
    }
    // 4) Display values
    //      keep track of sum of them
    for (int i = 0; i < size; ++i)
    {
        cout<<i<<" values: "<< info[i]<<endl;
        sum += info[i];
    }
    // 5) Display sum
    cout<<"The sum is: "<<sum<<endl;
    // 6) Clean your mess
    delete[] info;
    return 0;
}
// Function Definitions