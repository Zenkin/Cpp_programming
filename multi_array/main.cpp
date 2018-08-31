#include <iostream>
#include <boost/multi_array.hpp>

using namespace std;

typedef boost::multi_array<float, 2> array_2D;
typedef boost::multi_array<float, 3> array_3D;

class MyClass {

public:

    int N, M, K;

public:

    void work_with_2D_array(boost::multi_array<float, 2> array);
    void work_with_3D_array(boost::multi_array<float, 3> array);
    void start();

};

void MyClass::long_penis() {
    size = 2;
    N = 3; M = 4; K = 2;

    if (size == 2) {
        array_2D A(boost::extents[N][M]);
        A[2][3] = 2;
        work_with_2D_array(A);
    }

    if (size == 3) {
        array_3D A(boost::extents[N][M][K]);
        A[2][3][1] = 3;
        work_with_3D_array(A);
    }
}

void MyClass::work_with_2D_array(boost::multi_array<float, 2> array) {
    cout << array[2][3];
}

void MyClass::work_with_3D_array(boost::multi_array<float, 3> array) {
    cout << array[2][3][1];
}

int main() {

    MyClass myclass;
    myclass.start();

    return 0;
}
