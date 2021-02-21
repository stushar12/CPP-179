#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,queries;
    cin>>n>>queries;

    long long int *arr=new long long int [n+2];  
    
    while(queries--) 
    {
        long long int start,end,addition;
        cin>>start>>end>>addition;

         arr[start]+=addition;
         arr[end+1]-=addition;
    }

    long long int maximum=INT_MIN,sum=0;
    
    for(long long int i=1;i<=n;i++)
    {
        sum=arr[i]+sum;
        arr[i]=sum;
        maximum=max(maximum,arr[i]);
    }
cout<<maximum;
}
