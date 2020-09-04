#include<bits/stdc++.h>
using namespace std;
string addtwostrings(string s1, string s2){
    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());
    int n1=s1.size();
    int n2=s2.size();
    for(int i=0;i<n2-n1;i++){
        s1=s1+'0';
    }
    int s=0;
    int carry=0;
    for(int i=0;i<n2;i++){
        s=(s1[i]-'0')+(s2[i]-'0')+carry;
        carry=0;
        if(s>10){
            carry=s/10;
            s=s%10;
        }
        s2[i]=s+'0';
    }
    if(carry)
        s2=s2+char(carry+'0');
    reverse(s2.begin(),s2.end());
    return s2;
}



//Geeks for geeks method

// C++ program to find sum of two large numbers. 
#include<bits/stdc++.h> 
using namespace std; 

// Function for finding sum of larger numbers 
string findSum(string str1, string str2) 
{ 
	// Before proceeding further, make sure length 
	// of str2 is larger. 
	if (str1.length() > str2.length()) 
		swap(str1, str2); 

	// Take an empty string for storing result 
	string str = ""; 

	// Calculate length of both string 
	int n1 = str1.length(), n2 = str2.length(); 

	// Reverse both of strings 
	reverse(str1.begin(), str1.end()); 
	reverse(str2.begin(), str2.end()); 

	int carry = 0; 
	for (int i=0; i<n1; i++) 
	{ 
		// Do school mathematics, compute sum of 
		// current digits and carry 
		int sum = ((str1[i]-'0')+(str2[i]-'0')+carry); 
		str.push_back(sum%10 + '0'); 

		// Calculate carry for next step 
		carry = sum/10; 
	} 

	// Add remaining digits of larger number 
	for (int i=n1; i<n2; i++) 
	{ 
		int sum = ((str2[i]-'0')+carry); 
		str.push_back(sum%10 + '0'); 
		carry = sum/10; 
	} 

	// Add remaining carry 
	if (carry) 
		str.push_back(carry+'0'); 

	// reverse resultant string 
	reverse(str.begin(), str.end()); 

	return str; 
} 


int main(){
    string s1="1";
    string s2="1";
    int c=2;
    int n=1000;
    while(s2.size()<n){
        cout<<"Len: "<<s2.length()<<"  "<<s2<<"\n";
        string temp=s2;
        s2=findSum(s1,s2);
        s1=temp;
        c+=1;
    }
    cout<<c;
    return 0;
}