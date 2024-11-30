#include <iostream>
using namespace std;
class Student{
    protected:
    int roll_num;
    public:
    void set_number(int a ){
        roll_num = a;

    }
    void print_number(void){
        cout<<"your roll number is "<<roll_num<<endl;
    }

};

class Test :virtual public Student{
    protected:
    float maths , physics;
    public:
    void set_marks(float m1 , float m2){
        maths = m1;
        physics = m2;
    }
    void print_marks(void){
         cout<<"Your result is :"<<endl
             <<"maths: "<<maths<<endl
             <<"Physics: "<<physics<<endl;
    }
};
class Sports:virtual public Student{
       protected:
       float score;
       public:
       void set_score(float sc){
        score = sc ;
        
       }
       void print_score(void){
         cout<<"Your PT score is "<<score<<endl;
       }
};

class Result :public Test , public Sports{
       private:
       float total;
       public:
       void display(void){
        total = maths + physics + score; 
        print_number();
        print_marks();
        print_score();
        cout<<"Your total score is : "<<total<<endl;
       }
};
int main(){
    Result harry;
    harry.set_number(1221);
    harry.set_marks(89 , 70);
    harry.set_score(10);

    harry.display();

   return 0;
}