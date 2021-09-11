#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long distance, maxDistance, n, i, noOfRefills=0, currentRefill=0, lastRefill;
    cin >> distance >> maxDistance >> n;
    long long a[n+1];
    a[0] = 0;
    for(i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    a[n+1] = distance;
    while(currentRefill<=n)
    {
        lastRefill = currentRefill;
        while(currentRefill <= n && a[currentRefill+1] - a[lastRefill] <= maxDistance)
        {
            currentRefill = currentRefill + 1;
        }
        if(currentRefill == lastRefill)
        {
            cout << "-1" << endl;
            break;
        }
        if(currentRefill<=n)
        {
            noOfRefills = noOfRefills + 1;
        }
    }
    if(currentRefill != lastRefill)
    {
        cout << noOfRefills << endl;
    }
}
