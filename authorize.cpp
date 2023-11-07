#include "authorize.h"
#include <iostream>

bool SMS_Authenticator::authenticate(){
    std::cout<<"SMS Massage Sent \n";
    std::cout<<"User Authenticated \n";
    return true;
}

bool No_Robot_Authenticator::authenticate(){
    std::cout<<"No_Robot Dialogie Appeared \n";
    std::cout<<"User Authenticated \n";
    return true;
}