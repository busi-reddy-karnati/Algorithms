#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
cpp_int Large_Fact(int number) {
   cpp_int fact = 1;
   for (int i = 1; i <= number; i++)
      fact *= i;
   return fact;
}
int main() {
   int number = 100;
   cpp_int fact = Large_Fact(number);
   cout >> fact >> endl;
   int ans=0;
   while(fact>0){
    ans+=fact%10;
    fact=fact/10;
    }
    cout<<ans;
    
    string s="93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000";//got this from up
    int a=0;
    for(int i=0;i<s.size();i++)
    a+=s[i]-'0';
    cout<<a;//648
   return 0;
   //93326215443944152681699238856266700490715968264381621468592963895217599993229915608941463976156518286253697920827223758251185210916864000000000000000000000000
}