#include <iostream>
#include <vector>

using namespace std;

int main()

{
 int n, m, mid, res=-1;
 cin >> n >> m;
 vector<int> a(n);
 vector<int> b(m);
 for (int i = 0; i < n; i++)
  {
 cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
 cin >> b[i];
  }
  int resl;
  for (int i = 0; i < m; i++)
    {
    	 res=-1;
  int l = 0, r = n - 1;
  while(l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == b[i])
     		 {
 			   res=mid;
 			   r=mid-1;
 		     }
           	   else if(a[mid]>b[i])
             {
               r = mid-1;
             }
             else
             {
             	l=mid+1;
			 }
         }
	l=0;
	r=n-1;

	while(l <= r)
        {
            mid = (l + r) / 2;
            if (a[mid] == b[i])
     		 {
 			   resl=mid;
 			   l=mid+1;
 		     }
           	   else if(a[mid]>b[i])
             {
               r=mid-1;
             }
             else
             {
            	l=mid+1;
			 }
         }
         if(res!=-1)
         {
         	res++;
         	resl++;
         	cout<<res<<" "<<resl<<endl;
		 }
		 else
		 {
		 	cout<<"0"<<endl;
		 }
    }
}
