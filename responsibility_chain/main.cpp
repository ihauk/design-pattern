//
//  main.cpp
//  design_patterns
//
//  Created by hauk on 2019/8/19.
//  Copyright © 2019 hauk. All rights reserved.
//

#include <iostream>
#include "manager.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    bank::TopManager *top = new bank::TopManager(200000);
    bank::ProvinceManager *province = new bank::ProvinceManager(150000,top);
    bank::CityManager *city = new bank::CityManager(100000,province);
    bank::Manager *manager = new bank::Manager(50000,city);
    bank::Employee *employee = new bank::Employee(10000,manager);
    
    const bank::Request req("hauk",10000);
    bank::Response *resp = employee->handleRequest(req);
    
    std::cout << "result is " << resp->GetResult() << ", msg is " << resp->GetInfo() << std::endl;
    
    free(resp);
    
    return 0;
}
