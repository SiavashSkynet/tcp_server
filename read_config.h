#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ini.h"
#include <iostream>


typedef struct
{
    int port;
    int p1;
    const char* p2;
} configuration;

//functio|n goes here
static int handler(void* user, const char* section, const char* name,const char* value);
