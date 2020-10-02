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