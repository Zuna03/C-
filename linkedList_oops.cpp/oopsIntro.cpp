#include <bits/stdc++.h>
using namespace std;

class student {
    string name;
    public:
   
    int age;
    bool gender;

    student(){
        cout << "default constructor" << endl;
    }
    
    student(string s,int a,int g){
        cout << "parameterised constructor" << endl;
        name=s;
        age=a;
        gender=g;
    }

    student(student &b){
        cout << "copy constructor" << endl;
        name=b.name;
        age=b.age;
        gender=b.gender;
    }
    
    ~student(){
        cout << "destructor called" << endl;
    }
    void setName(string s){
        name=s;
    }

    void getName(string s){
        cout << name << endl;
    }

   bool operator == (student b){
       if(name==b.name && age==b.age && gender==b.gender)
       {
       return true;
       }
       return false;
   }


void printInfo(){
    cout << "name =" ;
    cout << name << endl;
    cout << "Age=";
    cout << age << endl;
    cout <<"Gender=" ;
    cout << gender << endl;

}
};

int main()
{
       student b("urvi" , 20 , 1);
    //    b.printInfo();
      student a("sumi",19,1);

      student c=b;

       if(a==b){
           cout << "same "<< endl;
       }
       else{
           cout << "not same "<< endl;
       }

//    for (int i = 0; i < 3; i++)
//    { 
//       string s;
//       cout << "Name=";
//       cin >> s;
//       arr[i].setName(s);
//       cout << "age=";
//       cin >> arr[i].age;
//       cout << "Gender=";
//       cin >> arr[i].gender;


//    }
//    for (int i = 0; i < 3; i++)
//    {
//     arr[i]. printInfo();

//    }
   
   return 0;
}