// pnt_add.c -- pointer addition
#include <stdio.h>
#define SIZE 4
int main(void)
{
	short dates[SIZE];
	short * pti;
	short index;
	double bills[SIZE];
	double * ptf;

	pti = dates;    // assign address of array to pointer
	ptf = bills;
	printf("%23s %15s\n", "short", "double");
	for (index = 0; index < SIZE; index++)
		printf("pointers + %d: %10p %10p\n",
			index, pti + index, ptf + index);
	//pti and ptf are both pointers,when do addition on them
	//the adress they have will move backward one unit,for example
	//in this case pti is pointed to type short data,which pocess
	//2Byte in the memory.So when +1 ,the adress will +2.
	//but for ptf it's pinted to a double type data,so will +8
	//ps:for an array arr[x],arr==&arr[0] can both represent the head-addres.
	return 0;
}