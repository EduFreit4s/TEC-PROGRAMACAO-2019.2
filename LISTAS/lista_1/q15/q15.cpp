  
#include <iostream>

using namespace std;

int main (int argc, char *argv[]){

    int rev = argc - 1;

    while(rev > 0) cout << argv[rev--] << " ";

    cout << endl;

    return 0;
}