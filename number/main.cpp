#include <iostream>

// 1. �]�p�@�D�{��,�H�ΤT��function,���O�O�p��n!,��ƪ��̤j���]��,��ƪ��̤p������.

using namespace std;

int factorial(int);
int gcd(int, int);
int lcm(int, int);
int a,b,c,d,n=0;
int main()
{
    cout << "�X���h ";
    cin >> n;
    factorial(n);
    cout << "factorial: " << factorial(n) << endl;
    cout << endl;

    cout << "��J��Ӽ�,�Dgcd ";
    cin >> a >> b;
    gcd(a,b);
    cout << gcd(b%a, a) << endl;
    cout << endl;

    cout << "��J��Ӽ�,�Dlcm ";
    cin >> c >> d;
    lcm(c,d);
    cout << c*d / gcd(c, d) << endl;
    cout << endl;

    return 0;
}
int factorial(int n)
{
    int s=1;
    for ( int i=2; i<=n; ++i )
        { s *= i;
        }
    return s;

}
int gcd(int a, int b)
{
    if ( a==0 )
       { return b;
       }
    return gcd(b%a, a);

}
int lcm(int c, int d)
{
    return c*d / gcd(c, d);

}
