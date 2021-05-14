int My_strlen(char* str)
{
	char* start = str;
	while (*str != '0')
	{
		str++;
	}
	return str - start;//指针-指针代表两个指针之间的元素个数
}

int My_strlen(char* str)
{
	if (str = '0')
	{
		return 0;
	}
	else
	{
		return 1 + My_strlen(str + 1);//递归实现strlen 
	}
}

int My_strlen(char* str)
{
	int count = 0;
	while (str != '0')
	{
		str++;
		count++;
	}
	return count;
}