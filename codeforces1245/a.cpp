#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;
int gcd(ll a, ll b) {
  int t;    // 補助変数
  while ( b != 0 ) {          // 他方が0になるまで
    t = a%b; a = b; b = t;    // 一方を剰余に置き換える
  }
  return a;                   // 他方が0になったときの一方がGCD
}

void solve(long long N, std::vector<long long> a,std::vector<long long> b){
    string ans;
    rep(i,N){
        (gcd(b[i],a[i])==1) ? ans="FINITE" : ans="INFINITE";
        if(a[i]==1 or b[i]==1) ans="FINITE";
        cout<<ans<<endl; 

        
    }
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::cout<<std::fixed<<std::setprecision(10);//誤差小数10桁まで
    long long N;
    scanf("%lld",&N);
    std::vector<long long> a(N);
    std::vector<long long> b(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&a[i]);
        scanf("%lld",&b[i]);
       
    }
    
    solve(N, std::move(a),std::move(b));
    return 0;
}