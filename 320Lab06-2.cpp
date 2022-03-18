#include<iostream>
#include<map>

using namespace std;

int main(){
map<string, string> m;
string str;
cout << "Input a state: " << endl;
cin >> str;
m["Maryland"] = "Salisbury";
m["New York"] = "New York";
m["Ohio"] = "Columbus";
m["Texas"] = "Dallas";
m["Arizona"] = "Pheonix";
if(m.find(str) != m.end()){
cout << m[str] << ", " << str << endl;
} else {
    cout << str << " is not in the map" << endl;
}
}
