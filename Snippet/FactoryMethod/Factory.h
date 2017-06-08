#ifndef FACTORY_H
#define FACTORY_H

#include "TV.h"

//�����������������ӵķ�������
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
