 #include<iostream>
 using namespace std;
 int Func(int n)
 {
     if(n==1)
     {
         for(int i=1;i<=21;i++)
         {

             if(i%2==0)
             {
              cout<<1<<"    ";
             }
             else
             {

                 cout<<n<<"   ";
             }
         }
     }
      if(n==2)
     {
         for(int i=1;i<=21;i++)
         {
             if(i%2==0)
             {
              cout<<"    "<<3;
             }
             else
             {
                 cout<<"    "<<n;
             }
         }
     }
      if(n==3)
     {
         for(int i=1;i<=21;i++)
         {
             if(i%2==0)
             {
              cout<<" "<<2;
             }
             else
             {
                 cout<<"    "<<n;
             }
         }
     }
      if(n==4)
     {
         for(int i=1;i<=21;i++)
         {
             if(i%2==0)
             {
              cout<<"   "<<1;
             }
             else
             {
                 cout<<"   "<<n;
             }
         }
     }
 }


 int main()
 {
     int Num;
     cout<<"Enter the value 1,2,3 or 4 "<<endl;
     cin>>Num;
     Func(Num);
     cout<<"\nSorry You Lost "<<endl<<endl<<"Try Again\t"<<"Restart\t";
     return 0;
 }
