#include <iostream>
#include <sqlite3.h>

namespace db
{
  int db_handler();
  void insert_data_table_p1(int p1 , String time);
  void insert_data_table_p2(String p2 , String time);
  string sort_data();
  void create_table_p1();
  void create_table_p2();
}
