//
//  main.cpp
//  CocosLean17_filesys
//
//  Created by yangyouyong on 15/5/13.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    ofstream of("data.txt");
    of<<"hello hujiang\n";
    of.close();
    
    ifstream inf("data.txt");
   
//    char c;
//    inf>>c;
//    cout<<c<<"\n";
    
    stringbuf sb;
    inf>>&sb;
    
    cout<<sb.str()<<"\n";
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
