#include <iostream>

using namespace std;

bool isTriangle(int a, int b, int c)
{
    cout << a << " " << b << " " <<  c;
    if(a<0 || b<0 || c<0){
        return false;
    }
    if(a==0 || b==0 || c==0) {
        return false;
    }
    if ((a>=b && b>=c) || (a>=c && c>=b)) {
        return ((b+c)>a);
    }
    if ((b>=a && a>=c) || (b>=c && c>=a)) {
        return ((a+c)>b);
    }
    if ((c>=a && a>=b) || (c>=b && b>=a)) {
        return ((a+b)>c);
    }
}

int main() {
    cout << isTriangle(1,2,9);
}
