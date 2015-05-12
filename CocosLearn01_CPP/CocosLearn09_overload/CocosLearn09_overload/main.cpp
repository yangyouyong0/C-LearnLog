//
//  main.cpp
//  CocosLearn09_overload
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

class Hello {
    
public:
    void sayHello(){
        printf("hello hujiang\n");
    }
    
//    void sayHello(char *name){
//        printf("say hello,%s\n",name);
//    }
    
    
    // 方法重载
    void sayHello(std::string name){
        std::string str = "Hello ";
        str = str + name;
        std::cout<<str<<"\n";
        std::cout<<name<<"\n";
    }

};

int main(int argc, const char * argv[]) {
    
    Hello *hello = new Hello();
    hello->sayHello();
    hello->sayHello("zhangsan");
    
    
    return 0;
}
