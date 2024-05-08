#include <gtest/gtest.h>
#include "../modules/Atm.h"

namespace etrobocon2024_learn
{
    // TEST(テスト対象クラス名, テストケース名){}
    TEST(Atm, AtmInit)
    {
        Atm atm(1000);

        int expected = 1000;

        EXPECT_EQ(expected, atm.getBalance());
    }

    // マイナスの残高を弾き、0円とできるか。
    TEST(Atm, AtmBalanceMinuse)
    {
        Atm atm(-1000);
        
        int expected = 0;

        EXPECT_EQ(expected, atm.getBalance());
    }

    TEST(Atm, AtmBalancedeposit)
    {
        Atm atm(1000);

        atm.deposit(1000);

        int expected = 2000;

        EXPECT_EQ(expected, atm.getBalance());
    }

    TEST(Atm, AtmBalancewithdrawal)
    {
        Atm atm(1000);

        atm.withdrawal(1000);

        int expected = 0;

        EXPECT_EQ(expected, atm.getBalance());
    }

    TEST(Atm, ATMDeposit){

        Atm atm(0);

        atm.deposit(1000);

        int expected = 1000;

        EXPECT_EQ(expected, atm.getBalance());
    }

    TEST(Atm, ATMDepositMinus){

        Atm atm(1000);

        atm.deposit(-1000);

        int expected = 1000;

        EXPECT_EQ(expected, atm.getBalance());
    }

    TEST(Atm, AtmWithdrawCorrect)
    {
        Atm atm(1000);
        atm.withdrawal(1000);
        int expected = 0;
        EXPECT_EQ(expected, atm.getBalance());
    }
    TEST(Atm, AtmWithdrawMinus)
    {
        Atm atm(1000);
        atm.withdrawal(-1000);
        int expected = 1000;
        EXPECT_EQ(expected, atm.getBalance());
    }
    TEST(Atm, AtmWithdrawBalanceMinus)
    {
        Atm atm(1000);
        atm.withdrawal(2000);
        int expected = 1000;
        EXPECT_EQ(expected, atm.getBalance());
    }

    // 残高以上の引き出し、振込の関数を新しく作り、残高が移動しているかなど 

    // Aridome

    TEST(Atm, AtmBalanceWithCharacter){
        Atm atm(9999999999999999999999999999999);

        int expected = 0;
        EXPECT_EQ(expected, atm.getBalance());
    }
}