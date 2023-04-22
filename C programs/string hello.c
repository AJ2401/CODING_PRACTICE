#include<stdio.h>
int main(){
    char greeting[] ="hello";
    char yourname[80];
    printf("enter your name");
    scanf("%s",yourname);
    printf("%s,%s",greeting,yourname);
    return 0;
}
