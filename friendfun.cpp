#include <iostream>
using namespace std;
class demo{
    int x,y,z;
    public:
    demo(){}
    demo(int x1, int y1, int z1){
        x=x1;
        y=y1;
        z=z1;
    }
    friend void disp(demo d);
};
void disp(demo d){
    cout<<"x = "<<d.x<<endl;
    cout<<"y = "<<d.y<<endl;
    cout<<"z = "<<d.z<<endl;
}
int main(){
    demo d(10,20,30);
    disp(d);
    return 0;
}