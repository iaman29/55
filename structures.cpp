#include<iostream>
using namespace std;

    union details{
        char name[30];
        int age;
    };
int main(){
    union details s1,s2,s3;
    // for(int i = 1;i<=3;i++)
    // {
        cout<<"enter details of S1\n";
        cin>>s1.name;
        cin>>s1.age;
        cout<<"enter details of S2\n";
        cin>>s2.name;
        cin>>s2.age;
        cout<<"enter details of S3\n";
        cin>>s3.name;
        cin>>s3.age;
    cout<<"ENTERED DETAILS WERE:\n\n";
    cout<<s1.name;
    cout<<"\n";
    cout<<s2.name;
    cout<<"\n";
    cout<<s3.name;
    cout<<"\n";
    cout<<s1.age;
    cout<<"\n";
    cout<<s2.age;
    cout<<"\n";
    cout<<s3.age;




}