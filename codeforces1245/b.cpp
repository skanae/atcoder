#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

void solve(ll n, std::vector<long long> alicercp,string s){
    std::vector<long long> bobrcp(3);
    string ans;
    string ne="";
    bobrcp[0]=count(s.cbegin(), s.cend(), 'R');
    bobrcp[1]=count(s.cbegin(), s.cend(), 'S');
    bobrcp[2]=count(s.cbegin(), s.cend(), 'P');
    (max(bobrcp[0]-alicercp[2],0LL)+max(bobrcp[1]-alicercp[0],0LL)+max(bobrcp[2]-alicercp[1],0LL) >= max(n/2,(n+1)/2) ) ? ans="yes" : ans="no";
    cout<<ans<<endl;
    if(ans=="yes"){
        rep(i,s.length()){
            if(i<=max(n/2,(n+1)/2)-1){
               switch(s[i]) {
                   case 'R' : ne.append("P");
                   case 'C' : ne.append("R");
                   case 'P' : ne.append("S");
            }
            rep(j,alicercp[2]-max(bobrcp[0]-alicercp[2],0LL)){ne.append("S");}
            rep(j,alicercp[1]-max(bobrcp[1]-alicercp[1],0LL)){ne.append("P");}
            rep(j,alicercp[0]-max(bobrcp[2]-alicercp[0],0LL)){ne.append("R");}
        }
        
    }
    cout<<ne<<endl;
}
}
// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    rep(i,N){
    long long n;
    scanf("%lld",&n);
    std::vector<long long> alicercp(3);
    rep(j,3){
        scanf("%lld",&alicercp[j]);
    }
    string s;
    cin>>s;
    solve(n,move(alicercp),s);
    }
}