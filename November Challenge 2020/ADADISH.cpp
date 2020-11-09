#include <bits/stdc++.h>
using namespace std;
int minPartition(int S[], int n, int S1, int S2)
{
	if (n < 0)
		return max(S1,S2);
	int inc = minPartition(S, n - 1, S1 + S[n], S2);
	int exc = minPartition(S, n - 1, S1, S2 + S[n]);
    return min (inc, exc);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    int n;
    cin>>n;
    int S[n];
    for(int i=0;i<n;i++)
    {
        cin>>S[i];
    }

	cout<< minPartition(S, n - 1, 0, 0)<<endl;
    }

	return 0;
}