#include <iostream>
using namespace std;
//normal 递归
long long factorial_recursive(int n) {
    if (n <= 1) return 1;
    return n * factorial_recursive(n - 1);
}
//tail 尾递归
long long factorial_tail(int n, long long acc = 1) {
    if (n <= 1) return acc;
    return factorial_tail(n - 1, acc * n);
}

int main() {
    std::cout << "factorial_recursive(5) = " << factorial_recursive(5) << std::endl;
    std::cout << "factorial_tail(5)     = " << factorial_tail(5) << std::endl;

   
    std::cout << "factorial_tail(20)    = " << factorial_tail(20) << std::endl;
    return 0;
}
