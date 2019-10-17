#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;
     
    int a[10][10];

	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	 int tot= m*n;
     
     int t=0,b=m-1,l=0,r=n-1,c=0;

     int flag=0;

     while(b>=t && r>=l)
     {
     	if(flag==0)
     	{
     		if (c == tot) 
            break; 

     		for(int i=t;i<=b;i++)
     		{
     			cout<<a[i][l]<<",";
     			c++;
     		}
     		l++;
     		flag = 1;
     	}
     	else if(flag==1)
     	{   
     		if (c == tot) 
            break; 

     		for(int i=l;i<=r;i++)
     		{
     			cout<<a[b][i]<<",";
     			c++;
     		}
     		b--;
     		flag = 2;
     	}
     	else if(flag==2)
     	{
     		if (c == tot) 
            break; 

     		for(int i=b;i>=t;i--)
     		{
     			cout<<a[i][r]<<",";
     			c++;
     		}
     		r--;
     		flag = 3;
     	}
     	else if(flag==3)
     	{
     		if (c == tot) 
            break; 

     		for(int i=r;i>=l;i--)
     		{
     			cout<<a[t][i]<<",";
     			c++;
     		}
     		t++;
     		flag = 0;
     	}
     }
     cout<<"END";
}