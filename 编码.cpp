#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	string str;
	cin>>str;
	string out="";
	int flag=0;
	string this_str="";
	for(int i=0;i<str.size();i++)
	{
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
			if(this_num=='1')
			{
				out+='(';
				for(int i=0;i<this_str.size();i++)
				{
					out+=this_str[i];
					out+=',';
				}
				out+=rand()%('F'-'A'+1)+'A';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num=='2')
			{
				out+='(';
				for(int i=0;i<this_str.size();i++)
				{
					out+=this_str[i];
					out+=',';
				}
				out+=rand()%('L'-'G'+1)+'G';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num=='3')
			{
				out+='(';
				for(int i=0;i<this_str.size();i++)
				{
					out+=this_str[i];
					out+=',';
				}
				out+=rand()%('R'-'M'+1)+'M';
				out+=')';
				this_str="";
				continue;
			}
			if(this_num=='4')
			{
				out+='(';
				for(int i=0;i<this_str.size();i++)
				{
					out+=this_str[i];
					out+=',';
				}
				out+=rand()%('X'-'S'+1)+'S';
				out+=')';
				this_str="";
				continue;
			}
			out+='(';
			for(int i=0;i<this_str.size();i++)
			{
				out+=this_str[i];
				out+=',';
			}
			char ch;
			do
			{
				ch=rand()%(126-33+1)+33;
			}while(ch>='A'&&ch<='X'||ch=='0');
			out+=ch;
			out+=')';
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
    return 0;
}

