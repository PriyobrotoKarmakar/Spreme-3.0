#include<iostream>
#include"bird.h"
using namespace std;
void birdtest(Bird*&bird){
    bird->fly();
    bird->eat();
}

int main(){
    Bird *bird = new sparrow();
    birdtest(bird);
}