#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int multiply(int x, int res[], int res_size) { 
  
// Initialize carry 
int carry = 0; 
  
// One by one multiply n with 
// individual digits of res[] 
for (int i = 0; i < res_size; i++) { 
    int prod = res[i] * x + carry; 
  
    // Store last digit of 
    // 'prod' in res[] 
    res[i] = prod % 10; 
  
    // Put rest in carry 
    carry = prod / 10; 
} 
  
// Put carry in res and 
// increase result size 
while (carry) { 
    res[res_size] = carry % 10; 
    carry = carry / 10; 
    res_size++; 
} 
return res_size; 
} 
  
// This function finds 
// power of a number x 
string power(int x, int n)  
{ 
  
//printing value "1" for power = 0 
if(n == 0 ){  
    cout<<"1"; 
    return "1"; 
} 
  
  
int res[MAX]; 
int res_size = 0; 
int temp = x; 
  
// Initialize result 
while (temp != 0) { 
    res[res_size++] = temp % 10; 
    temp = temp / 10; 
} 
  
// Multiply x n times 
// (x^n = x*x*x....n times) 
for (int i = 2; i <= n; i++) 
    res_size = multiply(x, res, res_size); 
  
string s="";
for (int i = res_size - 1; i >= 0; i--) 
    s=s+char(res[i]-'0');
return s;
} 

int main(){
   
    map<string,bool> hmap;
    //cout<<pow(2,10);
    for(int i=2;i<=100;i++){
        for(int j=2;j<=100;j++){
            string s=power(i,j);
            if(!hmap[s]){
                hmap[s]=true;
            }
        }
    }
    cout<<hmap.size();
    return 0;
}