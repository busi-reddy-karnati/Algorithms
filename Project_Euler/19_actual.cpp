#include<bits/stdc++.h>
using namespace std;
bool isleap(int n){
    if(n%4==0 &&(n%100!=0 || n%400==0))
        return true;
    return false;
}
int main(){
    int day=2;//tuesday
    int d=1;
    int ans=0;
    int year=1901;
    int month=1;//january
    while(true){
        
        if(year==2001)
            break;
       
        if(day==1 &&d==5){
            ans+=1;
            cout<<"Day: "<<day<<" Month: "<<month<<" Year: "<<year<<" DayofWeek: "<<d<<"\n";
        }
        if(month==12 && day==31){
            day=1;
            month=1;
            year+=1;
            d=(d+1)%7;
        }
        else if(month==11&&day==30){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==10 && day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==9&&day==30){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==8&&day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==7&&day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==6&&day==30){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==5&&day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==4&&day==30){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==3&&day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else if(month==2 &&isleap(year)&&day==29){
            month+=1;
            day=1;
            d=(d+1)%7;            
        }
        else if(month==2 &&!isleap(year)&&day==28){
            month+=1;
            day=1;
            d=(d+1)%7;
        }
        else if(month==1&&day==31){
            day=1;
            month+=1;
            d=(d+1)%7;
        }
        else{
            day+=1;
            d=(d+1)%7;
        }
    }
    cout<<ans;
    return 0;
}