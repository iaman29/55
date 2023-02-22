#include<iostream>
using namespace std ;


class student {
    String name[20];
    int rollno;
    String degree[20];
    String hostel[20];
    double cgpa;
public:
    void aaddeatails(){
        cout<<"enter details";
        cin>>name>>rollno>>degree>>hostel>>cgpa;

    }
    void updatedetails(){
        cout<<"enter new details";
        cin>>name>>rollno>>degree>>hostel>>cgpa;

    }
    void updatecgpa(){
        cout<<"enter new cgpa";
        cin>>cgpa;

    }
    void updatehostle(){
            cout<<"enter new hostel";
            cin>>hostel;
    }
    void displaydeatils(){
        cout<<endl<<"NAME:-"<<name;
        cout<<endl<<"ROLLNO.:-"<<rollno;
        cout<<endl<<"DEGREE:-"<<degree;
        cout<<endl<<"HOSTEL:-"<<hostel;
        cout<<endl<<"CGPA:-"<<cgpa;
        
    }
    
};







int main (){
 student stu1;
    stu1.aaddeatails();









return 0;
}