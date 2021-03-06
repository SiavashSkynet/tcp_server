#include <iostream>
#include <stdio.h>
#include "server.h"
#include "read_config.h"
#include "db.h"
#include "time.h"


int main()
{
    int port ;
    if (!read_config::read_config_flag == 0)
    {   
      port = read_config::read_ini();
    }
   
    if (!db::db_connected == 0)
    {
       db::db_handler();
    }
    
    server::handle_server(port);
    
    
    /*
    after interval = 2mins sort db here
    */
}
