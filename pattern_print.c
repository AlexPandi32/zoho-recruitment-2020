#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("Enter the Word:");
	scanf("%s",str);
	int len = strlen(str);
    int i,j,space_c;
	int ptr;
	
	
	for(i=0;i<len;i++)
	{
	   space_c=len-i-1;
	   ptr=len/2;
	  for(j=0;j<len;j++)
	  {
	  	if(j>=space_c)
	  	{
	  		printf("%c",str[ptr]);
	  		if(ptr==len-1) ptr=0;
	  		else
	  		 ptr++;
		}
	  	else
	  	  printf(" ");
	  }
	  printf("\n");
    }
	
	
	return 0;
}
