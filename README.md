

1. googletest/build の中身を削除

```
# Permission denied エラーが発生したら、以下コマンドを実行
# chmod 755 build_make_install.sh

./build_make_install.sh
```

もしくは

```
cd googletest
rm -rf build
mkdir build
```

2. cmake 実行

ここまで build_make_install.sh に書いてある。
手打ちなら続きのコマンドを、以下の通りに。

```
cd build
cmake ..
make
make install
```

3. gtest実行

`./gtest_all.sh`

もしくは

```
# Permission denied エラーが発生したら、以下コマンドを実行
# chmod 755 gtest_all.sh

g++ test/*.cpp modules/*.cpp -pthread -lgtest_main -lgtest -o gtest
./gtest
rm gtest
```