#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)
typedef long long ll;

const string YES = "Yes";
const string NO = "No";

void solve(long long N, long long K, long long Q, std::vector<long long> A){

}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    long long Q;
    scanf("%lld",&Q);
    std::vector<long long> A(Q);
    for(int i = 0 ; i < Q ; i++){
        scanf("%lld",&A[i]);
    }
    solve(N, K, Q, std::move(A));
    return 0;
}