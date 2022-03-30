//
//  main.cpp
//  CSCI251-Exam-Q4
//
//  Created by Yik Hin Garret Lai on 28/2/2021.
//

#include <iostream>
using namespace std;

// Code below here...

// Task 4a

class Sport{
    // Task 4a(i): create an attribute sportName
    
    
    // Task 4a(ii):
    // Carefully study the main() and see what constructors and methods are required
    
    
    // Task 4a(iii): Create a pure virtual method outputInfo()
    
}

// Task 4b
// Replace ????? with your code for proper inheritance
class WaterSport : ????? {
    // Task 4b(i): create an attribute indoor
    
    
    // Task 4b(ii):
    // Carefully study the main() and see what constructors and methods are required
    
    
    // Task 4c(iii): Create a outputInfo() that overrides the base class Sport
    
}

// Task 4c
// Replace ????? with your code for proper inheritance
class LandSport : ????? {
    // Task 4c(i): create an attribute typeOfSurface
    
    
    // Task 4c(ii):
    // Carefully study the main() and see what constructors and methods are required
    
    
    // Task 4c(iii): Create a outputInfo() that overrides the base class Sport
    
}

// Task 4d
// Replace ????? with your code for proper inheritance
// Be reminded to tackle diamond problem
class Triathlon : ????? {
    
    // Task 4d(i):
    // Carefully study the main() and see what constructors and methods are required
    
    
    // Task 4d(ii): Create a outputInfo() that overrides its direct and indirect base classes
    
}

// Task 4e: Explain whether a Sport class object instance can be created.
// Your answer to 4e:

// DO NOT modify the main()
int main(int argc, const char * argv[]) {
    Sport* sportList[3];
    sportList[0] = new Triathlon("Triathlon", "road and sea", true);
    sportList[1] = new LandSport("Ice skating", "ice");
    sportList[2] = new WaterSport("Wind surfing", false);
    
    for (int i = 0; i < 3; i++)
        sportList[i]->outputInfo();
    
    cout << endl;
    
    for (auto& x : sportList){
        delete x;
        cout << endl;
    }
    return 0;
}
/* Expected output from main():
 
 Triathlon is sport on road and sea.
 Ice skating is a land sport on ice.
 Wind surfing is an outdoor water sport.

 Triathlon destructor is invoked.
 Water sport destructor is invoked.
 Land sport destructor is invoked.
 Sport destructor is invoked.

 Land sport destructor is invoked.
 Sport destructor is invoked.

 Water sport destructor is invoked.
 Sport destructor is invoked.
 
 */
