#ifndef FACTORY_H
#define FACTORY_H

#include "TV.h"

//声明，包括创建电视的方法声明
class TVFactory
{
public:
    TVFactory();
    virtual ~TVFactory();
public:
    virtual TV* createTV() = 0;
};

class HisenseTVFactory : public TVFactory
{
public:
    HisenseTVFactory();
    virtual ~HisenseTVFactory();
public:
    virtual TV* createTV();
};

class HaireTVFactory : public TVFactory
{
public:
    HaireTVFactory();
    virtual ~HaireTVFactory();
public:
    virtual TV* createTV();
};

#endif // FACTORY_H
