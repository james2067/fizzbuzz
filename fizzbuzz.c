#include <stdio.h>
int main()
{
int x = 1;
for(x=1; x<101; x++)
	{
	if(((x%3)||(x%5))==0)
		printf("FizzBuzz\n");
	else if((x%3)==0)
		printf("Fizz\n");
	else if((x%5)==0)
		printf("Buzz\n");
	else
		printf("%d\n", x);
	}
return 0;
}





