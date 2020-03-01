#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	int count = 0;
	int len = s.size();
	for (int i = 0; i < len; ++i)
	{
		// int asc = s[i];
		if(s[i] >=97 && s[i] <=122)
			count++;

	}
	cout<<count<<endl;
	return 0;
}