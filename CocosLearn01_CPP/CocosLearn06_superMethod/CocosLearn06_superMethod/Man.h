//
//  Man.h
//  CocosLearn03_Classes
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#ifndef __CocosLearn03_Classes__Man__
#define __CocosLearn03_Classes__Man__

#include <stdio.h>
#include "Person.h"

using namespace hujiang;

// 继承
class Man:public Person {
    
public:
    Man(int age);
    
    // 子类复写父类方法
    void sayHello();
    
};

#endif /* defined(__CocosLearn03_Classes__Man__) */
