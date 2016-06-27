#include <stdio.h>

union A{
	int i;
	char c;
}AA;

int main()
{
	AA.i=1;
	if(AA.c==1)
	printf("LE---LE");
	else
	printf("BE---BE");
	printf("%s\n",__func__);
	return 0;
}
	
