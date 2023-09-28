#include<iostream>
// #include<bits/stdc++.h>
using namespace std;
//todo *********************************************************************************************************

//! CLASS
// class , user defined data type, semicolon comes at the end of the class 

class rectangle{
    // access specifier  
    public:
        int l;
        int b;

// class can have multiple constructors, const have same name as that of a class 

// default const
        rectangle(){
            l=0;
            b=0;
        }

// parameterised const  
        rectangle(int x, int y){
            l=x;
            b=y;
        }

// copy const
        rectangle(rectangle &r){
            l=r.l;
            b=r.b;
        }

// destructor , ~classname , 
        ~rectangle(){
            cout<<"destcrutor is called"<<endl;
        }
};
//todo *********************************************************************************************************

//! ACCESS SPECIFIERS , INHERITANCE MODE
class parent{

    public :
        int x;

    protected:
        int y;
    
    private:
        int z;

};

// public , private , protected in front of class name are called as inheritance mode 

class child1: public parent{
    // x will remain public for this child class
    // y will remain protected for this child class
    // z will not be acessible for this child class
};

class child2: private parent{
    // x will remain private 
    // y will remain private 
    // z will not be acessible
};

class child3: protected parent{
    // x will remain protected 
    // y will remain protected 
    // z will not be acessible
};
//todo *********************************************************************************************************

//! MULTIPLE INHERITANCE

//*         parent 
//*         /      
//*     child1
//*       /
//*    child2


class parent1{
    public:
        parent1(){
            cout<<"parent1 constructor called"<<endl;
        }
};

class parent2{
    public:
        parent2(){
            cout<<"parent2 constructor called"<<endl;
        }
};

class child: public parent1, public parent2{
    public:
        child(){
            cout<<"child constructor called"<<endl;
        }
};
//todo *********************************************************************************************************

//! HIERARCHIAL INHERITANCE 

//*     parent 
//*    /      \
//*  child1   child2

class hierarchialParent{
    public:
        hierarchialParent(){
            cout<<"hierarchialParent constructor called"<<endl;
        }
};

class hierarchialChild1:public hierarchialParent{
    public:
        hierarchialChild1(){
            cout<<"hierarchialchild1 constructor called"<<endl;
        }
};

class hierarchialChild2:public hierarchialParent{
    public:
        hierarchialChild2(){
            cout<<"hierarchialchild1 constructor called"<<endl;
        }
};

//todo *********************************************************************************************************

// //! DIAMOND PROBLEM       (D will be having properties from 2 sides , from b side and c side)                
//*                                           a
//*                                         /   \
//*                                       c      b
//*                                       \      /
//*                                          d

class diamondParent{
    public:
    diamondParent(){
        cout<<"constructor is called of the parent class"<<endl;
    }


};

class dchild1: public diamondParent{
    public:
        dchild1(){
            cout<<"constructor called of child1 class"<<endl;
        }
};
class dchild2: public diamondParent{
    public:
        dchild2(){
            cout<<"constructor called of child2 class"<<endl;
        }
};

class dgrandchild: public dchild1, public dchild2{
    public:
        dgrandchild(){
            cout<<"constrcutor called of grandchild class"<<endl;
        }
};

int main(){
    // creation of object 
    rectangle r1;

    //object created and param const called 
    rectangle r2(3,2);

    // object created and copy comst called 
    rectangle r3(r2);

    //! DIAMOND PROBLEM
    cout<<"*****diamond problem ******"<<endl;
    dgrandchild gc;
    cout<<endl;


    return 0;

}