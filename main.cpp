#include <iostream>

#include <arrayfire.h>
#include <flashlight/fl/flashlight.h>

int main() {
 fl::Variable v(af::constant(1, 1), true);
 auto result = v + 10;
 std::cout << "Hello World!" << std::endl;
 af::print("Array value is ", result.array()); // 11.000
 return 0;
}