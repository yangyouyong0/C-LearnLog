//
//  Person.h
//  CocosLearn01_CPP
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#ifndef __CocosLearn01_CPP__Person__
#define __CocosLearn01_CPP__Person__

#include <stdio.h>

namespace hujiang {
    
    class Person {
        
    private:
        int age;
        int sex;
        char *name;
        
    public:
        // 构造方法
        Person(int age, int sex,char* name);
        Person();
        
        // getter
        int getAge();
        int getSex();
        char* getName();
        
        // method
        void sayHello();
    };
}


#endif /* defined(__CocosLearn01_CPP__Person__) */
