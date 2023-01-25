#include <bits/stdc++.h>
using namespace std;

// class functionOverloading{
//     public :
//     void func(){
//         cout << "no arg" << endl;
//     }
//     void func(int x){
//         cout << "int arg" << endl;
//     }
//     void func(double x){
//         cout << "dou arg" << endl;
//     }

// };
// int main()
// {
//    functionOverloading obj;
//    obj.func();
//    obj.func(4.3);
//    obj.func(4);



// operator overloading
// class Complex{
//    private:
//      int real , imag ;
//    public :
//      Complex(){
//          real=0;
//          imag=0;
//      }
//      Complex(int r , int i){
//          real=r;
//          imag=i;
//      }
//      //operator overloading
//      Complex operator + (Complex c){
//          Complex temp;
//          temp.real=real+c.real;
//          temp.imag=imag+c.imag;
//          return temp;
//      }
//      void print(){
//          cout << real << "+" << imag << "i" << endl;
//      }


// };
// int main(){
//     Complex c1(5,7);
//     Complex c2(3,2);
//     Complex c3;

//     c3 = c1 + c2 ;

//     c3.print();


//unary operator
// class weight{
//     private :
//       int kg;
//     public :
//        weight(){
//          kg=0;
//       }
//       weight(int x){
//          kg=x;
//       }
//       void operator ++(){
//           ++kg;
        
//       }
//        void operator ++(int){
//           kg++;
        
//       }
//       void operator --(){
//           --kg;
        
//       }
//        void operator --(int){
//           kg--;
        
//       }
//           weight operator ++(){
//               weight temp;
//               temp.kg=++kg;
//               return kg;
//           }
//       void print(){
//           cout << "weight in kg is " << kg << endl;
//       }


// };
// int main(){
//     weight obj1;
//     weight obj2;
//     obj2.print();
//     obj1.print();
//     obj2 = ++obj1;
//     obj2.print();
//     obj1.print();
//     ++obj2;
//     obj2.print();
//     obj1.print();
//     // obj++;
//     // obj.print();
//     // --obj;
//     // obj.print();
//     // obj--;
//     // obj.print();


// virtual functions

// class base{
//     public :
//     void print(){
//         cout << "this is base print" << endl;
//     }
//       virtual void display(){
//         cout << "this is base display" << endl;
//     }

// };

// class derieved : public base{
//     public :
//     void print(){
//         cout << "this is derieved print" << endl;
//     }
//     void display(){
//         cout << "this is derieved display" << endl;
//     }

// };

// int main(){
//     base *ptr;
//     derieved obj;
//     ptr = &obj;

//     ptr ->print();
//     ptr ->display();



// virtual functions example from real life

class animals{
    public :
      virtual void eat(){
        cout << "animal food" << endl;
      }
};
class cat : public animals{
     public:
     void eat(){
         cout << "cat food" << endl;
     }
};
class dog : public animals{
     public:
     void eat(){
         cout << "dog food" << endl;
     }
};

void display(animals *ptr){
      ptr ->eat();
}

int main(){
    animals *ptr;
    cat catObj;
    dog dogObj;

    ptr = &catObj;
    display(ptr);
    ptr = &dogObj;
    display(ptr);


return 0;
}