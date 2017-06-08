#ifndef TV_H
#define TV_H


class TV
{
public:
    TV();
    virtual ~TV();
public:
    virtual void show() = 0;

};

class HisenseTV : public TV
{
public:
    HisenseTV();
    virtual ~HisenseTV();
public:
    virtual void show();
};


class HaireTV : public TV
{
public:
    HaireTV();
    virtual ~HaireTV();
public:
    virtual void show();
};

#endif // TV_H
