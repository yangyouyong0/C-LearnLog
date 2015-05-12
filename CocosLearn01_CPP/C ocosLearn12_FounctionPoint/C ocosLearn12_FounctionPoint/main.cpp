//
//  main.cpp
//  C ocosLearn12_FounctionPoint
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include <thread>
#include <unistd.h>

// 函数指针

class Object;

typedef void(Object::*SayHi)();

class Object {
    
public:
//    void(Object::*sayHi)();
    SayHi sayHi;
};

typedef void(Object::*CallLeterHandler)() ;

void threadFunc(Object *target, CallLeterHandler handler, int delay){
    sleep(delay);
    (target->*handler)();
}

void callLater(Object *target, CallLeterHandler handler, int delay){
    
    std::thread t(threadFunc,target,handler,delay);
    t.join();
}

#define CH(fp) (CallLeterHandler)(&fp)


class Hello:public Object {
    
public:
    Hello(){
//        sayHi = (void(Object::*)())(&Hello::HelloSayHi);
//        sayHi = (SayHi)(&Hello::HelloSayHi);
//
//        (this->*sayHi)();
//        ((CallLeterHandler)(&Hello::HelloSayHi))
        callLater(this, CH(Hello::HelloSayHi), 3);
        
    }
    
    void HelloSayHi(){
        printf("Hello CPP\n");
    }
    
};



int main(int argc, const char * argv[]) {

    std::cout << "Hello, World!\n";
    
    Hello *h = new Hello();
    delete h;
    
    std::cout << "Hello, World!\n";
    return 0;
}
