#include <iostream>
#include <cmath>

using namespace std;

int n;
int a[10000];

void merge2(int a[], int l2,int r2)
{
	int i=l2;
	int m=l2+(r2-l2)/2;
	int j=m+1;
	int k=0, buf[10000];
	while(i <= m && j <= r2)
	{
		if(a[i] <= a[j])
		{
			buf[k]=a[i];
			i++;
		}
		else
		{
			buf[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=m)
	{
		buf[k]=a[i];
		i++;
		k++;
	}
	while(j<=r2)
	{
		buf[k]=a[j];
		j++;
		k++;
	}
	for (int i = 0; i < k; i++)
	{
        a[l2 + i] = buf[i];
    }
}

void merge(int a[], int l, int r) 
{
    if (r == l)
    {
        return;
    }
    if (r - l == 1) 
	{ 
        if (a[r] < a[l])
        {
            swap(a[r], a[l]);
            return;
        }
    }
    else
    {
    	merge(a, l, l+(r-l)/2);
    	merge(a, l+(r-l)/2 + 1, r);
    	merge2(a, l, r);
	}
}


    


int main() {    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    merge(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
