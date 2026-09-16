#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>dp;
vector<int>get_digits(int n){
    vector<int>results;
    while(n>0){
        int x = n%10;
        if(n % 10 != 0){
            results.push_back(x);
        }
        n=n/10;
    }
    return results;
}
int f(int n){
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dp[n]!=-1) return dp[n];
    vector<int>digits = get_digits(n);
    int result = INT_MAX;
    for(int i=0 ; i<=digits.size()-1; i++){
        result = min(result , f(n-digits[i]));
    }
    return dp[n] = 1+result;
}
int main(){
    int n ;
    cout<<"Enter the number";
    cin>>n;
    dp.resize(n+555,-1);
    cout<<f(n);
    return 0;
}