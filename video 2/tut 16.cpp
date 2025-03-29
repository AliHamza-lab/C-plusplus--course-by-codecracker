//#include <iostream>
//using namespace std;
//
//void changeValue(int x) {
//    x = 20;
//    cout<<x;
//}
//
//int main() {
//    int num = 10;
//    changeValue(num);
////    cout << "Value of num: " << num << endl;
//
//    return 0;
//}

#include <iostream>
using namespace std;

void changeValue(int &x) {
    x = 20;
}

int main() {
    int num = 10;
    changeValue(num);
    cout << "Value of num: " << num << endl;

    return 0;
}

