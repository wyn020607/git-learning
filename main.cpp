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

// 普通递归：重复计算多，O(2^n)
long long fib_recursive(int n) {
    if (n <= 1) return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// 尾递归：用累加器，O(n)，不爆栈
long long fib_tail(int n, long long a = 0, long long b = 1) {
    if (n == 0) return a;
    return fib_tail(n - 1, b, a + b);
}

int main() {
    std::cout << "factorial_recursive(5) = " << factorial_recursive(5) << std::endl;
    std::cout << "factorial_tail(5)     = " << factorial_tail(5) << std::endl;

   
    std::cout << "factorial_tail(20)    = " << factorial_tail(20) << std::endl;
    return 0;
}
