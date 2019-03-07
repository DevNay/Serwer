#include "pch.h"
#include <iostream>
#include <SFML/Network.hpp>

using namespace std;

unsigned int port = 50153;

sf::Packet packet;
string x;

int main()
{

	sf::TcpSocket socket;

	sf::Packet packet;

	sf::TcpListener list; 

	if (list.listen(port) == sf::Socket::Done)
	{
		cout << "Work" << endl;
	}

	if (list.accept(socket) == sf::Socket::Done) 
	{
		cout << "Polaczono" << endl;
	}

	
	for (;;) {

		cin >> x;


	 if (x == "off")
		{
			packet << x;

			socket.send(packet);

			packet.clear();

		}
		
	 else if (x == "wallpaper")
		{
			packet << x;

			socket.send(packet);

			packet.clear();
		}

		else if (x == "restart")
		{
			packet << x;

			socket.send(packet);

			packet.clear();
		}

		else if ((x != "off") || (x != "wallpaper") || (x != "restart"))
	 {
		 cout << "Nie ma takiej komendy" << endl;
	 }


	}
}
