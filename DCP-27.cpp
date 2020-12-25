#include<bits/stdc++.h>
#define N 10000
int prime[N];
using namespace std;

void SievOf()
{
    int i;
    for(i=2; i<=N; i++)
    {
        prime[i]=1;
    }
    prime[0]=prime[1]=0;

    for(i=2; i<=sqrt(N); i++)
    {
        if(prime[i]==true)
        {
                for(int k=i*i; k<=N; k+=i)
                {
                    prime[k]=false;
                }
        }
    }
}

int main()
{
    SievOf();
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        cin>>n;
        if(prime[n])
        {
            cout<<"Yes"<<endl;
        }
        else
            cout<<"No"<<endl;
        t--;
    }

}
