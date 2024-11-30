#include <iostream>
#include <cmath>
using namespace std;

class Point {
    int x , y;
    friend double Distancbetpoints(Point o1, Point o2);
    public:
    Point(int a , int b ){
        x=a;
        y=b;

    }
    void displayPoint(){
        cout<<"The points are "<<x<<","<<y<<endl;
    }
};
double Distancbetpoints(Point o1,Point o2){
    // float d = sqrt(pow (o2.x -o1.x , 2) + pow(o2.y - o1.y , 2));
    // cout<<d<<endl;
 // OR THIS METHOD IS ALSO CORRECT
    int dx = o2.x - o1.x;
    int dy = o2.y - o1.y;
    return sqrt(pow(dx , 2)+ pow(dy , 2));
    }
   
int main(){
    Point p(1,6);
    p.displayPoint();
    Point q(4,2);
    q.displayPoint();
    cout<<"The distance between 2 points is :"<<Distancbetpoints(p , q)<<endl;
   return 0;
}