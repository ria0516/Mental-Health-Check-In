#include <iostream>
#include <string>
#include "prompts.cpp"

using namespace std;

int main(){
    string feeling;
    cout << "How are you feeling?" << endl;
    cout << "Do you feel happy, sad, mad, scared, stressed or grateful?" << endl;

    cin >> feeling;
    if(feeling == "happy"){
        cout << "great!";
    }
    return 0;
}