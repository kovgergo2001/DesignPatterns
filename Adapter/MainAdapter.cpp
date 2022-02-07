#include<iostream>
#include<memory>
#include"EUSocket.h"
#include"USASocket.h"
#include"SocketAdapter.h"

void MainAdapterFunc() {
    EUSocket* socket = new SocketAdapter();
    socket->EUCharge();
}