#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long M, std::vector<long long> s, std::vector<long long> t){

}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> s(M);
    std::vector<long long> t(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&s[i]);
        scanf("%lld",&t[i]);
    }
    solve(N, M, std::move(s), std::move(t));
    return 0;
}