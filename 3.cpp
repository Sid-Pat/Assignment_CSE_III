#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int n; cin>>n;

    // 1h = 60*60 s 
    // 24h = 3600*24
    int temp = n;
    int d = n/(24*3600);
    int h = (n%(24*3600))/(24*60);
    int m = ((n%(24*3600))%(24*60)/60);
    int s = ((n%(24*3600))%(24*60)%60);
    cout<<temp<<" Seconds = "<<d<<" Days "<<h<<" hours "<<m<<" minutes "<<s<<" seconds ";
return 0; 
}