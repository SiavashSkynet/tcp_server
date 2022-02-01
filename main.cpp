#include <iostream>
#include <stdio.h>

#include "server.h"
#include "read_config.h"
#include "db.h"
#include "time.h"

using namespace std;

int port ;

int main()
{
   
    port = read_config::read_ini();
   
    if (!db::db_connected == 0)
    {
       db::db_handler();
    }
    
    server::handle_server(port);
    
    
    /*
    after interval = 2mins sort db here
    */
}
