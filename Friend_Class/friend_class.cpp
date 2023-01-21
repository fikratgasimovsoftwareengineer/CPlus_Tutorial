#include <iostream>
#include <cstring>

using namespace std;

//Socket Client
class Socket_Base;


// My brother
class Socket_Base{

    friend class Socket_Client;

    private:
	    string address;
	    int port;

    public:
	    Socket_Base(string add_4, int port_3):address(add_4), port(port_3){};	   
            
};	

// Me
class Socket_Client{
    private:

       //friend class Socket_Base;
       int client_port;

       string add;

    public:
	//Socket_Client(int client, string adddd):client_port(client), add(adddd){};
	
        void getResults(Socket_Base b);

	string getAddress(){return add;}

        int getPort(){return client_port; }

};


void Socket_Client::getResults(Socket_Base b){

     client_port = b.port;
     add = b.address;

}

int main(){

    Socket_Client client;

    Socket_Base c ("Fikrat", 1234);

    client.getResults(c);

    cout << client.getAddress() << endl;

    cout << client.getPort() << endl;

    return 0;

}
