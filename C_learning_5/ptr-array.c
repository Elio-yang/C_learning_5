#include<stdio.h>
int main()
{
	char* arr[5] =
	{
		"Nothing is impossible\n",//char* arr[0]="Nothing is impossible\n"
		"Just do it\n",
		"One more thing\n",
		"To be or not to be\n",
		"I think then I am\n"
	};

	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%s", arr[i]);
		printf("%p\n", arr[i]);
	}

	return 0;
}
/*
可以不定义字符数组，而定义一个字符指针。用字符指针指向字符串中的字符。

#include<stdio.h>
int main() 
{
	char *string = "I love China!";
	printf("%s\n", string);
	return 0;
}

 在这里没有定义字符数组，在程序中定义了一个字符指针变量string，用字符串
 常量“I love China!"对它初始化。C语言对字符串常量是按字符数组处理string，
 在内存中开辟了一个字符数组用来存故该字符串常量。对字符指针C变量string初始化，
 实际上是把字符串第1个元素的地址(即存放字符串的字符数组的首元素地址)赋string。
 有人误认为，string是一个字符串变量，以为在定义时把“I love China!"这几个字
 符赋给该字符串变量，这是不对的。
 
 定义string的部分:

char *string = "I love China!"

等价于：
	char *string;
	string = "I love China!";
 可以看到string被定义为一个指针变量，指向字符型数据，请注意它只能指向一个字符变量
或其他字符类型数据, 不能同时指向多个字符数据, 更不是把“I love China!"这些字符存
放到string中(指针变量只能存放地址)，也不是把字符串赋给* string。
只是把“I love China!"的第1个字符的地址赋给指针变量string。

输出时用printf("%s\n", string); ，%s是输出字符串时所用的格式符，在输出项中给出
字符指针变量名string, 则系统先输出它所指向的一个字符数据，然后自动使string加1，
使之指向下一个字符，然后再输出一个字符.....如此直到遇到字符串结束标志'\0'为止。
注意，在内存中，字符串的最后被自动加了一个‘\0'，因此在输出时能确定字符串的终止位置。
说明:通过字符数组名或字符指针变量可以输出一个字符串。而对一个数值型数组，是不能企图
 用数组名输出它的全部元素的。
*/

/*
此部分放在后面的章节进行学习：字符串
*/