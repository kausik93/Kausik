#include <stdio.h>

int main()
{
int sum = 0;
int x;
for(x=1; x<1000; x++)
	if(x%3==0)
		sum=sum+x;

for(x=1; x<1000; x++)	
	if(x%5==0)
		sum=sum+x;

for(x=1; x<1000; x++)
	if(x%15==0)
		sum=sum-x;

printf("%i\n", sum);
}