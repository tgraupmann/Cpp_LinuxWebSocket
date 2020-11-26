// lib.cpp : Send data to a WSS WebSocket.
//

#include "lib.h"

#include <iostream>

#include <cpprest/ws_client.h>
using namespace web;
using namespace web::websockets::client;


using namespace std;

// ref: https://github.com/microsoft/cpprestsdk/wiki/Web-Socket
// ref: https://github.com/microsoft/cpprestsdk/wiki/How-to-build-for-Linux
// ref: https://www.udemy.com/share/102zYkAEoacllQRnQ=/
void DoWSS()
{
    
    cout << "Testing C++ WebSocket Client..." << endl;

    websocket_client client;
    std::string body_str("{\"action\":\"sendmessage\", \"data\":\"hello Ubuntu C++\"}");

    try
    {
        client.connect(U("wss://WS_ENDPOINT")).wait();
        auto receive_task = client.receive().then([body_str](websocket_incoming_message ret_msg) {
            //VERIFY_ARE_EQUAL(ret_msg.length(), body_str.length());
            auto ret_str = ret_msg.extract_string().get();

            //VERIFY_ARE_EQUAL(body_str.compare(ret_str), 0);
            //VERIFY_ARE_EQUAL(ret_msg.message_type(), websocket_message_type::text_message);
            });

        websocket_outgoing_message msg;
        msg.set_utf8_message(body_str);
        client.send(msg).wait();

        receive_task.wait();
        client.close().wait();
    }
    catch (const websocket_exception& e)
    {
        /*
        if (is_timeout(e.what()))
        {
            // Since this test depends on an outside server sometimes it sporadically can fail due to timeouts
            // especially on our build machines.
            return;
        }
        */
        cerr << "Fix your WSS endpoint!" << endl;
    }
}
