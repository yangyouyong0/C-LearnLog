//
//  main.cpp
//  CocosLearn05_superClass
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include "Man.h"

int main(int argc, const char * argv[]) {

    // 执行父类的构造方法
    Man *man = new Man(40);
    printf("man age is %d\n",man->getAge());
    
    return 0;
}
