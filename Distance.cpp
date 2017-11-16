//
// Created by hvalle on 11/9/2017.
//
#include <iostream>
using namespace std;
#include "Distance.h"

Distance::Distance()
{
    feet = 0;
    inches = 0.0;
}

Distance::Distance(int f, float i)
{
    //Distance::feet = f;
    //Distance::inches = i;
    feet = f;
    inches = i;
}

/*!
 * Get Distance Getters
 */
void Distance::getDistance()
{
    cout<<"\nEnter feet: ";
    cin>>feet;
    cout<<"\nEnter inches: ";
    cin>>inches;
    if(inches >= 12.0)  // too big
    {
        throw InchesEx();
        //throw "Bad input, index too hight";
    }

}

void Distance::showDistance()
{
    cout<<feet << "\'-"<<inches<<"\"";
}
