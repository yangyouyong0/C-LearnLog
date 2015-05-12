//
//  main.cpp
//  CocosLearn03_Classes
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {
    Man *man = new Man();
    man->sayHello();
    man->getName();
    printf("name is %s \nage is %d\n",man->getName(),man->getAge());
    printf("print \n");
    
    
    return 0;
}
