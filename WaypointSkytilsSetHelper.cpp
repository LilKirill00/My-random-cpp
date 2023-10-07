#include <iostream>
#include <string>
#include <cstring>
#include <fstream>

//для ускорения заполнения конфига Waypoint мода Skytils 

using namespace std;

int main()
{
    ifstream text("waypoint");
    while(!text.eof())
    {
    int name;
    int x = 0, y = 0, z = 0;
    text >> name;
    text >> x;
    text >> y;
    text >> z;
    //cout << "Вводи\n";
    
    //cin >> name;
    
    //cin >> x >> y >> z;
    //cin.ignore(10, '\n');
    //cout << "\n\n";
    
    cout << "  {" << endl;   
    cout << "    \"name\": \"" << name << "\"," << endl;
    cout << "    \"x\": " << x << "," << endl;
    cout << "    \"y\": " << y << "," << endl;
    cout << "    \"z\": " << z << "," << endl;
    cout << "    \"island\": \"combat_1\"," << endl;
    cout << "    \"enabled\": true," << endl;
    cout << "    \"color\": -65536," << endl;
    cout << "    \"addedAt\": 1659599125481" << endl;
    cout << "  }," << endl;
    }
    //cout << "\n\n";
    text.close();
}