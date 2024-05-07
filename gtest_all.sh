# Permission denied エラーが発生したら、以下コマンドを実行
# chmod 755 gtest_all.sh

g++ test/*.cpp modules/*.cpp -pthread -lgtest_main -lgtest -o gtest
./gtest
rm gtest