# include <iostream>
# include <ctime>
using namespace std;

int main(){
    string firstname;
    string lastname;
    
    cout << "\n========Generate Random Number=======\n\n";
    cout << "Enter firstname: " << endl;
    cin >> firstname;
    cout << "Enter lastname: " << endl;
    cin >> lastname;

    // generating id
    srand(time(NULL));
    long long random = (rand() * rand()) % 10000000;
    
    // making index 0 of first and last string capital
    firstname = toupper(firstname[0]);
    lastname = toupper(lastname[0]);
    
    // result
    cout << "\nYour ID:" << endl;
    cout << firstname[0] << lastname[0] << random << endl;

    // condition to run/end program
    string generate;
    cout << "\nWould you like to generate another id? [Y|N]" << endl;
    cin >> generate;
    if (generate == "Y" || generate == "y"){
        main();
    } else{
        cout << "Goodbye!" << endl;
    }
    return 0;
}
