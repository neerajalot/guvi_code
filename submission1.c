#include <stdio.h>

int main()
{
	long long int i = 0;
	scanf("%lld", &i);
	if(i>0)
	{
		printf("positive");
	}else{
		if(i<0){
			printf("negative");
			return 0;
		}
		printf("0");
	}
}
