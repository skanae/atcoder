#include <bits/stdc++.h>
using namespace std;


void solve(long long a, long long b, long long x){
    long double sita,xf=x,af=a,bf=b;
    std::cout<<std::fixed<<std::setprecision(10);

    if(x<=af*af*bf/2){
        sita=360/(2*M_PI)*atan(af*bf*bf/2/xf);
    }
    else{
        sita=360/(2*M_PI)*atan((2*bf*af*af-2*xf)/(af*af*af));
    }
    cout<<sita<<endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long a;
    scanf("%lld",&a);
    long long b;
    scanf("%lld",&b);
    long long x;
    scanf("%lld",&x);
    solve(a, b, x);
    return 0;
}
