#include<stdio.h>
int main(){
int n;
int sum;
sum=0;//intialize sum
n=1;
while(n<=100)
{
 sum=sum+n;
 n=n+1;
}
printf("%d",sum);
return 0;
}

