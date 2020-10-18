#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<cstdlib>
#include<vector>
#include<algorithm>

using namespace std;


int max(vector<int>v)
{
	int MAX=0;
	
	vector<int>::iterator it=v.begin();
	
	int temp=*it;
	int count=0;
	int ans=*it;
	for(it;it<v.end();it++)
	{

		if(*it==temp)
		{
			count++;
		}
		else
		{
			temp=*it;
			count=1;
		}		
		if(MAX<=count)
		{
			MAX=count;
			ans=temp;
		}
	}
	printf("%d %d",ans,MAX);
	return 0;
}


int main()
{
	vector<int>v;
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		int a;
		scanf("%d",&a);
		for(int j=0;j<a;j++)
		{
			int k=0;
			scanf("%d",&k);
			v.push_back (k);	
		}	
	} 
	sort(v.begin(),v.end());
	max(v);
	
	return 0;
}
