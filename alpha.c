#include<stdio.h>
#include<conio.h>
int main()
{char b;
printf("enter alphabet\n");
scanf("%c",&b);
if((b>='a'&&b<='z')||(b>='A'&&b<='Z'))
{
	printf("alphabet");

}
else
{
printf("no");
}
return 0;
}
