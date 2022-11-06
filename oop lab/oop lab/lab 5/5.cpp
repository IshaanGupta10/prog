#include <iostream>
using namespace std;

class A{
    protected:
        int a;
    public:
        A(){
            cout << "Constructor for class A called (parent class)\n";
        }
        ~A(){
            cout << "Destructor for class A called (parent class)\n";
        }  
};

class B{
    protected:
        int b;
    public:
        B(){
            cout << "Constructor for class B called (parent class)\n";
        }
        ~B(){
            cout << "Destructor for class B called (Parent Class)\n";
        }  
};

//Single Inheritance
class C: public A{              
    protected:
        int c;
    public:
        C(): A(){
            cout << "Constructor for class C called (Child Class - Single Inheritance)\n";
        }
        ~C(){
            cout << "Destructor for class C called (Child Class - Single Inheritance)\n";
        }
};

//Multi-Level Inheritance
class D: public C{
    protected:
        int d;
    public:
        D(): C(){
            cout << "Constructor for class D called (Child Class - Multi-Level Inheritance)\n";
        }
        ~D(){
            cout << "Destructor for class D called (Child Class - Multi-Level Inheritance)\n";
        }
};

//Multiple Inheritance
class E: public A, B{
    protected:
        int e;
    public:
        E(): A(), B(){
            cout << "Constructor for class E called (Child Class - Multiple Inheritance\n";
        }
        ~E(){
            cout << "Destructor for class E called (Child Class - Multiple Inheritance)\n";
        }
};

//Hybrid Inheritance
class F: virtual public B, C{
    protected:
        int f;
    public:
        F(): B(), C(){
            cout << "Constructor for class F called (Child Class - Hybrid Inheritance / Virtual Base Class)\n";
        }
        ~F(){
            cout << "Destructor for class F called (Child Class - Hybrid Inheritance / Virtual Base Class)\n";
        }      
};

//Heirarchial Inheritance
class G: public A{
    protected:
        int g;
    public:
        void input(){
            cout<<"\nHeirarchial Inheritance part 1 (Enter 2 integers): ";
            cin>>a>>g;
        }
        void sum(){cout<<a+g<<'\n';}
};

class H: public A{
    protected:
        int h;
    public:
        void input(){
            cout<<"\nHeirarchial Inheritance part 2 (Enter 2 integers): ";
            cin>>a>>h;
        }
        void diff(){cout<<a-h<<'\n';}
};

int main(){
    C c;
    cout << endl;
    D d;
    cout << endl;
    E e;
    cout << endl;
    F f;
    cout << endl;
    G g;
    cout << endl;
    H h;
    cout << endl;
    g.input();
    g.sum();
    h.input();
    h.diff();
    return 0;
}
