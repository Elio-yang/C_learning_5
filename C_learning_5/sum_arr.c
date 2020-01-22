#include<stdio.h>
#define SIZE 10
int sump(int ar[], int n);
int main(void)
{
	int marbles[SIZE] = { 20,10,5,39,4,16,19,26,31,20 };//4byte to instore int type. 
	long answer;

	answer = sump(marbles, marbles+SIZE);//return totall
	printf("The total is %ld.\n", answer);

	return 0;
}
int sump(int *ar, int *ar_end)
{
	int i;
	int totall = 0;
	
	while (ar < ar_end)
	{
		totall += *ar;//ar地址上的值
		ar++;//指针+1
	}

	return totall;
}