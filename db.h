#include <iostream>
#include <sqlite3.h>

namespace db
{
  int db_handler();
  void insert_data_table_POS_MESSAGE(int p1 , String p2, String current_time);
  string sort_data();
}
