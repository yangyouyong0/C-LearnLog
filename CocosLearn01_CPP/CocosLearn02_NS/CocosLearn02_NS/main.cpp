//
//  main.cpp
//  CocosLearn02_NS
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include "Person.h"

// 使用命名空间
using namespace hujiang;

int main(int argc, const char * argv[]) {

    Person *p = new Person();
    p->sayHello();
    
    return 0;
}
