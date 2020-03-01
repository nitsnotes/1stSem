#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int BitsSetTable256[256];
int countBits(int number) 
{       
      return (int)log2(number)+1; 
}
void initialize()  
{  
  
    BitsSetTable256[0] = 0;  
    for (int i = 0; i < 256; i++) 
    {  
        BitsSetTable256[i] = (i & 1) +  
        BitsSetTable256[i / 2];  
    }  
}

int countSetBits(int n)  
{  
    return (BitsSetTable256[n & 0xff] +  
            BitsSetTable256[(n >> 8) & 0xff] +  
            BitsSetTable256[(n >> 16) & 0xff] +  
            BitsSetTable256[n >> 24]);  
}


int main() {
    initialize();
    int t;
    cin>>t;
    
    while(t--)
    {
        
        int num,effbits;
        cin>>num;
        int total_bits = countBits(num);
        
        int setbits = countSetBits(num);
        
        if(total_bits != setbits)
            effbits = total_bits-1;
        else 
            effbits = total_bits;

        int ans = pow(2,effbits)-1;
        cout<<ans<<endl;
    }
    
	return 0;
}