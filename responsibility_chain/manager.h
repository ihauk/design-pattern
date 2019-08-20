//
//  manager.cpp
//  design_patterns
//
//  Created by hauk on 2019/8/20.
//  Copyright © 2019 hauk. All rights reserved.
//

#include <stdio.h>
#include "handler.h"

namespace bank {
    
    
    class TopManager :public ChainHandler {
    public:
        TopManager(int _maxLoan):ChainHandler(_maxLoan,nullptr){}
        ~TopManager(){}
        
        Response* doRequest(const Request& request){
            std::cout << "i'am TopManager ,i can handle " << request.GetLoan() << std::endl;
            Response *res = new Response(0,"success");
            return res;
        }
        
    };
    
    class ProvinceManager :public ChainHandler {
    public:
        ProvinceManager(int _maxLoan, ChainHandler* _next):ChainHandler(_maxLoan,_next){}
        ~ProvinceManager(){}
        
        Response* doRequest(const Request& request){
            std::cout << "i'am ProvinceManager ,i can handle " << request.GetLoan() << std::endl;
            Response *res = new Response(0,"success");
            return res;
        }
    };
    
    class CityManager: public ChainHandler {
    public:
        CityManager(int _maxLoan, ChainHandler* _next):ChainHandler(_maxLoan,_next){}
        ~CityManager(){}
        
        Response* doRequest(const Request& request){
            std::cout << "i'am CityManager ,i can handle " << request.GetLoan() << std::endl;
            Response *res = new Response(0,"success");
            return res;
        }
    };
    
    class Manager : public ChainHandler{
    public:
        Manager(int _maxLoan, ChainHandler* _next):ChainHandler(_maxLoan,_next){}
        ~Manager(){}
        
        Response* doRequest(const Request& request){
            std::cout << "i'am Manager ,i can handle " << request.GetLoan() << std::endl;
            Response *res = new Response(0,"success");
            return res;
        }
    };
    
    class Employee : public ChainHandler {
    public:
        Employee(int _maxLoan, ChainHandler* _next):ChainHandler(_maxLoan,_next){}
        ~Employee(){}
        
        Response* doRequest(const Request& request){
            std::cout << "i'am Employee ,i can handle " << request.GetLoan() << std::endl;
            Response *res = new Response(0,"success");
            return res;
        }
    };
    
}
