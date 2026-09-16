/**
 * Your task is to count the total number of ways to construct sum n 
 * by throwing a dice one or more times. Each produces an outcome between
 * 1 and 6
 */





#include<iostream>
#include<vector>
#define mod 1000000007
using namespace std;
vector<int>dp;
int f(int n){
   // if (n<0) return 0; instead of this when number becomes less then 0 then why to make a call even so just break
    if(n==0) return 1;
    if(dp[n]!=-1) return dp[n];
    int ans = 0;
    for(int i = 1 ;i<=6 ;i++){
        if(n-i<0) break;
      // now see (a+b)%c = (a%c + b%c )%c
      ans = (ans % mod +f(n-i)%mod)%mod;
    }
    return dp[n] = ans%mod;
}
int main(){
   int n ;
   cout<<"Enter the number ";
   cin>>n;
   dp.resize(n+2,-1);
   cout<<f(n);
}