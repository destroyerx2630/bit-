#include<stdio.h>

int main (void){
	int n,x=0;
	char s[10];
	int i=0;
	scanf("%d",&n);
	while(i<n){

		scanf("%s", s);
		if(s[1] == '+')
			x++;
		if(s[1] == '-')
			x--;
		i++;

	}
	printf("%d",x);
	return 0;
}
