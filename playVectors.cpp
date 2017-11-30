// File: playVectors.cpp
// Created by Hugo Valle on 11/28/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "Person.h"

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

    // Now a vector of Objects
    vector<Person> vp;
    Person Waldo("Waldo", "Weber", 123);
    Person Vandy("Vandy", "Vanderbilt", 678);
    vp.push_back(Waldo);
    vp.push_back(Vandy);
    // Use iterator to get objects
    for(auto ip = vp.begin(); ip != vp.end(); ip++)
    {
        cout<<ip->GetName()<<endl;
        // This requires your object to have
        // output << operator defined
        cout<<*ip<<endl;
    }
    cout<<Waldo<<endl;
    // Now, lets talk about MAPs
    map<int, Person> people;
    //         key <int>      =  value <Person>
    people[Waldo.getArNumber()] = Waldo;
    // IF the key exist, you update the value,
    // ELSE you create the value
    people[Vandy.getArNumber()] = Vandy;
    //for(auto item:people)
    for(auto ip = people.begin(); ip != people.end(); ip++)
    {
        // the two components of my map are:
        //    key->first               value->second
        cout<<ip->first<< " " << ip->second.getFirstName()<<endl;
    }
    Person Elmo("Elmo", "Street", 100);
    people[123] = Elmo;
    people[124] = Elmo;
    for(auto item:people)
    {
        // the two components of my map are:
        //    key->first               value->second
        cout<<item.first<< " " << item.second.getFirstName()<<endl;
    }



    return 0;
}
// Function Definitions