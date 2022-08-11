const dgram = require('dgram');
const server = dgram.createSocket('udp4');
const PORT = process.env.PORT || 3000;

// receive
// server.on("message", (msg, rInfo) => messageHandler(msg, rInfo));
// server.bind(PORT);
// console.log(`Server running on port ${PORT}`)

// let messageHandler = function (msg, rInfo) {
//     console.log("Message Received: " + msg.toString());

//     var responseString = "message from server (HI)";

//     // send
//     server.send(responseString, 0, responseString.length, rInfo.port, rInfo.address,
//         function (err, sent) {
//             if (err)
//                 console.log("Error sending response");
//             else
//                 console.log("Responded to client at " + rInfo.address + ":" + rInfo.port);
//         });
// }