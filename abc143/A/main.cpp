#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;


void solve(long long A, long long B){
    int s=0;
    (A-2*B >0) ? s=A-2*B: s=0;
    cout<<s<<endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    std::cout<<std::fixed<<std::setprecision(10);//誤差小数10桁まで
    long long A;
    scanf("%lld",&A);
    long long B;
    scanf("%lld",&B);
    solve(A, B);
    return 0;
}
