
#include <bits/stdc++.h> 
using namespace std; 

vector<int> prime;
void createPrime()
{
    prime.push_back(2);
    for(int i=3;i<2000000;i++)
    {   int flag=0;
        for(int j=0;prime[j]*prime[j]<=i;j++)
        {
            if(i%prime[j]==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        prime.push_back(i);
    }
}
void solveMain()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[n]={0};
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(b[a[i]-1]==0)
    {
        b[a[i]-1]=prime[k];
        k++;
    }
    }
    for(int i=0;i<n;i++)
    {
        cout<<b[a[i]-1]<<" ";
    }
}

int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    createPrime();
	int t;
	cin>>t;
	while(t--)
	{
	    solveMain();
	    cout<<"\n";
	}
	
} 
