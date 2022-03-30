//
//  main.cpp
//  CSCI251-Exam2021-Q2-Sample Code
//
//  Created by Yik Hin Garret Lai on 28/2/2021.
//

#include <iostream>
#include "CampEquipment.h"
#include <vector>
int main(int argc, const char * argv[]) {
    // insert code here...
    CampEquipment tarp1;
    double price[] = {100, 200, 300};
    CampEquipment tent1("Tent", price , "Dod");
    CampEquipment tent2 = tent1;
    
    std::vector<CampEquipment> v;
    v.push_back(CampEquipment("Tent", price, "Osprey"));
    v.push_back(CampEquipment("Pole", price, "Luxe"));
    
    return 0;
}

/*Following is the expected output:
 
 Default constructor is invoked.
 Other constructor is invoked.
 Copy constructor is invoked.
 Other constructor is invoked.
 Move constructor is invoked.
 Destructor is invoked.
 Other constructor is invoked.
 Move constructor is invoked.
 Copy constructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 Destructor is invoked.
 
 */
