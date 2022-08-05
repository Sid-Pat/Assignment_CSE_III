#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n;
    cin>>n;
    
    int y = n/365;
    int w = (n%365)/7;
    int d = (n%365)%7;

    cout<<y<<" Years "<<w<<" Weeks "<<d<<" Days \n";
return 0; 
}