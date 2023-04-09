#include<iostream>
#include<cmath>

using namespace std;

class Circle{
public:
    int radius;
    unsigned int color;

    Circle(){
        cout << "Creat an object \'circle\'\n";
    }
    Circle(int valueRadius, unsigned int valueColor){
        if(valueColor>=0){
            color = valueColor; 
        }else {
            color =0;
        }
        radius = valueRadius;
        color = valueColor;
    }
};



int main(){

    return 0;
}