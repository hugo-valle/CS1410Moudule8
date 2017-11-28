// File: playVectors.cpp
// Created by Hugo Valle on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
// Main Program Program
int main()
{
    vector<int> v;
    v.push_back(3); // add a member
    v.push_back(99); // add a member
    v.push_back(-23); // add a member
    v.push_back(6); // add a member
    //cout<<v[0]<<endl;

    // Using auto iterator with a range
    for(auto i = v.begin(); i != v.end(); i++)
    {
        cout<< *i << " ";
    }
    cout<<endl;
    // Using index notation
    for(unsigned int i = 0; i < v.size(); i++)
    {
        cout<< v[i] << " ";
    }
    cout<<endl;

    // Using directly an iterator
    for(auto item:v)
    {
        cout<< item << " ";
    }
    cout<<endl;
    // Using auto iterator with reverse range
    for(auto i = v.rbegin(); i != v.rend(); i++)
    {
        cout<< *i << " ";
    }
    cout<<endl;
    // Display the max, min, and sort your array.
    sort(begin(v), end(v));
    for(auto item:v)
    {
        cout<< item << " ";
    }
    cout<<endl;
    auto result = max_element(begin(v), end(v));
    //cout<<"max is "<< v[distance(v.begin(), result)] << endl;
    cout<<"max value is "<< *result << endl;
    result = min_element(begin(v), end(v));
    cout<<"min value is "<< *result << endl;

    return 0;
}
// Function Definitions