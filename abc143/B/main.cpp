#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;


void solve(long long N, std::vector<long long> d){
    ll ans=0,s=0;
    rep(i,N){
        s+=d[i]*d[i];
        rep(j,N){
            ans+=d[i]*d[j];
        }
    }
    cout<<(ans-s)/2<<endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::cout<<std::fixed<<std::setprecision(10);//誤差小数10桁まで
    long long N;
    scanf("%lld",&N);
    std::vector<long long> d(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&d[i]);
    }
    solve(N, std::move(d));
    return 0;
}
