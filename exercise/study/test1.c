#include<stdio.h>
#include <stdbool.h>

bool isPrime(int x)
{
	bool ret = true;
	if(x == 1)ret = false;
	else if((x != 2 && x != 3) && (x % 2 == 0 || x % 3 == 0)){
		ret = false;
	}
	if(ret){
		for(int i = 5; i * i <= x; i += 6){
			if(x % i == 0 || x % (i + 2) == 0){
				ret = false;
			}
		}
	}
	return ret;
}

int condition(int x, int a, int b){
    int ret = 0;
    if(x >= a && x <= b){
        ret = 1;
    }
    return ret;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
	int palindrome;
	int d1, d2, d3, d4, d5;
	
	 // 只有奇数才会是素数
	//1

	for(d1 = 1; d1 <= 9; d1 += 2){
		palindrome = d1;
        if(isPrime(palindrome) && condition(palindrome, a, b)){
            printf("%d\n", palindrome);
        }
	} 
	
	//2
	for(d1 = 1; d1 <= 9; d1 += 2){
		palindrome = d1 * 10 + d1;
        if(isPrime(palindrome) && condition(palindrome, a, b)){
            printf("%d\n", palindrome);
        }

	}
	
	//3
	for(d1 = 1; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2 ++){
			palindrome = d1 * 100 + d2 * 10 + d1;
            if(isPrime(palindrome) && condition(palindrome, a, b)){
                printf("%d\n", palindrome);
            }
		}
	}
	
	//4
	for(d1 = 1; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2++){
			palindrome = d1 * 1000 + d2 * 100 + d2 * 10 + d1;
            if(isPrime(palindrome) && condition(palindrome, a, b)   ){
                printf("%d\n", palindrome);
            }
		}
	}
	
	//5
	for(d1 = 1; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2++){
			for(d3 = 0; d3 <= 9; d3++){
				palindrome = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
                if(isPrime(palindrome) && condition(palindrome, a, b)){
                    printf("%d\n", palindrome);
                }
			}
		}
	}
	
	//6
	for(d1 = 0; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2++){
			for(d3 = 0; d3 <= 9; d3++){
                palindrome = d1 * 100000 + d2 * 10000 + d3 * 1000 + d3 * 100 + d2 * 10 + d1;
                if(isPrime(palindrome) && condition(palindrome, a, b)){
                    printf("%d\n", palindrome);
                }
			}
		}
	}
	
	//7
    for(d1 = 1; d1 <= 9; d1 += 2){
        for(d2 = 0; d2 <= 9; d2++){
            for(d3 = 0; d3 <= 9; d3++){
                for(d4 = 0; d4 <= 9; d4++){
                    palindrome = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d4 * 100 + d3 * 10 + d2 * 1 + d1;
                    if(isPrime(palindrome) && condition(palindrome, a, b)){
                        printf("%d\n", palindrome);
                    }
                }
            }
        }
    }

    //8
    for(d1 = 1; d1 <= 9; d1 += 2){
        for(d2 = 0; d2 <= 9; d2++){
            for(d3 = 0; d3 <= 9; d3++){
                for(d4 = 0; d4 <= 9; d4++){
                    palindrome = d1 * 10000000 + d2 * 1000000 + d3 * 100000 + d4 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                    if(isPrime(palindrome) && condition(palindrome, a, b)){
                        printf("%d\n", palindrome);
                    }
                }
            }
        }
    }
	//9
	for (d1 = 1; d1 <= 9; d1 += 2) {   
		for (d2 = 0; d2 <= 9; d2++) {
			for (d3 = 0; d3 <= 9; d3++) {
				for(d4 = 0; d4 <= 9; d4++){
					for(d5 = 0; d5 <= 9; d5++){
						palindrome = d1 * 100000000 + d2 * 10000000 + d3 * 1000000 + d4 * 100000  + d5 * 10000 
						+ d4 * 1000 + d3 * 100 + d2 * 10 + d1;
                        if(isPrime(palindrome) && condition(palindrome, a, b)   ){
                            printf("%d\n", palindrome);
                        }
					}
				}
			}
		}
 	}
 	
	return 0;
}







