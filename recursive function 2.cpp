#include<stdio.h>
#include<string.h>

int main()
{
	char str1[100],str2[250],str3[100];
	int res;

	printf("enter the first string:");
	scanf("%49s",str1);
	
	printf("enter the second string:");
	scanf("%49",str2);
	
	res=strlen(str1);
	printf("\nlength of the first string=%d",res);
	
	strcpy(str3,str1);
	printf("\ncopied string=%s",str3);

	res=strcmp(str1,str2);

	if (res==0)
	    printf("\nboth strings are equal");
	else
	    printf("\nboth strings are not equal");
	
	strcat(str1,str2);
	printf("\nconcatenated string = %s",str1);
	
	return 0;
}
