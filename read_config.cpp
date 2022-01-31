#include "read_config.h"

namespace Read_config
{    
    static int handler(void* user, const char* section, const char* name,
        const char* value)
    {
        configuration* pconfig = (configuration*)user;

    #define MATCH(s, n) strcmp(section, s) == 0 && strcmp(name, n) == 0
        if (MATCH("address", "port"))
        {
            pconfig->port = atoi(value);
        }
        else if (MATCH("prefix", "p1"))
        {
            pconfig->p1 = atoi(value);
        }
        else if (MATCH("prefix", "p2"))
        {
            pconfig->p2 = _strdup(value);
        }
        else
        {
            return 0;
        }
        return 1;
    }
     int read_ini()
     {
       configuration config;

          if (ini_parse("fconfig.ini", handler, &config) < 0)
          {
              printf("Can't load 'fconfig.ini'\n");
              return 1;
          }

          printf("Config loaded from 'fconfig.ini': port=%d, name=%d, email=%s\n", config.port, config.p1, config.p2);
          int ret = pconfig->port;
          return ret ;
     }   
}
