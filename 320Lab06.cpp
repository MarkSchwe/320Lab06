#include <set>
#include <map>
#include "d_state.h"
#include <iostream>

using namespace std;


int main(){
    string str1,str2,str3;
    stateCity arr[5];
    set<stateCity> s;
    arr[0] = stateCity("Maryland", "Salisbury");
    arr[1] = stateCity("Arizona","Pheonix");
    arr[2] = stateCity("Pennsylvania","Philladelphia");
    arr[3] = stateCity("Ohio","Columbus");
    arr[4] = stateCity("Texas","Dallas");
    for(int i = 0; i < 5; i++){
        s.insert(arr[i]);
    }
    cout << "Input state to look for: (IS CASE SENSITIVE)" <<endl;
    cin >> str3;
    stateCity ex(str3, "");
    if(s.find(ex) != s.end()){
        cout << *s.find(ex) << endl;
    } else {
        cout << "This state is not in the set." << endl;
    }

    return 0;
}
