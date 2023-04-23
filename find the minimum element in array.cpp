//---------------------find the minimum element in array--------------------

#include<iostream>
using namespace std;

int main(){
int A[]={8,4,12,37,36,25,-7,10,15,25};
int min= A[0];

for(int i=0 ; i<10 ; i++){
    if(A[i]<min){
       min = A[i];   
         }
}
    cout<<"the min value of array is"<<min<<endl;
    return 0;
}
