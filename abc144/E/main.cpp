#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


void solve(long long N, long long K, std::vector<long long> A, std::vector<long long> F){
    sort(A.begin(),A.end());
    sort(F.rbegin(),F.rend());
    long long l=-1 ,r=1e12;
    while (l+1<r){
        long long c =(l+r)/2;
        bool ok =[&]{
            long long s=0;
            for (int i = 0; i < N; i++)
            {
                s+=max(0LL,A[i]-c/F[i]);
            }
            return s<=K;
        }();
        if(ok) r=c; else l=c;
    }
    cout<<r<<endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long K;
    scanf("%lld",&K);
    std::vector<long long> A(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
    }
    std::vector<long long> F(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&F[i]);
    }
    solve(N, K, std::move(A), std::move(F));
    return 0;
}
