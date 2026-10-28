//procedural

#include<iostream>
using namespace std;

const float PI=3.14;

float squareArea(float s){
    return s*s;
}
float arearectangle(float l, float b){
    return l*b;
}
float trianglearea(float l, float h){
return 0.5*l*h;
}
float circlearea(float r){
    return PI*r*r;
}


int main(){
    int choice;
    int x,y;
    
    cout<<"area of shapes\n1.rectangle\n2.circle\n3.square\n4.triangle\n";
    cout<<"enter a choice between 1 to 4\n";
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"area of rectangle: \nenter sides x and y:\n";
        cin>>x>>y;
        cout<<arearectangle(x,y)<<endl;
        break;
        
        case 2:
        cout<<"area of circle\n enter the radius of the circle:\n";
        cin>>x;
        cout<<circlearea(x)<<endl;
        break;
        
        case 3:
        cout<<"area of square\n  enter the side of square";
        cin>>x;
        cout<<squareArea(x)<<endl;
        break;
        
        case 4:
        cout<<"area of triangle\n  enter the length and height of triangle\n";
        cin>>x>>y;
        cout<<trianglearea(x,y)<<endl;
        break;
        
        default:
        cout<<"invalid input, exiting th eprogram...";
        break;
        
    }
    
    return 0;





  //oop

  #include<iostream>
using namespace std;

class shape {
    
    public:
    float x, y;
    
    float rectanglearea(){
        return x*y;
    }
    float circlearea(){
        return 3.14*x*x;
    }
};

    
    
int main(){
    shape s;
  
    int choice;
    
    cout<<("operations rectangle, circle:\n");
    cin>>choice;
    
    switch(choice){
        case 1:
        cout<<"enter side\n ";
        cin>>s.x>>s.y;
        cout<<s.rectanglearea()<<endl;
        break;
        
        case 2:
        cout<<"enter radius\n";
        cin>>s.x;
        cout<<s.circlearea()<<endl;
        break;
        
    }
    return 0;
}
}
