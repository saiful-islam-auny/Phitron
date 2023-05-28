#include <iostream>
using namespace std;

class MyClass {
public:
    char z; //1 byte
    int x;  //4 byte
    double y;   //8 byte
};

int main() {
    MyClass obj;
    
    cout<<sizeof(obj.x)<<endl;
    cout<<sizeof(obj.y)<<endl;
    cout<<sizeof(obj.z)<<endl;
    cout<<sizeof(obj);
    return 0;
}
