#include <iostream>
#include "lib/mylib.hpp"

int main() {
    std::cout << "Sum: " << add(5, 3) << std::endl;
    std::cout << "Difference: " << subtract(5, 3) << std::endl;
    return 0;
}


// Static library commands
//// cd lib
//// clang++ -c add.cpp subtract.cpp
//// ar rcs libmylib.a add.o subtract.o
//// cd ../
//// clang++ main.cpp ./lib/libmylib.a -o app


// Dynamic library commands
//// cd lib
//// clang++ add.cpp subtract.cpp --shared -o libmylib.so
//// sudo cp libmylib.so /usr/local/lib
//// sudo ldconfig 
//// cd ../
//// clang++ main.cpp -o app -l mylib
//// ldd app
