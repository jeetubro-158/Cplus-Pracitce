#include <iostream>
using namespace std;
class Pakistan{
    int fighters,warships;
    public:
    Pakistan(){}
    Pakistan(int f, int w){
        fighters=f;
        warships=w;
    }
    friend class India;
};

class India{
    int fighters,warships;
    public:
    India(){}
    India (int f, int w){
        fighters=f;
        warships=w;
    }
    int totstr(Pakistan p){
        cout<<"Total Fighters = "<<fighters+p.fighters<<endl;
        cout<<"Total Warships = "<<warships+p.warships<<endl;
    }
};

int main(){
    India x(130,10);
    Pakistan y(100,5);
    x.totstr(y);
    return 0;
}

