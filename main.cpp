#include <iostream>
#include <vector>

typedef double wages;

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::vector;

//int main() {
//    std::vector<string> someVector{10};
//    std::vector<int> somev;
//    cout << "vector string size : " << someVector.size() << endl;
//    return 0;
//}

class human {
public:
    char name[100];
    int age;
    int sex;
};

void test(int i) {
    i = 0;
}

inline int mymax(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int main() {
    for (int i = 0; i < 100; i++) {
        mymax(i, 10);
    }
    // 在C++不同类型的指针是不能直接赋值的，必须强转；
//
//    auto *p = (int *) malloc(sizeof(int));
//    *p = 10;
//    printf("%d", *p);
//    free(p);

    int *p = new int[10];

    for (int i = 0; i < 10; i++) {
        p[i] = i;
    }

    for (int i = 0; i < 10; i++) {
        cout << p[i] << endl;
    }
//    *p = 10;
//    cout << *p << endl;
    delete[]p;
    return 0;
}
