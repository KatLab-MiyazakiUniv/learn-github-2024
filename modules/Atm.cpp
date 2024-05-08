#include "Atm.h"

// コンストラクタ
Atm::Atm(int init) {
    if(init < 0){
        balance = 0;
    }else{
        balance = init;
    }
}

// 残高(balance)を返す
int Atm::getBalance()
{
    // if (balance > 0){
    return balance;
    // }else{
    //     return 0;
    // }
}

// 入金
//ATM.cpp
void Atm::deposit(int amount)
{
    if(amount < 0 ){
        return;
    }
    
    balance += amount;
}

// 引き出し
void Atm::withdrawal(int amount)
{
    if (amount > 0 && balance - amount >= 0)
    {
        balance -= amount;
    }
}