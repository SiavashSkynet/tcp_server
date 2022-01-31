#include "db.h"

namespace db
{
	int db_handler()
	{
		sqlite3* DB;
		int exit = 0;
		exit = sqlite3_open("pos.db", &DB);

		if (exit)
		{
			std::cerr << "Error open DB " << sqlite3_errmsg(DB) << std::endl;
			return (-1);
		}

		else
			std::cout << "Opened Database Successfully!" << std::endl;
			sqlite3_close(DB);
			return (0);
		
	void insert_data_table_p1(int p1 , Strig p2, String current_time)
	{
		sqlite3 *db;
		sqlite3_stmt * st;

		string sql = "INSERT INTO POS_MESSAGE (p1,p2,time) VALUES (" + p1 + ',' + p2 + ',' + current_time + ");";

		if(sqlite3_open("pw.db", &db) == SQLITE_OK)
		{
			sqlite3_prepare( db, sql.c_str(), -1, &st, NULL);
			sqlite3_bind_text(st, 1, p1.c_str(), p1.length(), SQLITE_TRANSIENT);
			sqlite3_bind_text(st, 2, p2.c_str(), p2.length(), SQLITE_TRANSIENT);
			sqlite3_bind_text(st, 3, current_time.c_str(), current_time.length(), SQLITE_TRANSIENT);
			sqlite3_step( st );
	       }
	}
		
  	string sort_data()
	{
	 // implement sorting by time	
	}
	
		
} // end of name space db
