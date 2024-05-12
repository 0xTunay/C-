#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


int * runneble_pids;
int coro_max;

struct channel {
    int val;
    int sender;
    int receiver;
};

void channels_scheduler(void){
    while(1){
    int p;
    int count = 0;
    for(p=0;p<coro_max;p++){

    }
    }
    {

