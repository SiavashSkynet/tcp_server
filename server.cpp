
#include "server.h"

namespace server
{
	bool handle_server(int port)
	{
            // Creating socket file descriptor 
	    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0) 
	    { 
		perror("socket failed"); 
		exit(EXIT_FAILURE); 
	    } 

	    // Forcefully attaching socket to the port 8080 
	    if (setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR | SO_REUSEPORT, 
							  &opt, sizeof(opt))) 
	    { 
		perror("setsockopt"); 
		exit(EXIT_FAILURE); 
	    } 
	    address.sin_family = AF_INET; 
	    address.sin_addr.s_addr = INADDR_ANY; 
	    address.sin_port = htons( port ); 

	    // Forcefully attaching socket to the port 9000 
	    if (bind(server_fd, (struct sockaddr *)&address,  
					 sizeof(address))<0) 
	    { 
		perror("bind failed"); 
		exit(EXIT_FAILURE); 
	    } 
		
	    if (listen(server_fd, 3) < 0) 
	    { 
		perror("listen"); 
		exit(EXIT_FAILURE); 
	    } 
		
	    if ((new_socket = accept(server_fd, (struct sockaddr *)&address,  
			       (socklen_t*)&addrlen))<0) 
	    { 
		perror("accept"); 
		exit(EXIT_FAILURE); 
	    }
	    int i=0;
	    while(i<10)
	    {
		valread = read( new_socket , buffer, 1024); 
		std::ifstream message_file("message.json", std::ifstream::binary); 
		message_file >> msg;
		int p1 = <msg["p1"];
		String p2 = <msg["p2"];
		string current_time = time::time_handler();
		db::insert_data_table_p1 (p1, p2 ,current_time );
		
		send(new_socket , msg , strlen(msg) , 0 ); 
		printf("Message sent\n");
		i++;
	    }

	    return 0; 

	}
}
