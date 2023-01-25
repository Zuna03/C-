#include <bits/stdc++.h>
using namespace std;

class A {
    public:
    void funcA(){
       cout << "inherited" << endl;
    }
};

class C : public A{
    public :
    void funcC(){
      cout <<"multiple" << endl;
    }
};
    
    class B : public C {
        public :
    };

    

int main()
{
     B b;

     b.funcA();
     b.funcC();

   return 0;
}