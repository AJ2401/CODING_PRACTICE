int main ()
{
    char cgrade;
    int imarks;
    printf("enter marks");
    scanf("%d",&imarks);
    if (imarks >79)
        cgrade='A';
        else if (imarks>59)
        cgrade='B';
        else if (imarks>49)
        cgrade ='C';
        else if (imarks>39)
        cgrade='D';
        else
        cgrade ='F';
        printf("grade:%c\n",cgrade);
    return 0 ;
    }
