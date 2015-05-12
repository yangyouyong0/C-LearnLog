//
//  Person.cpp
//  CocosLearn01_CPP
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include "Person.h"

namespace hujiang {
    
    
    
    Person::Person(int age, int sex,char* name){
        this->age = age;
        this->sex = sex;
        this->name = name;
    }
    
    Person::Person(){
        this->age = 10;
        this->sex = 1;
        this->name = "Yang";
    }
    
    
    void Person::sayHello(){
        printf("hello this is a C++ Proj\n");
    }
    
    int Person::getAge(){
        return this->age;
    }
    
    int Person::getSex(){
        return this->sex;
    }
    
    char* Person::getName(){
        return this->name;
    }
    
}