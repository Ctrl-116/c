#include <stdio.h>
#include <stdbool.h>
struct date{
	int month;
	int day;
	int year;
};

bool isLeap(struct date d); //判断闰年 
int NumsOfMon(struct date d); //每月天数 

int main()
{
	struct date today, tomorrow;
	
	printf("请输入日期(mm dd yyyy):");
	scanf("%i %i %i", &today.month, &today.day, &today.year);
	
	if(today.day != NumsOfMon(today)){ //一个月还未结束 
		tomorrow.month = today.month;
		tomorrow.day = today.day + 1;
		tomorrow.year = today.year;
	}else if(today.month == 12){ //12月最后一天 
		tomorrow.month = 1;
		tomorrow.day = 1;
		tomorrow.year = today.year + 1;
	}else{ //一个月结束（非12月） 
		tomorrow.month = today.month + 1;
		tomorrow.day = 1;
		tomorrow.year = today.year;
	}
	
	printf("明天是: %i-%i-%i\n", tomorrow.month, tomorrow.day, tomorrow.year);
	return 0;
}

bool isLeap(struct date d)
{
	bool leap = false;
	if((d.year % 4 == 0 && d.year % 100 !=0) || d.year % 400){
		leap = true;
	}
	return leap;
}

int NumsOfMon(struct date d)
{
	int days;
	int MonPerDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if(d.month == 2 && isLeap(d)){
		days = 29;
	}else{
		days = MonPerDays[d.month - 1];
	}
	
	return days;
}