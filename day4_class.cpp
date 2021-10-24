#include <iostream>
using namespace std;
#include <string>

class Phone{
public:
    void makecall(string number){
        cout << "Calling " << " " << number << "\n" << endl;
    }
    void restart(){
        cout << "Restarting...\n "<< endl;
    }
    void poweroff(){
        cout << "SwitchedOff...\n"<< endl;
    }
    void reboot(){
        cout << "Rebooting...\n"<< endl;
    }
};

class Smartphone: public Phone{
private:
    int size, price, battery_storage, storage_size;
    string phone_name, processor_name;
public:
    void setter(int d1=0, int d2=0, int d3=0, string d4=" ", int d5=0, string d6=" "){
    phone_name = d6;
    size=d1;
    price=d2;
    battery_storage=d3;
    processor_name = d4;
    storage_size = d5;
    }
    string get_phone_name(){
        return phone_name;
    }
    int get_size(){
        return size;
    }
    int get_price(){
        return price;
    }
    int get_battery_storage(){
        return battery_storage;
    }
    string get_processor_name(){
        return processor_name;
    }
    int get_storage_size(){
        return storage_size;
    }
};


int main(){
    Phone p1;
    p1.makecall("9940817690");
    p1.poweroff();
    p1.reboot();
    p1.restart();
    Smartphone sp1;
    sp1.setter(45,25000,4500,"Snapdragon888", 256, "OnePlus 9 Pro");
    cout << "Here you can see the details of your phone" << endl;
    cout << "The Phone's name is " << sp1.get_phone_name() << endl;
    cout << "The Phone's Size is " << sp1.get_size() << endl;
    cout << "The Phone's price is " << sp1.get_price() << endl;
    cout << "The Phone's Processor is " << sp1.get_processor_name() << endl;
    cout << "The Phone's Storage size is " << sp1.get_storage_size() << endl;
    cout << "The Phone's battery storage size is " << sp1.get_battery_storage() << endl;
    return 0;
}