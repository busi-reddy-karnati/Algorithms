#include<bits/stdc++.h>
using namespace std;
bool right(int i, int j){
    int p=i*j;
    map<int,int> hmap;
    for(int i=0;i<9;i++)
        hmap[i]=0;
    while(i>0)
    {
        hmap[i%10]+=1;
        i=i/10;
    }
    while(j>0)
    {
        hmap[j%10]+=1;
        j=j/10;
    }
    while(p>0)
    {
        hmap[p%10]+=1;
        p=p/10;
    }
    if(hmap[0])
        return false;
    for(int i=1;i<10;i++){
        if(hmap[i]>1 || hmap[i]==0)
            return false;

    }
    return true;

}
int main(){

    int ans=0;
    map<int,bool> mm;
    for(int i=2;i<1000;i++){
        for(int j=i+1;j<2000;j++){
            if(right(i,j)){
                int y=i*j;
                if(!mm[y])
                ans+=i*j;
                mm[y]=true;
                cout<<"i: "<<i<<" j: "<<j<<"\n";
            }
        }
    }
    cout<<ans;
}