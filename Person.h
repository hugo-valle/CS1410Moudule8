//
// Created by hvalle on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H
#include <iostream>
#include <memory>   // for smart pointers
#include "Resource.h"
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
    //Resource *pResource;
    shared_ptr<Resource> pResource; // declare a shared pointer


public:
    Person(string fn, string ln, int an);

    Person();

    //Person(const Person &p); // copy constructor
    ~Person();
    string GetName(); // return first + last
    // Setter and Getter for the arNumber
    int getArNumber();
    void setArNumber(int arNumber);
    const string &getFirstName();
    void setFirstName(const string &firstName);

    // Operator overload for < and >
    bool operator < (Person &p);
    bool operator < (int n);
    friend bool operator < (int n, const Person &p);
    void AddResource();
    //Person&operator = (const Person &p);
    //string GetResourceName();

    friend ostream &operator<<(ostream &os, const Person &person);
};
bool operator < (int i, const Person &p);


#endif //MOD8_PERSON_H
