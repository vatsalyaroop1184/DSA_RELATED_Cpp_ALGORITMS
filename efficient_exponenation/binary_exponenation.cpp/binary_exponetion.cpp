#include<iostream>
using namespace std;
double binary_exp(int x,int n){
    
    int result = 1;
    int base = x;
    int exp = n < 0 ?-n : n;
    while(exp > 0){
        if(exp & 1){
            result *= base;
        }
        base *= base;
        exp >>= 1;
    }
    return  n < 0 ? 1.0/result : result;
}
int main(){
    int n,x;
    cin >> x >> n;
    double res = binary_exp(x,n);
    cout << res << endl;
    return 0;
}