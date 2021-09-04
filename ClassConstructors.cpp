 #include<iostream>
 #include<string.h>

 using namespace std;

 class Human{
     private:
            string name;
            int age;
     public:
            Human(){
                name ="noname";
                age=0;
        
         /* here Human() is a constructor of class HUman{} 
         a constructor is a method or fucntion with no returntype
         and has the same name as the class name*/

            cout<< "constructor is called when u create an object of human"<<endl;

            }
            void display(){
                cout<<name<<"\t"<<age<<endl;
            }
    // constructors are allways constructected/declared/defined as public.

 };

 int main(){
     Human obj;
     /* construtor is called when u create an object of class Human */
     obj.display();
     return 0;
 }