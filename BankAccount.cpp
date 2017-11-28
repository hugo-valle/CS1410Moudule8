//
// Created by hvalle on 11/21/2017.
//

#include "BankAccount.h"
#include <iostream>
using namespace std;

BankAccount::BankAccount()
{
    cout<<"Constructor Bank Account"<<endl;
}

BankAccount::~BankAccount()
{
    cout<<"Destructor Bank Account"<<endl;
}

int BankAccount::getBalanceInPennies() const
{
    return BalanceInPennies;
}

void BankAccount::setBalanceInPennies(int BalanceInPennies)
{
    BankAccount::BalanceInPennies = BalanceInPennies;
}

bool BankAccount::operator<(const BankAccount &b1)
{
    return BalanceInPennies < b1.BalanceInPennies;
}
