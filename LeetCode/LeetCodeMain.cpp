//
// Created by 周华聪 on 2018/5/6.
//

#include <iostream>
#include <cmath>
#include "MyVector.h"

using namespace std;

int learn_main() {
    for (int i = 10; i <= 26; i++) {
        int n = pow(2, i);

        clock_t startTime = clock();
        MyVector<int> vec;
        for (int e = 0; e < n; e++)
            vec.push_back(e);
        for (int j = 0; j < n; j++)
            vec.pop_back();

        clock_t endTime = clock();

        cout << 2 * n << " operations: \t";
        cout << double(endTime - startTime) / CLOCKS_PER_SEC << "  s" << endl;
    }
    return 0;
}