//
//  main.cpp
//  CocosLearn14_FriendClass
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

// 通过有元类 B 直接访问A 的私有变量

class A {
    friend class B;
private:
    int number;
public:
    A(){
        number = 10;
    }
};

class B:public A {
    
    
public:
    B(){
        printf("A number = %d\n",number);
    }
    
};

int main(int argc, const char * argv[]) {
    // insert code here...
    B b;
    std::cout << "Hello, World!\n";
    return 0;
}
