//
//  main.cpp
//  CocosLearn13_Ref
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x,y;
    
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }
    
    int getX(){
        return this->x;
    }
    
    int getY(){
        return this->y;
    }
    
    
//    void add(Point p){
//        this->x += p.x;
//        this->y += p.y;
//    }
    
    // 引用
    void add(Point &p){
        this->x += p.x;
        this->y += p.y;
    }
    
};

int main(int argc, const char * argv[]) {

    Point p(1,1);
    Point p1(2,3);
    p.add(p1);
    
    std::cout<<p.getX()<<"\n";
    
    std::cout << "Hello, World!\n";
    return 0;
}
