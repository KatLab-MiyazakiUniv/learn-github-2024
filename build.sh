git clone https://github.com/google/googletest.git
cd googletest
rm -rf build
mkdir build
cd build
cmake ..
make
make install