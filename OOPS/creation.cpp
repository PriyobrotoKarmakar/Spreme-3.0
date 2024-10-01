#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Student{
    public:
    //attributes
          string name;
          int id;
          int age;
    

          
    //parametrized constructor
        Student(int id,string name,int age){
            this->id = id;
            this->name = name;
            this->age = age;
        }
    //methods
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"ID: "<<id<<endl;
            cout<<"Age: "<<age<<endl;
        }
    //desStructor
        ~Student(){

        }
};

int main(){
    Student s1(1,"Priyo",20);
    s1.display();
    return 0;
}