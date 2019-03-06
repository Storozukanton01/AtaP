#include <iostream>
 
using namespace std;
 
int main()
{
    int n, k;
    cin>>n>>k;
    int N[n];
    int K[k];
    for (int i=0;i<n;i++)
    {
        cin>>N[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>K[i];
        bool found = false;
        int l = 0;
        int r = n-1;
        while( l<=r )
        {
            int m = (l+r)/2;
            if (K[i]>N[m])
            {
                l=m+1;
            }
            else if(K[i]<N[m])
            {
                r=m-1;
            }
            else
            {
                found=true;
                break;
            }
        }
        if(found)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
