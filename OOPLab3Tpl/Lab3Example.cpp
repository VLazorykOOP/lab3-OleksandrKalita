﻿#include<iostream>
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
	int S(){
        return 3.14 * pow(radius, 2);
    }
    int C(){
        return 2 * 3.14 * radius;
    }
    void SetCircleInfo(){
        int radius;
        cout << "Input circle radius: ";
        cin >> radius; 
        if( radius<0 || radius > 1.e+100) {
            cout<<" Error set a \n";
        } else {
            this->radius = radius;
        }
        cout << "Input cirlce color: ";
        cin >> color;

        if( color<0 || color > 10000){ 
            cout<<" Error set color \n";
        } else{
            this->color = color;
        }
    }
    void ShowInfo(){
        cout << "Radius: " << radius << endl;
        cout << "Color: " << color << endl;
    }
};
class ComplexValue{
public:
    float re;
    float im;
    static int count;
    
    ~ComplexValue(){

        cout << "re: " << re << endl;
        cout << "im: " << im << endl;
    }

};
int ComplexValue::count = 0;
ComplexValue::ComplexValue(){ 
        re = 0; 
        im = 0;
        count++;
}
ComplexValue::ComplexValue(float value){
        re = value; 
        im = value;
        count++;
}
ComplexValue::ComplexValue(float *v){
        if (v == nullptr) {
            
        }
        count++;
}

int main(){

    return 0;
}