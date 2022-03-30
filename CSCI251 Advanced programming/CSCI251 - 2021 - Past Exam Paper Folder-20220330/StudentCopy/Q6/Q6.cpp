
#include<iostream> 
using namespace std; 
  
class Q6  { 
    int x, y; 
public: 
    Q6(){
        cout<<"Constructor is called"<<endl;
    }
    Q6(int x, int y) { 
        this->x = x;
        this->y = y;
        cout<<"Constructor is called"<<endl;   
    } 
    
    void printValue(){
        cout << "x: " << x << " and y: " << y << endl;
    }
    
    // Code the binary operator + here...
    
    
    // Code the prefix ++ here...
    
    
}; 
  
int main()  { 
   Q6 a(1, 2); 
   cout << "Values in a: "; 
   a.printValue();
   
   ++a;
   cout << "Values in a after ++: ";
   a.printValue();
   
   Q6 b(3, 4); 
   cout << "Values in b: ";
   b.printValue();
   
   Q6 c = a + b;
   cout << "Values in c: "; 
   c.printValue();
   
   return 0; 
} 

/* Expected output:
   Constructor is called
   Values in a: x: 1 and y: 2
   Values in a after ++: x: 2 and y: 3
   Constructor is called
   Values in b: x: 3 and y: 4
   Constructor is called
   Values in c: x: 5 and y: 7       
*/
