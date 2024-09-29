#include <iostream>
#include "include/my_add.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        std::cerr << "Not enough variables" << std::endl;
    }

    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);

    std::cout << my_add(a, b) << std::endl;

    return 0;
}