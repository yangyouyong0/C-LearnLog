//
//  main.cpp
//  CocosLearn15_containers
//
//  Created by yangyouyong on 15/5/12.
//  Copyright (c) 2015年 yangyouyong. All rights reserved.
//

#include <iostream>
#include <list>  // 类似数组
#include <string>
#include <map>   // 字典

using namespace std;

int main(int argc, const char * argv[]) {
    
    std::list<std::string> l;
    
    l.push_back("Hello");
    l.push_back("hujiang");
    l.push_back("Yang");
    
    for (std::list<std::string>::iterator it = l.begin(); it != l.end(); it++) {
        std::cout<<*it<<"\n";
    }
    
    std::map<std::string, std::string> m;
//    m.insert(std::pair<string, string>("Hello","Hello,hujang"));
//    m.insert(pair<string, string>("name","zhangsan"));
    m["Hello"] = "Hello,hujiang";
    m["name"] = "zhangsan";
    
    cout<<m.at("Hello")<<"\n";
    cout<<m.at("name")<<"\n";
    
    cout<<m["Hello"]<<"\n";
    cout<<m["name"]<<"\n";
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
