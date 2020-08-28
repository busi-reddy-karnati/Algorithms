/*
There are cats and dogs in the pet store. They can be bought in the order they have arrived. You may also choose the 
pet you want(dog or cat).
The methods would be enqueue, dequeueAny, dequeuecat, dequeudog
*/
#include<bits/stdc++.h>
using namespace std;

class PetStore{
    public:
        queue<int> dogs;
        queue<int> cats;
    void enqueue(int n, string s){
        if(s=="cat"){
            cats.push(n);
        }
        else{
            dogs.push(n);
        }
    }
    void dequeueany(){
        if(cats.front()>dogs.front()){
            cout<<"You got a dog\n";
            dogs.pop();
        }
        else{
            cout<<"YOu got a cat\n";
            cats.pop();
        }
    }
    void dequeuecat(){
        cats.pop();
        cout<<"You got a cat\n";
    }
    void dequeuedog(){
        dogs.pop();
        cout<<"You got a dog\n";
    }

};

int main(){
    PetStore* P=new PetStore();
    //Here 1 is the time it came. We can automate using a loop, if needed
    P->enqueue(1,"cat");
    P->enqueue(2,"dog");
    P->enqueue(3,"cat");
    P->enqueue(4,"dog");
    P->enqueue(5,"cat");
    P->enqueue(6,"cat");
    P->enqueue(7,"cat");
    P->enqueue(8,"dog");
    P->enqueue(9,"cat");
    P->dequeueany();
    P->dequeueany();
    P->dequeuecat();
    return 0;
}