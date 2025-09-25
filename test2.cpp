#include<iostream>
#include<cstdio>
#include<cstring>
#include<fstream>
using namespace std;
std::string key[105],name[105];
int k;
void fcin()
{
	ifstream fin("data.txt");
	string s1;
	int i=1;
	while(getline(fin,s1))
	{
		if(s1.find_first_of(":")==-1)
				continue;
		else
			{
				key[i].assign(s1,0,s1.find_first_of(":"));
				name[i].assign(s1,s1.find_first_of(":")+1,s1.length()-s1.find_first_of(":"));
				key[i].assign(key[i],key[i].find_first_not_of(" "),key[i].find_last_not_of(" ")-key[i].find_first_not_of(" ")+1);
				name[i].assign(name[i],name[i].find_first_not_of(" "),name[i].find_last_not_of(" ")-name[i].find_first_not_of(" ")+1);
				if(key[i].empty() || name[i].empty() || key[i].length()>10)
					continue;
				else ++i;
			}	
	}
	k=i-1;
	fin.close();
}
int main()
{
	string s=" ";
	fcin();
	int flag=0;
	while(s!="Quit")
		{
			cout<<"ÇëÊäÈë£º";
			cin>>s;
			if(s=="Quit")
				return 0;
		for(int i=1;i<=k;++i)
			if(s==key[i])
			{
				cout<<name[i]<<endl;
				flag=1;break;
			}
		if(flag==0)
			cout<<"Error"<<endl;
		}
	return 0;
}



