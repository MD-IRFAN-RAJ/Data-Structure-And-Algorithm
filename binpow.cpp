#include <bits/stdc++.h> 
using namespace std;
 
typedef long long ll;
typedef vector<ll> v64;

long long binpow(long long a, long long b) {

    if (b == 0)

        return 1;

    long long res = binpow(a, b / 2);

    if (b % 2)

        return res * res * a;

    else

        return res * res;

}