/*
Create a set of stacks such that if a stack exceeds a size, put another stack and start pushing into the latest stack
*/
#include<bits/stdc++.h>
using namespace std;
class setOfStacks{
    public:
        vector<stack<int>> s;
        int topindex=0;
        int limit=5;
    setOfStacks(){
        stack<int> st;
        s.push_back(st);
    }
    void pushnum(int num){
        if(s[topindex].size()==limit){
            topindex+=1;
            stack<int> s2;
            s2.push(num);
            s.push_back(s2);
        }
        else{
            s[topindex].push(num);
        }
    }
    void popindex(int num){
        if(num>topindex)
            cout<<"not possible";
        else{
            int u=s[num].top();
            cout<<"popped this out: "<<u<<"\n";
            cout<<"This many remaining :"<<topindex<<"\n";
            if(!s[num].empty())
                s[num].pop();
            

        }
    }
    void popnormal(){
        int j=s[topindex].top();
        cout<<"popped : "<<j<<"\n";
        s[topindex].pop();
        if(s[topindex].empty()){
            topindex--;
            s.pop_back();
        }
    }

};

int main(){
    setOfStacks* s= new setOfStacks();
    s->pushnum(1);
    s->pushnum(2);
    s->pushnum(3);
    s->pushnum(4);
    s->pushnum(5);
    s->pushnum(6);
    s->popindex(0);
    s->popnormal();
    s->popnormal();
    return 0;
}
