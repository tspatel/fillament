#include<stdio.h>
main()
{
	char str[50];
	int i,len,a=0;
	printf("enter the string =");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			a=1;
		}
	}
	if(a==0)
	printf("string is palindrome");
	else
	printf("string is not palindrome");
	
	
}
