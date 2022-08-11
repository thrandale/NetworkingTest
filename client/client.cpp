#include <SFML/Network.hpp>
#include <iostream>

int main()
{
    sf::IpAddress ip = sf::IpAddress::resolve("localhost");
    sf::UdpSocket socket;
    sf::Packet packet;
    packet << "UDP Packet";
    if (socket.send(packet, ip, 3000) != sf::Socket::Done)
    {
        std::cout << "Error sending packet" << std::endl;
    };

    return 0;
}