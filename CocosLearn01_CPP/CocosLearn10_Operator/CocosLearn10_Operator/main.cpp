//
//  main.cpp
//  CocosLearn10_Operator
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>

class Point {
private:
    int x;
    int y;
public:
    Point(int x, int y){
        this->x = x;
        this->y = y;
    };
    
     int getX(){
        return this->x;
    };
    
     int getY(){
        return this->y;
    };
     void add(Point p){
      
        add(p.getX() , p.getY());
    };
    
    void  add(int x, int y){
        this->x += x;
        this->y += y;
    };
    
    // 运算符重载
    void operator += (Point p){
        add(p);
    }
    
};

int main(int argc, const char * argv[]) {
    
//    Point p(10,10);
////    p.add(13, 13);
//    p+= Point(13,13);

    Point *p = new Point(15,15);
    (*p)+= Point(12,12);
    
    std::cout<<p->getX()<<"\n";
    
    return 0;
}
