#include <stdio.h>
int d = 1;  // 全局变量 d，初始值为 1

void fun(int p) {
    int d = 5;      // 局部变量 d，遮住了全局变量 d
    d += p++;       // 这里的 d 是局部变量 5，p 是传进来的 3
    printf("%d ", d);
}

int main() {
    int a = 3;
    fun(a);         // 把 a 的值（3）传给 fun 函数的 p
    d += a++;       // 这里的 d 是全局变量（因为 main 里没定义局部 d）
    printf("%d ", d);
}
