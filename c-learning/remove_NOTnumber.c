#include<stdio.h>
#include <string.h>  //fgets 的相关的函数通常需要它

int main(){
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);  //使用 fgets ，不使用 gets，因为 gets 已经被弃用

//fgets 会把换行符也读进去，所以我们需要把它去掉(不过这个程序不去掉也行)
    size_t len = strlen(arr);
    if (len > 0 && arr[len - 1] == '\n') {
        arr[len - 1] = '\0';
    }

    char *p = arr,*q = arr;
    while( *p != '\0'){
        if( *p >= '0' && *p <= '9'){
            *q++ = *p;
        }
        p++;
    }
    *q = '\0';
    puts(arr);
    return 0;
}