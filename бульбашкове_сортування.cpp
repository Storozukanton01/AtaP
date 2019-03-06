#include <iostream>
 
using namespace std;
 
int main()
{
 int n;
 cin >> n;
 int mas[n];
 for(int i = 0; i < n; ++i)
 {
  cin >> mas[i];
 }
 for(int i = 1; i < n; ++i)
 {
  for(int r = 0; r < n-i; r++)
  {
   if(mas[r] > mas[r+1])
   {
    int buf = mas[r];
    mas[r] = mas[r+1];
    mas[r+1] = buf;
   }
  }
 }
 for(int i = 0; i < n; ++i)
 {
  cout << mas[i] << " ";
 }
 cout << endl;
 return 0;
}
