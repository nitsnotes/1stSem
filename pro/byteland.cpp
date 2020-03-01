#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
std::map<ll, ll> mp;

ll f(ll val)
{	
	if(mp[val]) return mp[val];

	if(val >= val/2 + val/3 + val/4)
	{
		mp[val] = val;
		return val;
	}

	mp[val] = f(val/2) + f(val/3) + f(val/4);
	return mp[val];
}

int main(int argc, char const *argv[])
{

	ll n;
	while(cin>>n)
	
	{
		
		
		// cin>>n;
		
		cout << f(n) << "\n";

	}   
	return 0 ;  
}