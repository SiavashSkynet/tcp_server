#include <iostream>
#include <sqlite3.h>

namespace db
{
  bool db_connected = false;
  bool db_connected_ptr = &db_connected;
  int db_handler();
  void insert_data_table_POS_MESSAGE(int p1 , String p2, String current_time);
  string sort_data();
}
