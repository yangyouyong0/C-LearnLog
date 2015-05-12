//
//  main.cpp
//  CocosLearn11_seudoFounction
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

void hello(){
    
};

// 伪函数
class Hello {
    
public:
    void operator()(){
        printf("hello CPP\n");
    }
};

int main(int argc, const char * argv[]) {
    
    Hello h;
    h();
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
