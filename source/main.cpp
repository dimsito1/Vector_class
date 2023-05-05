#include "vector.hpp"

int main() {
    std::cout << "Program started" << std::endl;

    Vector v1 = {1 , 2, 3, 4};
    Vector v2 = {1, 7, 3, 4};
    // v1 == v2 ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
    v2 += v1;
    v2.sort();
    std::cout << v2 << std::endl;
    std::cout << "Program ended" << std::endl;
    return 0;
}