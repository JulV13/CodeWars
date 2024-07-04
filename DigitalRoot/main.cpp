#include <iostream>

using namespace std;

int digital_root(int n) {
    cout << "n == " << n << "\n";
    int sum=0;
    while(n>0) {
        if(n%10==0 && n<10) {
            sum=sum+n;
        } else {
            sum=sum+(n%10);
        }
        n=n/10;
        cout << "n == " << n << "\n";
        cout << "sum == " << sum << "\n";
    }
    if (sum<10) {
        return sum;
    } else {
        cout << "recursion with n == " << sum << "\n";
        return digital_root(sum);
    }
}

int main() {
    cout << "Digital root is: "<< digital_root(1218407014);
}
