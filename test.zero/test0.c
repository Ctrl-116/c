#include <stdio.h>

// 使用 #define 替代 const int
#define RED 0
#define YELLOW 1
#define GREEN 2

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", n + n);
    printf("hello world\n");
    return 0;
}