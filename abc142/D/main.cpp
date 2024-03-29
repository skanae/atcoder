#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (ll i = 0; i < (n); ++i)
typedef long long ll;
ll gcd(ll a,ll b)
{
	if (a%b==0)
	{
		return(b);
    }
	else
	{
		return(gcd(b,a%b));
    }
}
ll count(ll N){
    vector<ll> arr(N);
	for(int i = 0; i < N; i++){
		arr[i] = 1;
	}
	for(int i = 2; i < sqrt(N); i++){
		if(arr[i]){
			for(int j = 0; i * (j + 2) < N; j++){
				arr[i *(j + 2)] = 0;
			}
		}
	}
    ll a=0;
    rep(i,N){
        if(arr[i] and i>0 and N%i==0)a++;
    }
    if(a==0)a=1;
    return a;
}

void solve(long long A, long long B){
    ll g=gcd(max(A,B),min(A,B));
    cout<<count(g)<<endl;
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
