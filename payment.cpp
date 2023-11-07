#include "payment.h"

//Constructors
    DebitPaymentProcessor::DebitPaymentProcessor(std::string security_code,Authenticator* auth){
        this->_security_code=security_code;
        this->_auth=auth;
    }

    CreditPaymentProcessor::CreditPaymentProcessor(std::string security_code,Authenticator* auth){
        this->_security_code=security_code;
        this->_auth=auth;
    }
    PaypalPaymentProcessor::PaypalPaymentProcessor(std::string email_address,Authenticator* auth){
        this->_email_address=email_address;
        this->_auth=auth;
    }

//Pay Impelementation

bool DebitPaymentProcessor::pay(){
    std::cout << "Processing debit payment type" << " ----" ;
    std::cout << "Verifying security code: {" << _security_code << "}" << std::endl;
    return _auth->authenticate();
}
bool CreditPaymentProcessor::pay(){
    std::cout << "Processing credit payment type" << "----";
    std::cout <<"Verifying security code: {" << _security_code << "}"  << std::endl;
    return _auth->authenticate();
}
bool PaypalPaymentProcessor::pay(){
    std::cout << "Processing paypal payment type" << "----";
    std::cout <<"Verifying e-mail address: {" << _email_address << "}"  << std::endl;
    return _auth->authenticate();
}