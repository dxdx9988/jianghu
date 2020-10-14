#include <iostream>

int i18n=0;

int main(int argc,const char** argv)
{

    const char* i18nFile="./i18n/en";
    switch(i18n)
    {
    case 1:
    case 2:
    default:
    break;    
    }

    FILE* f = fopen(i18nFile,"r");
    if(f){
        
        fclose(f);
    }

return 0;
}
