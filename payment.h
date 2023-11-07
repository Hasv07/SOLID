
#ifndef PAYMENT_H_
#define PAYMENT_H_
#pragma once
#include "authorize.h"

#include <iostream>

class PaymentProcessor{
protected:
    Authenticator* _auth;    
public:

    virtual bool pay()=0;

};

class DebitPaymentProcessor:public PaymentProcessor{
std::string _security_code;
public:
    DebitPaymentProcessor(std::string security_code,Authenticator* auth);
    bool pay();

};
class CreditPaymentProcessor:public PaymentProcessor{
std::string _security_code;
public:
    CreditPaymentProcessor(std::string security_code,Authenticator* auth);
    bool pay();


};
class PaypalPaymentProcessor:public PaymentProcessor{
std::string _email_address;
public:
    PaypalPaymentProcessor(std::string email_addres,Authenticator* auth);
    bool pay();
};
#endif