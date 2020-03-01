#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define printarr(arr, n) for(long long i=0;i<n;i++) { cout<<arr[i]<<"\t"; } 
template<ll T, ll n>
void print_array(T const(& arr)[n])
{
	for (ll i = 0; i < n; i++)
		std::cout << arr[i] << ' ';
}


int main(int argc, char const *argv[])
{
	/* code */
	ll t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll neff = 2*n;
		ll arr[neff]={0};
		ll arr1[n]={0}, arr2[n]={0}; 
		for (ll i = 0; i < neff; ++i)
		{
			ll inp; cin>>inp;
			arr[i] = inp;
		}
		print_array(arr);
		sort(arr, arr+neff);
		cout<<"\n";
		print_array(arr);
		ll s1=0; ll s2=0, j=0;
		for (ll i = 0; i < neff; ++i)
		{
			/* code */
			if(i%2 == 0)
				arr1[j++] = arr[i];
			else
				arr2[j++] = arr[i];
		}
		print_array(arr1);
		cout<<arr1[n/2]-arr2[n/2]<<endl;
	} 
	return 0;
}

