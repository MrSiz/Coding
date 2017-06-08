#include "TV.h"
#include "Factory.h"


//¿Í»§¶Ë´úÂë
int main(int argc, char* argv[])
{
    HaireTVFactory* haireFactory = new HaireTVFactory;
    HisenseTVFactory* hisenseFactory = new HisenseTVFactory;

    TV* haireTV = haireFactory->createTV();
    TV* hisenseTV = hisenseFactory->createTV();

    haireTV->show();
    hisenseTV->show();

    return 0;
}
