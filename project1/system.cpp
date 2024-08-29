#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    int a,i = 0;
    string text,old,password1,password2,pass,name,password0,age,user,word,word1;
    string creds[2],cp[2];

    cout <<"    Security System    " <<endl;

    cout <<"___________________________"<<endl<<endl;
    cout <<"|        1.Register         |"<<endl;
    cout <<"|        2.Login            |"<<endl;
    cout <<"|        3.Change password  |"<<endl;
    cout <<"|        4.End Program      |"<<endl<<endl;
    
    do{
        cout<<endl<<endl;
        cout<<"Enter your choice:- ";
        cin>> a;
        switch(a)
        {
            case 1:
                {
                    cout<<"|_______________________|"<<endl<<endl;
                    cout<<"|--------Register-------|"<<endl;
                    cout<<"|_______________________|"<<endl;
                    cout<<"Please enter username:- ";
                    cin>>name;
                    cout<<"Please enter password:- ";
                    cin>>password0;
                    cout<<"Please enter your age:- ";
                    cin>>age;

                    ofstream of1;
                    of1.open("file.txt");
                    if(of1.is_open()){
                        of1<<name<<"\n";
                        of1<<password0;
                        cout<<"Registration succesfull"<<endl;
                    }      
                break;
                }
            case 2:
                {
                    i = 0;

                    cout<<"|___________________________|"<<endl<<endl;
                    cout<<"|-----------Login-----------|"<<endl;
                    cout<<"|___________________________|"<<endl;
                    ifstream of2;
                    of2.open("file.txt");
                    cout<<"Please enter the username:- ";
                    cin>>user;
                    cout<<"Please enter the password:- ";
                    cin>>pass;

                    if(of2.is_open())
                    {
                        while(!of2.eof())
                        {
                            while(getline(of2,text))
                            {
                                istringstream iss(text);
                                iss>>word;
                                creds[i] = word;
                                i++;
                            }
                            if(user==creds[0] && pass==creds[1])
                            {
                                cout << "----- Log in succesfull----- ";
                                cout<<endl<<endl;

                                cout << " Details: " <<endl;

                                cout << "Username: " + name <<endl;
                                cout << "Password: " + pass <<endl;
                                cout << "Age: " + age <<endl;
                            }
                            else
                            {
                                cout << endl<<endl;
                                cout << "Incorrect credentials "<<endl;
                                cout <<"|    1.Press 2 to Login                |"<<endl;
                                cout <<"|    2.Press 3 to change password      |"<<endl;
                                break;
                            }
                        }
                    }
                 break;
                }                       
            case 3:
            {
                i = 0;

                cout << "-------------------Change password---------------" << endl;

                ifstream of0;
                of0.open("file.txt");
                if (!of0.is_open()) {
                    cout << "Error opening file!" << endl;
                    break;
                }

                cout << "Enter the old password:- ";
                cin >> old;
                bool found = false;

                while (getline(of0, text)) {
                    istringstream iss(text);
                    iss >> word1;
                    cp[i] = word1;
                    i++;
                }

                if (old == cp[1]) {
                    found = true;
                }

                of0.close();

                if (found) {
                    ofstream of1("file.txt"); // Open file for writing (overwriting the file)
                    if (of1.is_open()) {
                        cout << "Enter your new password:- ";
                        cin >> password1;
                        cout << "Enter your password again:- ";
                        cin >> password2;

                        if (password1 == password2) {
                            of1 << cp[0] << "\n" << password1;
                            cout << "Password changed successfully" << endl;
                        } else {
                            cout << "Passwords do not match" << endl;
                            of1 << cp[0] << "\n" << old; // Write the old password back
                        }
                    } else {
                        cout << "Error opening file for writing!" << endl;
                    }
                    of1.close();
                } else {
                    cout << "Incorrect old password" << endl;
                }
                break;
            }
            case 4:
        {
            cout<<"_________________Thank you!____________";
            break;
        }  
        default:
        cout<<"Enter a valid choice ";  
        }
 }while(a!=4);
 
return 0;
}
