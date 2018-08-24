#include<stdio.h>
int fib(int);
int main(){
	int x;
	scanf("%d",&x);
	printf("%d",fib(x));
}
int fib(int n){
	if(n==1||n==0)
		return 1;
		return fib(n-1)+fib(n-2);// özniyeli taným
}

