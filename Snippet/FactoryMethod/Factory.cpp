#include "Factory.h"

TVFactory::TVFactory()
{
    //ctor
}

TVFactory::~TVFactory()
{
    //dtor
}

HisenseTVFactory::HisenseTVFactory()
{

}

HisenseTVFactory::~HisenseTVFactory()
{

}

TV* HisenseTVFactory::createTV()
{
    return new HisenseTV;
}

HaireTVFactory::HaireTVFactory()
{

}

HaireTVFactory::~HaireTVFactory()
{

}

TV* HaireTVFactory::createTV()
{
    return new HaireTV;
}


