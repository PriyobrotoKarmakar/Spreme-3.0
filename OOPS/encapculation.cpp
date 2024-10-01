#include<iostream>
#include<climits>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class Student{
    private:
    //attributes
          string gfname;
          
    public:
    //attributes
          string name;
          int id;
          int age;
    //parametrized constructor
    Student(int id,string name, int age,string gfname){
        this->id = id;
        this->name = name;
        this->age = age;
        this->gfname = gfname;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"gfname: "<<this->gfname<<endl;
    }
    ~Student(){
    }
};

int main(){
    Student s1(1,"Alex",20,"ALEXA");
    s1.display();
    // cout<<s1.gfname;
    return 0;
}