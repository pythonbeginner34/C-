int My_strlen(char* str)
{
	char* start = str;
	while (*str != '0')
	{
		str++;
	}
	return str - start;//ָ��-ָ���������ָ��֮���Ԫ�ظ���
}

int My_strlen(char* str)
{
	if (str = '0')
	{
		return 0;
	}
	else
	{
		return 1 + My_strlen(str + 1);//�ݹ�ʵ��strlen 
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