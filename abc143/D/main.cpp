#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,n) for (ll i = 0; i < (n); ++i)


void solve(long long N, std::vector<long long> L){
    ll ans=0;
    sort(L.begin(),L.end());
    ll n=N;
    rep(b,n){rep(a,b){
            ll ab=L[a]+L[b];
            ll r=lower_bound(L.begin(),L.end(),ab)-L.begin();
            ll l=b+1;
            ans+=max(0LL,r-l);
        }
    }
    cout<<ans<<endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    std::vector<long long> L(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&L[i]);
    }
    solve(N, std::move(L));
    return 0;
}
