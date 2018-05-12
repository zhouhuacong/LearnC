//
// Created by 周华聪 on 2018/5/12.
//

#ifndef LEARNC_MAN_H
#define LEARNC_MAN_H


class man {

public:
    man();

    man(const char *s, int i = 0);

    ~man();

    char name[100];
    int age;

    void set_name(const char *s);

    void set_age(int i);

    int get_age();
};


#endif //LEARNC_MAN_H
