//
// Created by 周华聪 on 2018/5/12.
//

#include <iostream>
#include "man.h"

using namespace std;

man::man() {
    cout << "man() 构造函数" << endl;
    name = new char[100];
    memset(name, 0, sizeof(name));
}


man::man(const char *s, int i) {
    cout << "man(char *s, int i) 构造函数" << endl;
}


man::~man() {
    cout << "~man() 析构函数" << endl;
}

void man::set_name(const char *s) {

}

void man::set_age(int i) {

}

int man::get_age() {
    return 0;
}
