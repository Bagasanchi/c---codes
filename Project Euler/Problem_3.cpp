#include<bits/stdc++.h>
using namespace std;
void primeFactorization(int n) {
    while (n % 2 == 0) {
        cout << 2 << " ";
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 2) {
        cout << n << " ";
    }
    std::cout << std::endl;
}
int main(){
    long long a;
    cin>>a;
    
}