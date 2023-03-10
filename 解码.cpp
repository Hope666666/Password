#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	string str;
	cin>>str;
	string out="";
	int flag=0;
	string this_str="";
	for(int i=0;i<str.size();i++)
	{
		if(str[i]==',')continue;
		if(str[i]=='(')
		{
			flag=1;
			continue;
		}
		if(str[i]==')')
		{
			flag=0;
			char this_num='Z'-this_str[this_str.size()-1]+'A';
			this_str=this_str.substr(0,this_str.size()-1);
			if(this_num>='A'&&this_num<='F')
			{
				out+='(';
				out+=this_str;
				out+='1';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num>='G'&&this_num<='L')
			{
				out+='(';
				out+=this_str;
				out+='2';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num>='M'&&this_num<='R')
			{
				out+='(';
				out+=this_str;
				out+='3';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num>='S'&&this_num<='X')
			{
				out+='(';
				out+=this_str;
				out+='4';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num=='Y'||this_num=='Z')
			{
				this_str="";
				continue;
			}
			this_str="";
			continue;
		}
		if(!flag)
		{
			out+='Z'-str[i]+'A';
			continue;
		}
		this_str+='Z'-str[i]+'A';
	}
	cout<<out;
    getch();
}

