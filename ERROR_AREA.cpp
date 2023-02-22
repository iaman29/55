#include<iostream>
using namespace std;

int area(int);
float area(float,float);
float area(float);

int main(){
int a=10;
int b=5;
float c=1;


cout<< "area of SQUARE[5] "<< area(5)<<endl;
cout<< "area of RECTANGLE[5] "<< area(5,10)<<endl;
cout<< "area of CIRCLE[5] "<< area(5.5);

 return 0;
}


float area(float a , float b){
    return (a*b);
}

int area(int c){
    return (c*c);

}

float area(float d){
    return (3.14*d*d);
}
