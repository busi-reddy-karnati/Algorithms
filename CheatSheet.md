### Slicing the vector
```cpp
//It gives from startindex, startindex+1.....endindex-1
vector<int> newVector(oldVector.begin()+startIndex, oldVector.start()+endIndex);
```

```cpp
vector<int> newVector = vector<int>(oldVector.begin()+startIndex, oldVector.begin()+endIndex);
```

### Creating a Pair
```cpp
pair<int,int> pair(1,2);
//(or)
pair<int,int> pair=make_pair(1,2); 
```

### Insert a vector at the end of another vector
```cpp
vector<int> newVector.insert(newVector.end(),oldVector.cbegin(),oldVector.cend());
```

### To find if something is not in the vector
```cpp
a.find(x)!=a.end()
```

### Methods for unordered_set
```cpp
unordered_set<int> s;
s.insert(1);
s.find(2)!=s.end()
```

### Substring method
```cpp
String another=one.substr(startindex,length);
```

### Ascii and Unicode difference
```cpp
// Ascii has 128 characters so for count/frequency we can have a 128 size integer array
// Unicode has higher number 2^21
//Generally we use ascii for less space consumption in space but if we want to encode higher number of letters we will have to go for the UNICODE
```

### Bitvector
```cpp
c>>1;
//Right shift
if((val&c)>0)//This means that at some places, they have the same value,1
```

### Initializing an array with zeroes
```cpp
int arr[n]={0};
```

### Counting the occurances of something in a vector or a string or an array
```cpp
int freq = count(a.begin(),a.end(),element);
```

### Initialize a vector of sixe n to false
```cpp
vector<bool> vis(n, false);
```

### Initial Value of Bool in a map/unordered_map takes false
```cpp
unordered_map<int,bool> hmap;
//hmap[2] is false
```


### Initial Value of int in a map/unordered_map takes 0
```cpp
unordered_map<int,int> hmap;
//hmap[2] is 0
```

### Don't use #include<bits/stdc++.h>
```md
It isn't standard and has all the modules inside, and takes up time for compilation
```

### Using transform to convert to lowecase and uppercase
```cpp
transform(s.begin(),a.end(),s.begin(),::tolower);
//cannot use tolower, :: are for accessing a global method
```

### Initialize a total array with 0
```cpp
int arr[128]={0};
```

### Difference between unordered_map and map
unordered_map has an average access, insertion, deletion of O(1) whereas map has an access of O(n).
map is implemented using Red Black Tress, which is good for giving predecessor and successor 
unordered_map is implemented using hash map.
lower_bound, upper_bound, binary_search can be implemented in map and cannot be implemented in unordered_map

### Difference between unorederd_set and set
Same as unordered_map, map

### Sort in decreasing order
```cpp
sort(a.begin(),a.end(),greater<int>());
```

### Sort a general data structure(eg. Map) using a non trivial value(eg.Value), in increasing order
```cpp
bool cmp(pair<string,int>& a, pair<string,int>& b)
    return a.second<b.second;
sort(a.begin(),a.end(),cmp);
```

### Complexity of generating permutations
The complexity is O(n^2 * n!)

### Hashmap and arr size
Array just uses a continuous array chunks wheres hashmaps use pointers, storage containers, key, value pointers  etc which is a burden on the storage

### Difference between string and character array
Character array takes space in heap 

### How to remove whitespaces in a String
```cpp
s.erase(remove(s.begin(),s.end(),' '),s.end());
//The remove method gives the pointer where all the spaces start and erase removes them
```

### How to create a Substring from index i to j (both included)
```cpp
s.substr(i,j);
```

### How to find if a string is a substring of another
```cpp
if(s.find(t)!=string::npos)
```

### How to intialize a 2d vec with zeros(n*m)
vector<vector<int>> vec(n,vector<int>(m,0));


### Using the 'using' in cpp
```cpp
using hashmap = unordered_map<int,int>;
```

### USe of ternary operator ?
```cpp
n = expression1 ? expression2 : expression3
/*
Expression1 is boolean. If expression1 is true, then the value of n is expression 2 else expression3
*/
```

### careful instruction while using hashmaps
If you are calling a hashmap values, it allocates space to it before giving you the value. In integer case it is 0.
For example if there is no hmap[4], it gives you 0 by first allocating it then giving back to you. 
So it is adviced to find if it exists and then ask for a value

### issue with the class constructor declaration
```cpp
class ClassName{
    int val1,val2;
    public:
        ClassName(int val1){
            val1=val1;
        }
};
//This is inconsistent and erroneous, careful while doing that
```