
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>


//int char_to_num(char ch)
//{
//	if (ch >= '0' && ch <= '9')
//	{
//		return ch - '0';
//	}
//	else 
//	{
//		return ch - 'A' + 10;
//	}
//}
//
//
//int my_strlen(char* str)
//{
//	assert(str != NULL);
//	char* start = str;
//	while (*str != '\0')
//	{
//		str++;
//	}
//	return str - start;
//}
//
//int score_to_dacimal(char* str, int score)
//{
//	int i = 0;
//	int tmp = my_strlen(str);
//	int decimal_num = 0;
//	for (i = 0; i < tmp; i++)
//	{
//		decimal_num = (decimal_num * score) + char_to_num(str[i]);
//	}
//	return decimal_num;
//}
//
//int main()
//{
//
//	char temp[10] = "ABCDEF";
//	int decimal_num = score_to_dacimal(temp, 16);
//	printf("%d\n", decimal_num);
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("%d\n", printf("Hello world!\n") - 1);
//	return 0;
//}





//#include<stdio.h>
//#include<assert.h>
//
//int char_to_num(char* str);
//
//int main()
//{
//	char arr1[100] = { 0 };
//	char arr2[100] = { 0 };
//	char arr3[100] = { 0 };
//	int score1 = 0;
//	int score2 = 0;
//	int score3 = 0;
//	scanf("%s %s %s", arr1, arr2, arr3);
//	score1 = char_to_num(arr1);
//	score2 = char_to_num(arr2);
//	score3 = char_to_num(arr3);
//	printf("score1=%d,score2=%d,score3=%d\n", score1, score2, score3);
//	return 0;
//}
//
//int char_to_num(char* str)
//{
//	assert(str != NULL);
//	int temp = 0;
//	while (*str != '\0')
//	{
//		temp = (temp * 10) + (*str - '0');
//		str++;
//	}
//	return temp;
//}


//#include<stdio.h>
//
//struct student
//{
//	int num;
//	float score1;
//	float score2;
//	float score3;
//}stu;
//
//
//int main()
//{
//	struct student* p = &stu;
//	scanf("%d;%f,%f,%f",&(p->num), &(p->score1), &(p->score2),&(p->score3));
//	float i = (int)((p->score1) * 100 + 0.5) / 100.0;
//	float j = (int)((p->score2) * 100 + 0.5) / 100.0;
//	float z = (int)((p->score3) * 100 + 0.5) / 100.0;
//	printf("The each subject score of No. %d is %0.2f, %0.2f, %0.2f.",p->num, i, j ,z);
//	return 0;
//} 

//#include<stdio.h>
//#define ROW 5
//#define COL 5
//
//int main()
//{
//    int i = 0;
//    int j = 0;
//    char num = 0;
//    scanf("%c", &num);
//    for (i = 1; i <= ROW; i++)
//    {
//        for (j = 1; j <= COL - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - i; j++)
//        {
//            printf("%c ", num);
//        }
//        printf("\n");
//    }
//}

//#include<stdio.h>
//
//int main()
//{
//    int i = 0;
//    int arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    for (i = 0; i < 12; i++)
//    {
//        printf("%c", arr[i]);
//    }
//    return 0;
//}

//
//#include<stdio.h>
//struct brith
//{
//	int year;
//	int month;
//	int day;
//}x;
//
//int main()
//{
//	scanf("%4d%2d%2d", &(x.year), &(x.month), &(x.day));
//	printf("year=%d\n", x.year);
//	printf("month=%02d\n", x.month);
//	printf("day=%d\n", x.day);
//}

//#include<stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int tmp = 0;
//    scanf("a=%d, b=%d", &a, &b);
//    tmp = a;
//    a = b;
//    b = tmp;
//    printf("a=%d,b=%d\n", a, b);
//    return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	printf("%d", ch);
//}

//#include<stdio.h>
//
//int main()
//{
//    int a = 40;
//    int c = 212;
//    double result = (-8 + 22) * a - 10 + c / 2;
//    printf("%lf", result);
//    return 0;
//}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char arr[100] = { 0 };
	gets(arr);
	int length = strlen(arr);
	char* start = arr;
	char* end = arr + length - 1;
	while (*start != '\0')
	{
		if (*start == ' ')
		{
			*start = '\0';
		}
		start++;
	}
	start = arr;
	while (end > start)
	{
		if (*end == '\0')
		{
			printf("%s ", end + 1);	
		}
		end--;
	}
	printf("%s", end);
	return 0;
}