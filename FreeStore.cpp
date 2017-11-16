// File: FreeStore.cpp
// Created by Hugo Valle on 11/14/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
#include "Resource.h"

using namespace std;
// Main Program Program
int main()
{
    {
        Resource localResource("local");
        string localString = localResource.GetName();
    }
    Resource *pResource = new Resource("Create with new");
    string newString = pResource->GetName();
    cout<<newString<<endl;

    int j = 3;
    if(j == 2)
    {
        delete pResource;
        return 1;
    }
    // Clean
    Resource *p2 = pResource; // Pointer Resource to a pointer Rosource
    string s3 = p2->GetName();

    cout<<"s3: "<< s3<<endl;
    delete pResource;
    string s4 = pResource->GetName();
    cout<<"s4: "<<s4<<endl; // SHOULD NOT BE THERE???
    pResource = nullptr;
    delete pResource; // Crashes your system, delete twice
    delete p2;

    cout <<"Done"<<endl;
    return 0;
}
