#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int val1,val2;
bool solve(int ar[],int n,int x)
{
    int i=0;
    int j=n-1;
    int ind1,ind2;
    int dif=INT_MAX;
    while(i<j)
    {
        int sum=ar[i]+ar[j];
        if(abs(sum-x)<dif)
        {
            dif=abs(sum-x);
            ind1=i;
            ind2=j;
        }
        if(sum>x)j--;
        else i++;
    }
    cout << ar[ind1] << " " << ar[ind2] << " " << ar[ind1]+ar[ind2] << endl;

}
int main()
{
    int n;
    cin >> n;
    int ar[n+5];
    for(int i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar,ar+n);
    int x;
    cin >> x;
    bool ans=solve(ar,n,x);
    return 0;
}
