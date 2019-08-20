//
//  handler.cpp
//  design_patterns
//
//  Created by hauk on 2019/8/19.
//  Copyright © 2019 hauk. All rights reserved.
//
#pragma once

#include <stdio.h>
#include <iostream>

namespace bank {
  
    class Request {
    public:
        Request(std::string _name, int _loan): m_name(_name),m_loan(_loan){ }
        ~Request(){}
        
        int GetLoan() const {return m_loan;}
        std::string GetName() const {return m_name;}
        
    private:
        std::string m_name;
        int m_loan;

        
    };
    
    class Response {
    public:
        Response(int _rst, std::string _info):m_result(_rst), m_info(_info){ }
        ~Response(){ }
        
        int GetResult(){
            return m_result;
        }
        
        std::string GetInfo(){
            return m_info;
        }
        
    private:
        int m_result;
        std::string m_info;
    };
    
    
    
    class ChainHandler {
    public:
        ChainHandler(int _maxLoan, ChainHandler *_handler):m_maxLoan(_maxLoan),m_nextHandler(_handler){}
        virtual ~ChainHandler(){}
        
        virtual Response* handleRequest(const Request &request) {
            
            if (this->canHanlerRequest(request)) {
                return this->doRequest(request);
            } else {
                
                if (m_nextHandler != nullptr) {
                    return this->forwardToNext(request);
                } else {
                    std::cout << "none handler can handle the request , please connect us" << std::endl;
                    Response * resp = new Response(-1,"error");
                    return resp;
                }
                
            }
            return NULL;
        };
        
        void setNextHandler(ChainHandler *next){
            m_nextHandler = next;
        }
        
        bool canHanlerRequest(const Request& request){
            
            return this->m_maxLoan >= request.GetLoan();
        }
        
        virtual Response* doRequest(const Request& request){
            Response *res = new Response(-1,"error");
            return res;
        }
        
        Response*  forwardToNext(const Request& request){
//            std::cout << typeid(m_nextHandler).name() << std::endl;
            return m_nextHandler->handleRequest(request);
        }
        
        
    private:
        int m_maxLoan;
        ChainHandler *m_nextHandler;
    };
    
    
    
    
    
}
