#include <stdio.h>
#include <ScorpioAPIDll.h>

int main(int, char**){

    printf("Starting!\n");
    ERetCode ScorpioAPICreate (
        unsigned long & serverId,
        const SScorpioAPIClient& params,
        ErrorCB OnErrFunc, 
        DataCB OnDataFunc, 
        RealTimeDataCB OnRealtimeDataFunc
        );
}





