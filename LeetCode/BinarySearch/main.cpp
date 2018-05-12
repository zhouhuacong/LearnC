//
// Created by 周华聪 on 2018/5/6.
//

#include <iostream>
#include <cmath>
#include <cassert>
#include <ctime>

using namespace std;

template<typename T>
int binarySearch(T arr[], int n, T target) {
    // 在[l...r]的范围里寻找target
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[mid] > target) {
            r = mid - 1;
        } else {
            r = mid + 1;
        }
    }

    return -1;
}

int cmain() {
    return 0;
}