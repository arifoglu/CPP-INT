#include "mydays.h"

const char* mydays(char firstletter){
    if(firstletter == 'l' || firstletter == 'L')
    {
        return "lundi";
    }
    else if(firstletter == 'j' || firstletter == 'J')
    {
        return "jeudi";
    }
    else 
    {
        return "autre";
    }

};
