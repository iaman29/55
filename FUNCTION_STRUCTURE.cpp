#include<iostream>
using namespace std;

 
class structure {
  private:
    int num1=10;
    int num2=50;
  public:
  int swap(int &a, int &b ){
    int temp = a;
    a=b;
    b=temp;
    return (a,b);
    void call(void){
      swap(num1,num2);
    }
}
  
}cal;




int main(){
  // cin>>cal.num1;
  // cin>>cal.num2;
  cout<<"NUMBER BEFORE SWAPPING"<<endl<<"(a,b)="<<cal.num1<<","<<cal.num2;
  call();
  cout<<endl<<"NUMBER AFTER SWAPPING"<<endl<<"(a,b)="<<cal.num1<<","<<cal.num2;
  
    return 0;
}


