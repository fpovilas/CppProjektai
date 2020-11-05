#include <iostream>
#include <string>

using namespace std;

int main(){

    string vardas{"Vardas"};
    string temp{};

    cout << "Iveskite savo vardas: ";
    cin >> vardas;

    for(unsigned int i = 0; i < vardas.size(); i++){
        if(static_cast<int>(vardas.at(i)) == 115){
            temp += "i";
        } else {
            temp.push_back(vardas.at(i));
        }
    }
    vardas = temp;

    cout << "Sveikas, " << vardas << "!" << endl;


    return 0;
}