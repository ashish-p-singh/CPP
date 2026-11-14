#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream file("data.txt");
    file<<"hello dear\n";
    file<<"how are you\n";
    file<<"I am studying file handling in cpp \n";
    file.close();
    return 0;

    ofstream file("data.txt",ios::app);

}
