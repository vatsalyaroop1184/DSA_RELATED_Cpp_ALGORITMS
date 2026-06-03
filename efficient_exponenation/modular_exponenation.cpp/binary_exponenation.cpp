#include <iostream>
using namespace std;
long long  modular_exponenation(long long base,long long  exp,long long mod){
    long long result = 1;
     base = (base%mod + mod)%mod;
     while(exp > 0){
        if(exp & 1){
            result = (result*base)%mod;
        }
        base = (base*base)%mod;
        exp >>= 1;
     }
     return result;
}
int main(){
    long long res;
    long long base,exp,mod;
    cin >> base >> exp >> mod;
    res = modular_exponenation(base,exp,mod);
    cout << res << endl;
    return 0;
}
