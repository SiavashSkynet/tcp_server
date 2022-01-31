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
    // read config
    port = read_config::read_ini();

    // add time interval
    // create a soccket
    db::db_handler();
    server::handle_server(port);
    
    
    // connect to db
    
    // decode the message from json to a string and int
    // create a stack of tcp_client t
}
