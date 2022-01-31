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
    server::handle_server(port);
    db::db_handler();
    
    /*
    after interval = 2mins sort db here
    */
}
