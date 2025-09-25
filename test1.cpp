#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	string s=" ";
	while(s!="Quit")
	{
		cout<<"ÇëÊäÈë£º";
		cin>>s;
		if(s=="Quit")
			return 0;
		if(s=="Dian")
			cout<<"2002"<<endl;
		else
			cout<<"Error"<<endl;
	}
}
