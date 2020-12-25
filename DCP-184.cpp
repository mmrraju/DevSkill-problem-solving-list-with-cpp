#include<bits/stdc++.h>
using namespace std;
void fib(int x)
{
    int a=1, b=3, sum=0;
    //printf("%d %d ", a, b);
    for(int i=3 ; i<=44; i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(i==x)
            printf("%d\n", sum);
    }

}
 int main()
 {
     int t;
     cin>>t;
     while(t>0)
     {
         int x;
         cin>>x;
         fib(x);
         t--;
     }

 }
