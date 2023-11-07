
#ifndef Authorize_H_
#define Authorize_H_
#pragma once

#include <iostream>

class Authenticator{
    public:
        virtual bool authenticate()=0;
};

class SMS_Authenticator:public Authenticator{
    public:
        bool authenticate();
};
class No_Robot_Authenticator:public Authenticator{
    public:
        bool authenticate();
};

#endif