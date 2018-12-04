#include<stdio.h>//KANDANE'S ALGORITHM
#include<iostream>
using namespace std;
int main()
{
	int t,a,b,m[20],n[20],sum1=0,sum=0;
	cin>>t;//no of test cases
	while(t--)
	{
	cout<<"enter array size\n";
	cin>>a;
	for(int i=0;i<a;i++)
	{
		cin>>m[i];
        sum+=m[i];
        if(sum>sum1)
        sum1=sum;
        else
        sum=0;
    }
    if(sum1>0)
    cout<<sum1;//MAXIMUM SUM OF SUB-ARRAY
    else
    cout<<"-1";
    sum1=0;
    
	
}
	
}
