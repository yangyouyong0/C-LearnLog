//
//  main.cpp
//  CocosLearn07_Founctions
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

#include "Man.h"

int main(int argc, const char * argv[]) {
    
    Person *man = new Man(22);
    man->sayHello();
    man->eat();
    
    return 0;
}
