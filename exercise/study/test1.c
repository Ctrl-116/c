#include <math.h>
#include <stdio.h>
#include <stdbool.h>
// 检查数字是否满足条件的函数
int jy1(int hw){
    int z,g=sqrt(hw);
    for(z=2;z<=g;z+=2) {  //检验判断号 即可
        if(hw%z==0){
            goto end;
        }
    }
    printf("%d\n",hw);
    end:return(0);
}

// 另一个检查函数
int jy2(int hw){
    int z;
    for(z=3;z<hw;z+=2) {  //检验判断号 即可
        if(hw%z==0){
            goto end;
        }
    }
    printf("%d\n",hw);
    end: return(0);
}

int main() {
    int a,b,hw,d1,d2,d3,d4,z;
    scanf("%d %d",&a,&b);
    
    // 一位数检查
    for (d1 = 5; d1 <= 9; d1+=2){
        hw=d1;
        if(hw>=a &&hw<=b){
            jy2(hw);
        }
    }
    
    // 两位数检查
    for (d1 = 1; d1<=9; d1+=2){
        hw=d1*11;
        if(hw>=a &&hw<=b){
            jy2(hw);
        }
    }
    
    // 三位数检查
    for (d1 = 1; d1 <= 9; d1+=2){
        for (d2 = 0; d2 <= 9; d2++){
            hw=d1*100+d2*10+d1;
            if(hw>=a &&hw<=b){
                jy2(hw);
            }
        }
    }
    
    // 五位数检查
    for (d1 = 1; d1 <= 9; d1+=2) {
        for (d2 = 0; d2 <= 9; d2++) {
            for (d3 = 0; d3 <= 9; d3++) {
                hw= 10000*d1 + 1000*d2 +100*d3 + 10*d2 + d1;
                if(hw>=a &&hw<=b){
                    jy1(hw);
                }
            }
        }
    }
    
    // 七位数检查
    for (d1 = 1; d1 <= 9; d1+=2) {
        for (d2 = 0; d2 <= 9; d2++) {
            for (d3 = 0; d3 <= 9; d3++) {
                for (d4 = 0; d4 <= 9; d4++){
                    hw= 1000000*d1 + 100000*d2 +10000*d3 + 1000*d4+d3*100 +d2*10+ d1;
                    if(hw>=a &&hw<=b){
                        jy1(hw);
                    }
                }
            }
        }
    }
    
    return 0;
}