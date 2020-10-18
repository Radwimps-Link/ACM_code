#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<stdlib.h>
#include<cstring>
#include<string>
#include<cstdlib>
#include<bits/stdc++.h>

using namespace std;


int num(string y)
{

    int count=0;
    for(int i=0;i<=127;i++)
        if(y.find(i)!=string::npos)
        count++;
        
        return count;
}



int main()
{	
	string y; 
	int n=0,a=0;///n表示不同字符个数 
	cin>>y>>n;
	if(y.length()<4)
	{
		y.insert( y.begin(),4-y.length(),'0');
	}
	a=stoi (y);
	int x=0;///x表示年龄
	
	for(int i=0;;i++)
	{
		if(num(y)==n)
		{
			cout<<x<<" "<<y<<endl;
			break;
		}
		else
		{
			x++;
			a+=1;
			y=to_string(a);
			if(y.length()<4)
			{
				y.insert( y.begin(),4-y.length(),'0');
			}
		}
	 } 
	
	
	return 0;
}	
