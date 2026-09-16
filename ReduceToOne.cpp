#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>dp;
int reduce(int n ){
    if(n==1) return 0;
    if(n==2 ||n==3) return 1;
    if(dp[n]!=-1) return dp[n];
    int even =INT_MAX;
    int odd = INT_MAX;
    int x = reduce(n-1);
    if(n%2==0) even = reduce(n/2);
    if(n%3 == 0) odd = reduce(n/3);
    return dp[n] =1+min(x,min(even , odd));
}
int main(){
    int n ;
    cout<<"Enter the number";
     cin>>n; 
    dp.resize(n+2,-1);
    cout<<reduce(n);
    
}