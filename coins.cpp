#include <iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;

int totalvalue[7]={0,0,0,0,0,0,0};// a1=500,a2=100,a3=50,a4=20,a5=10,a6=5,a7=1;
int basevalue[7]={500,100,50,20,10,5,1};
int ceakout(int x ){
    for (int i =  0 ; i < 7 ;){
    if (x-basevalue[i]>=0){
    totalvalue[i]+=1;
    x-=basevalue[i];
    }
    if(x-basevalue[i]<0)
            i++;
    }
}
int main (){
    int coinsvalue ; 
    bool the_end = false ;
    cout<<"                hello in our program .\n    press 1 to continus .";
if (getch()=='1'){
    cout<<"\n dawnlaoding fils";
    for (int i = 0 ; i < 5 ; i++){
        cout<<".";
        Sleep(1000);
    }
    system ("cls");
    cout<<"but any value  :  \n";
    cin>>coinsvalue;
ceakout(coinsvalue);
}
for (int i = 0 ; i < 7 ; i ++){
    if (totalvalue[i]>0)
cout<<"  you could have   "<<totalvalue[i]<<"  peaces of   "<<basevalue[i]<<" $"<<"\n";
}
    return 0 ;
}