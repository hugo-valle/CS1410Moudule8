//
// Created by hvalle on 11/21/2017.
//

#ifndef MOD8_BANKACCOUNT_H
#define MOD8_BANKACCOUNT_H


class BankAccount
{
private:
    int BalanceInPennies; // TODO
public:
    BankAccount();
    ~BankAccount();

    bool operator < (const BankAccount &b1);
    int getBalanceInPennies() const;
    void setBalanceInPennies(int BalanceInPennies);

};


#endif //MOD8_BANKACCOUNT_H
