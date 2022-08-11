const dgram = require('dgram');
const server = dgram.createSocket('udp4');

console.log("Server listening on Port 3000");
server.on("message", (msg) => messageHandler(msg.toString()));
server.bind(3000);

let messageHandler = function (msg) {
    console.log(msg);
}