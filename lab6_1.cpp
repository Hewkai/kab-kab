#include<iostream>
using namespace std;

int main(){
   int even = 0 , odd = 0 ;
   int i = 0 ;
   int input = 1;

    while(i < 1){
        cout << "Enter an integer: ";
        cin >> input ;
        if (input != 0){
            if(input %2 == 0){
                even++ ;
            }
            else {
                odd++ ;
            }
        
     }
     else{
        i++;
        cout << "#Even numbers = " << even << endl;
        cout << "#Odd numbers = " << odd ;
     }
    }

    return 0;
}
 