#include <iostream>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
using namespace std;

int mainArray [9]={1,2,3,4,5,6,7,8 ,9};
int A=0,B=0,C=0;

void mainfunction (int T ){

    for (int i = 0; i < 9; i++){

        for (int j = 0; j < 9; j++){
        
            for (int f = 0 ; f<9; f++){
                int total = mainArray[i]+mainArray[j]+mainArray[f];
                    if (total <= T && total >=(A+B+C)){
                        A=mainArray[i];
                        B=mainArray[j];
                        C=mainArray[f];
                        if (total == T )
                        break;
                      }
            }
        }   
    }
}
int main (){
int target ; 
cout<<"     hi;  but the target plz     >    ";
cin>>target;
mainfunction(target);
cout<<A<<"   " <<B<< "   " <<C;
    return 0;
}