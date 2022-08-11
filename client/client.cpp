#include <SFML/Network.hpp>
#include <iostream>

int main()
{
    sf::IpAddress ip = sf::IpAddress::resolve("https://theo-networking-test.herokuapp.com/");
    sf::UdpSocket socket;
    sf::Packet packet;

    // send
    unsigned short port = 53615;
    unsigned short respPort = 3001;
    packet << "HI from Client";
    socket.bind(respPort);
    if (socket.send(packet, ip, port) != sf::Socket::Done)
    {
        std::cout << "Error sending packet" << std::endl;
    };

    // receive
    char buffer[512];
    std::size_t received = 0;
    std::optional<sf::IpAddress> sender;
    if (socket.receive(buffer, sizeof(buffer), received, sender, respPort) == sf::Socket::Done)
    {
        std::cout << sender->toString() << " said: " << buffer << std::endl;
    }

    return 0;
}