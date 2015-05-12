//
//  main.cpp
//  CocosLearn16_String
//
//  Created by yangyouyong on 15/5/13.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {

    string str = "hello world!";
    str += "hujiang";
    
    cout<<str<<"\n";
    
    stringstream ss;
    ss<<"hello "<<20<<" "<<2.5<<" hujiang";
    cout<<ss.str()<<"\n";
    
    return 0;
}
