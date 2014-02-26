#include<stdio.h>
#include <string.h>

 void func(char string[],int i)
{
	if(string[i] == '\0')
	{
		printf("%s \n",string);
		return;
	}
	else
	{
		string[i]=tolower(string[i]);
		func(string,i+1);
		string[i]=toupper(string[i]);
		func(string,i+1);	
	}
    return;
}
     
int main()
{    
char string[]="SHUBHAM";

func(string,0);
return 0;
}
