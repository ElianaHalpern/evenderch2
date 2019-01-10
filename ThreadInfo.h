//
// Created by noa on 1/7/19.
//
#include <unistd.h>
#include "MySerialServer.h"
#ifndef EVENDERCH2_THREADINFO_H
#define EVENDERCH2_THREADINFO_H


class ThreadInfo {

    class my_thread_info {
    public:
        int serverSocket;
        int clientSocket;
        ClientHandler *clientHandler;
    };

    static void *connectionHandler(void *context) {
        my_thread_info info = *((my_thread_info *) context);

        //Accept and incoming connection
        puts("Waiting for incoming connections...");
        char buffer[4096] = {0};
        while (true) {
//        listen(info.serverSocket, 5);
            read(info.clientSocket, buffer, sizeof(buffer));

//        stringstream in;
//        ostringstream out;
//        in.read(buffer, sizeof(buffer));
//        TODO handle streams and client
            if (buffer[0] != '\0') {
                info.clientHandler->handleClient(buffer);
            }


        }
    }


    void MySerialServer::open(int port, ClientHandler *ch) {
        int opt = 1;
        struct sockaddr_in server, client;
        int serverDescriptor;
        pthread_t threadId;

        // Creating serverSocket file descriptor
        if ((serverDescriptor = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP)) == 0) {
            perror("serverSocket failed");
            exit(EXIT_FAILURE);
        }

        // Forcefully attaching serverSocket to the port 8080
        if (setsockopt(serverDescriptor, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt))) {
            perror("setsockopt");
            exit(EXIT_FAILURE);
        }
        server.sin_family = AF_INET;
        server.sin_addr.s_addr = INADDR_ANY;
        server.sin_port = htons(port);

        // Forcefully attaching serverSocket to the port 8080
        if (bind(serverDescriptor, (struct sockaddr *) &server, sizeof(server)) < 0) {
            perror("bind failed");
            exit(EXIT_FAILURE);
        }
        if (listen(serverDescriptor, 5) < 0) {
            perror("listen");
            exit(EXIT_FAILURE);
        }

        //Accept and incoming connection
        cout << ("Waiting for incoming connections...") << endl;
        socklen_t addrlen = sizeof(sockaddr_in);
        int acceptConnection;
        if (acceptConnection = accept(serverDescriptor, (struct sockaddr *) &client, &addrlen)) {
            cout << "Connection accepted, starting listener thread" << endl;
        }

        my_thread_info info;
        info.serverSocket = serverDescriptor;
        info.clientHandler = ch;
        info.clientSocket = acceptConnection;

        int index = pthread_create(&threadId, NULL, connectionHandler, (void *) &info);
        if (index < 0) {
            perror("could not create thread");
            exit(EXIT_FAILURE);
        }
        pthread_join(threadId, NULL);

    }


    void MySerialServer::stop() {
    }

    bool MySerialServer::isOpen() {
    }

};


#endif //EVENDERCH2_THREADINFO_H
