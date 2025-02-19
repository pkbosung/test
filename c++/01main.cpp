#include <iostream>
using namespace std;
class PizzaFrame{
    private:
    int radius;
    
    public:
    PizzaFrame();
    PizzaFrame(int r);
    double getSize();
    ~PizzaFrame();
};
PizzaFrame::PizzaFrame(){
    radius = 3;
}
PizzaFrame::~PizzaFrame(){}
double PizzaFrame::getSize(){
    return radius*radius*3.14;
}
int main(){
    PizzaFrame smallPizza;
    double size = smallPizza.getSize();
    cout<<"this size is "<<size<<endl;
}

