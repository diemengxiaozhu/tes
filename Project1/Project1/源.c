#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//#include<string.h>
//输入一个整数打印其每一位
//void _search(n)
//{
//	if (n < 9)
//	{
//		int t = n % 10;
//		printf("%d\n", t);
//	}
//	else
//	{
//		int e = n % 10;
//	    _search(n / 10);
//		printf("%d\n", e);
//
//	}
//
//
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	_search(n);
//
//	return 0;
//}






/*void init(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		*(&arr[i]) = 0;
	}

}*/
//
//void print(int* arr, int sz)
//{
//	int q = 0;
//	for (q = 0; q < sz; q++)
//	{printf("%-2d\n", *(&arr[q]));
//	}
//}
//
//
int main()
{int a = 4;
if (a > 1);
	printf("你是猪\n");
	if (a > 5);

	printf("你是猪\n");

	//int a=1;
	////int b;
	////int sz = sizeof(arr) / sizeof(arr[0]);
	///*init(arr,sz);*/
	///*scanf("%d %d", &a,&b);*/

	//printf("%d", a-a/(86400*86400));

	return 0;
}
//
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a^b;
//	int q;
//	int count=0;
//	for (q = 0; q < 32; q++)
//	{
//		if ((1 & (c >> q))==1)
//		{
//			count++;
//		}
//
//	}
//	printf("%d\n", count);
//	return 0;
//}






//逆序排列字符串
//int my_strlen(char*arr)
//{
//	int h = 0;
//	int count = 0;
//	while (arr[h] != '\0')
//	{
//		h++;
//		count++;
//	}
//	return count;
//}
//
//void reserve(char arr[])
//{
//	int len = my_strlen(arr);
//	int right = 0;
//	int left = len - 1;
//	if (len > 1)
//	{
//		char temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = '\0';
//		reserve(arr + 1);
//		arr[left] = temp;
//	}
//
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//	int len = my_strlen(arr);
//	reserve(arr);
//	printf("%s", arr);
//	return 0;
//}











//实现一个无符号数的每位相加
//int my_add(unsigned int q)
//{
//	int e;
//	if (q > 9)
//	{
//		 e = my_add(q / 10) + q % 10;
//	
//	}
//	else{ e = q; }
//	return e;
//}
//int main()
//{
//	unsigned q = 0;
//	scanf("%d", &q);
//	int w = my_add(q);
//	printf("%d", w);
//	return 0;
//}








//、、水仙花数1~100000
//double narcissu1(int q, int p)
//{
//	double y = 0;
//	double s = 0;
//	int d = q;
//	for (s = 1; s <= p; s++)
//	{
//		double k=d%10;
//		y = y + pow(k,p);
//		d = d / 10;
//	}
//	return y;
//}
//int narcissu(int q)//求位数
//{
//	int a = 1;
//	int z = q;
//	while (z> 9)
//	{
//		z = z /10;
//		a++;
//	}
//	return a;
//}
//int main()
//{
//	int q = 0	;
//	
//	for (q = 1; q <= 100000; q++)
//	{
//		double u = q;
//		int p = narcissu(q);//求出q的位数
//		double l = narcissu1(q, p);
//		if (l == u)
//		{
//			printf("%lf\n", u);
//		}
//		//printf("%lf\n", l);//求出每一位数和他位数的平方
//	}
//	return 0;
//}


