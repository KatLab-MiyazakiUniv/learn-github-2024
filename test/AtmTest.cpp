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

    // 残高以上の引き出し、振込の関数を新しく作り、残高が移動しているかなど 
}