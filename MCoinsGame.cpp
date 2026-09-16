/*  https://www.spoj.com/problems/MCOINS/en/ */


#include<iostream>
#include<vector>
using namespace std;
vector<long long>dp;

int main(){
    dp.resize(1000001,-1);
    int l , k ;
    cin>>k>>l;
    dp[1] = 1;
    dp[k] = 1;
    dp[l] = 1;
    for(int i=4 ;i<=1000000;i++) dp[i] = !(((i-k>=1)?dp[i-k]:1) && ((i-l>=1)?dp[i-l]:1) && dp[i-1]);
    vector<int>arr = {3,12,113 ,25714 ,88888};
    for(int i=0;i<5;i++){
        if(dp[arr[i]]==1) cout<<"A";
        else cout<<"B";
    }

}


