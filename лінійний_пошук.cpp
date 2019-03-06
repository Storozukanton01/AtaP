#include <iostream>
 
using namespace std;
 
int main()
{
    int x, n, k;
    int mas[1000];
    k=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
    cin>>mas[i];
    }
    cin>>x;
    for(int i=0;i<n;i++)
    {
       if(mas[i]==x)
       {
           k++;
       }
    }
    cout<<k;
    return 0;
}
