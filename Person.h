//
// Created by hvalle on 11/14/2017.
//

#ifndef MOD8_PERSON_H
#define MOD8_PERSON_H
#include <iostream>
#include "Resource.h"
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    int arNumber;
    Resource *pResource;
public:
    Person(string fn, string ln, int an);
    Person(const Person &p);
    ~Person();
    string GetName() const; // return first + last
    // Setter and Getter for the arNumber
    int getArNumber() const;
    void setArNumber(int arNumber);
    const string &getFirstName() const;
    void setFirstName(const string &firstName);

    // Operator overload for < and >
    bool operator < (Person &p) const;
    bool operator < (int n) const;
    friend bool operator < (int n, const Person &p);
    void AddResource();
    Person&operator = (const Person &p);
};
bool operator < (int i, const Person &p);


#endif //MOD8_PERSON_H
