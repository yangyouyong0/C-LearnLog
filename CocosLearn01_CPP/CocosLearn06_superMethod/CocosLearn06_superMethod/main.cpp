//
//  main.cpp
//  CocosLearn06_superMethod
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

#include "Man.h"

int main(int argc, const char * argv[]) {
    
    Man *m = new Man(42);
    m->sayHello();
    
    // 调用父类方法
    m->Person::sayHello();
    
    return 0;
}
