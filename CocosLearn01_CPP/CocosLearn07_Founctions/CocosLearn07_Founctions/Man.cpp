//
//  Man.cpp
//  CocosLearn03_Classes
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include "Man.h"

// 子类执行父类的方法

Man::Man(int age):Person(age,1,"wu"){
    
    // 调用父类方法
//    Person::sayHello();
}

void Man::sayHello() {
    // 调用父类方法
//    Person::sayHello();
    printf("Man say Hello\n");
}

// 纯虚函数, java抽象方法  ,OC协议
void Man::eat(){
    printf("Man is eating");
}