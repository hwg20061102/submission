#include<iostream>
#include<cstring>
#include<cstdio>
#include<fstream>
using namespace std;
void login()
{
	cout<<"�������û���"<<endl;
	string name,st;
	cin>>name;
	cout<<"��¼�ɹ�"<<endl;
	cin>>st;
	if(st=="Exit")
		login();
	else
		cout<<"Error"<<endl;
}
int main()
{
	string s;
	while(s!="Quit")
	{
		cin>>s;
	if(s=="Quit")
		return 0;
	if(s=="Login")
			login();
	else
			cout<<"Error"<<endl;
	}
}
