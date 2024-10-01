#if !defined(BIRD_H)
#define BIRD_H
#include<iostream>
class Bird{
    public:
        virtual void fly() = 0;
        virtual void eat() = 0;
        //it is an interface
        //there is no existence of bird
        //classes that inherit from bird will have to immplement pure virtual functions
};
class sparrow: public Bird{
    public:
        void eat(){
            std::cout<<"Sparrow is eating\n";
        }
        void fly(){
            std::cout<<"Sparrow is flying\n";
        }
};
class eagle: public Bird{
    public:
        void eat(){
            std::cout<<"eagle is eating\n";
        }
        void fly(){
            std::cout<<"eagle is flying\n";
        }
};

#endif // BIRD_H
