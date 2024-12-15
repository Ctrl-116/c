#include <stdio.h>
#include <math.h>

int pd1(int hw)
{
	for(int i = 3; i < hw; i++){
		if(hw % i == 0){
			return 0;
		}
	}
	printf("%d\n", hw);
	return 0;
}

int pd2(int hw)
{
	int t = sqrt(hw);
	for(int i = 3; i <= t; i += 2){
		if(hw % i == 0){
			return 0;
		}
	}
	printf("%d\n", hw);
	return 0;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	
	int hw, d1, d2, d3, d4;
	
	//判断1位数
	for(d1 = 5; d1 <= 9; d1 += 2){
		hw = d1;
		if(hw >= a && hw <= b){
			pd1(hw);
		}
	} 
	//判断两位数
	for(d1 = 1; d1 <= 9; d1 += 2){
		hw = d1 * 10 + d1;
		if(hw >= a && hw <= b){
			pd1(hw);
		}
	} 
	//判断三位数
	for(d1 = 1; d1 <= 9; d1 += 2) {
		for(d2 = 0; d2 <= 9; d2++){
			hw= d1 * 100 + d2 * 10 + d1;
			if(hw >= a && hw <= b){
				pd1(hw);
			}
		}
	}
	 
	//四位数及四位数之后的偶数位回文数都含有11这个因数，都不是质数 
	//判断五位数 
	for(d1 = 1; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2++){
			for(d3 = 0; d3 <= 9; d3++){
				hw = d1 * 10000 + d2 * 1000 + d3 * 100 + d2 * 10 + d1;
				if(hw >= a && hw <= b){
					pd2(hw);
				} 
			}
		}
	} 
	//判断七位数
	for(d1 = 1; d1 <= 9; d1 += 2){
		for(d2 = 0; d2 <= 9; d2++){
			for(d3 = 0; d3 <= 9; d3++){
				for(d4 = 0; d4 <= 9; d4++){
					hw = d1 * 1000000 + d2 * 100000 + d3 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
					if(hw >= a && hw <= b){
						pd2(hw);
					}
				}
			}
		}
	} 
	return 0;
 } 