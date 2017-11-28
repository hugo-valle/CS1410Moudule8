//
// Created by hvalle on 11/14/2017.
//

#include "Person.h"


Person::Person(string fn, string ln, int an)
{
    firstName = fn;
    lastName = ln;
    arNumber = an;
    //pResource = NULL; // prior to C++11
    // No need for smart pointers
    //pResource = nullptr; // C++11
}

int Person::getArNumber()
{
    return arNumber;
}

void Person::setArNumber(int arNumber)
{
    Person::arNumber = arNumber;
}
/*!
 * Destructor. Clean memory
 */
Person::~Person()
{
    //delete[] pResource; // IF pResource points to an array
    //delete pResource;
}

/*!
 * Compare Person < Person
 * @param p reference to Person
 * @return True or false
 */
bool Person::operator<(Person &p)
{
    return arNumber < p.arNumber;
}
/*!
 * Get Person Name
 * @return Person's object name
 */
string Person::GetName()
{
    return firstName + " " + lastName;
}

/*!
 * Compare Peron < Inter
 * @param n integer
 * @return True or False
 */
bool Person::operator<(int n)
{
    return arNumber < n;
}

/*!
 * Compare integer < Person
 * @param n integer
 * @param p reference to Person
 * @return True or False
 */
bool operator<(int n, const Person &p)
{
    return n < p.arNumber;
}

void Person::AddResource()
{
    //Resource r("Hello");
    //pResource = &r; // It only lives in this block
    //delete pResource; // NOT Needed
    pResource.reset();
    //pResource = new Resource("Resource for " + GetName()); // will survive
    pResource = make_shared<Resource>("Resource for " + GetName());
}

const string &Person::getFirstName()
{
    return firstName;
}

void Person::setFirstName(const string &firstName)
{
    Person::firstName = firstName;
}

//string Person::GetResourceName()
//{
//    return pResource->GetName();
//}
///*!
// * Copy Constructor.
// * @param p Person Object to be copy
// */
//Person::Person(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
//    // Don to copy the reference. You need to
//    // Create your own memory. Your own copy
//    pResource = new Resource(p.pResource->GetName());
//}

//Person &Person::operator=(const Person &p)
//{
//    firstName = p.firstName;
//    lastName = p.lastName;
//    arNumber = p.arNumber;
//    delete pResource;
//    pResource = new Resource(p.pResource->GetName());
//
//    return *this; // return yourself.
//}
