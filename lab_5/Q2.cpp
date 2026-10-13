#include <iostream>
using namespace std;

class WiFiModule {
public:
    void connect() {
        cout << "Connected through WiFi" << endl;
    }
};

class BluetoothModule {
public:
    void connect() {
        cout << "Connected through Bluetooth" << endl;
    }
};

class SmartHomeHub : public WiFiModule, public BluetoothModule {
public:
    void controlDevice() {
        WiFiModule::connect();       // Explicitly choose the WiFi version
        BluetoothModule::connect();  // Explicitly choose the Bluetooth version
        cout << "Smart home device controlled" << endl;
    }
};

int main() {
    SmartHomeHub hub;
    hub.controlDevice();

    return 0;
}