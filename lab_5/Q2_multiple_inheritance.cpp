#include <iostream>
using namespace std;

class WiFi {
public:
    void connect() {
        cout << "Connecting through WiFi..." << endl;
    }
};

class Bluetooth {
public:
    void connect() {
        cout << "Connecting through Bluetooth..." << endl;
    }
};

class SmartHub : public WiFi, public Bluetooth {
public:
    void controlDevice() {
        cout << "Controlling smart home device..." << endl;
    }
};

int main() {
    SmartHub hub;

    hub.WiFi::connect();
    hub.Bluetooth::connect();
    hub.controlDevice();

    return 0;
}