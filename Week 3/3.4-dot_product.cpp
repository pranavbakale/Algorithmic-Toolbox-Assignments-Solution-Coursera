#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,j,k,res=0;
    cin >> n;
    long long a[n], b[n];
    for(i=0;i<n;i++)
    {
       cin >> a[i];
    }
    for(j=0;j<n;j++)
    {
       cin >> b[j];
    }
    sort(a, a+n);
    sort(b, b+n);
    for(k=0;k<n;k++)
    {
        res += a[k]*b[k];
    }
    cout << res;
}
