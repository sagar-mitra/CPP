#include <iostream>
using namespace std;

// Question: Display 1,2,4,8,16....upto n terms

int main()
{
   int n, result=1;
   cout << "Enter n: ";
   cin >> n;

   for(int i=1; i<=n; i++) {
       cout << result << " ";
       result *= 2;
   }
   return 0;   
}