//
//  main.cpp
//  CocosLearn04_Method
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

class Object {
    
public:
    // 构造方法
    Object(){
        printf("Create Object\n");
    };
    
    // 析构方法
    ~Object(){
        printf("Delete Object\n");
    };
};

void runObj(){
    Object obj;
    printf("run end\n");
}

int main(int argc, const char * argv[]) {
    
//    Object *obj = new Object();
    
//    delete obj;
    runObj();
    
    return 0;
}
