class ServerFront {
private:
    int client_sock;
    const int data_len = 4096;
    char buffer[4096];
    int sock;

    void StartServer();

public:
    ServerFront(){
        StartServer();
    }
    ~ServerFront();
    void sendMessege(char (&message)[4096]);
    char* reciveMessege();
};