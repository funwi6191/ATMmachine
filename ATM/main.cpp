#include <iostream>

using namespace std;

int PIN = 1234;
int pin1;
int Attempt = 3;
int option;
double Balance = 500.00;
string name = "John Mark";
double withdrawal;
int checking = 1;
double deposits;





void check(){
    cout << "---- Check Balance ----"<<endl;
    cout << "Name: "<<name<<endl;
    cout << "Available Balance: R"<<Balance<<endl;
}
void withdraw(){
    cout << "---- Withdraw Cash ----"<<endl;
    cout << "Enter Withdrawal Amount: R";
    cin>>withdrawal;
        cout << ""<<endl;
        cout << "Checking availability..."<<endl;
        cout << ""<<endl;
        cout << "Hold on..."<<endl;
        cout << ""<<endl;
        cout << "Almost There..."<<endl;
        cout << ""<<endl;
        if (withdrawal > 0 && withdrawal < Balance){
        cout <<"---- Dispensing Cash ----"<<endl;
        cout << " R200 cash notes \n R100 cash notes \n R50 cash notes"<<endl;
        cout << ""<<endl;
        cout << "Transaction Successful!"<<endl;
        cout << "Amount: R"<<withdrawal<<endl;
        cout << "New Balance: R"<<Balance - withdrawal<<endl;
    }else{
        cout << "INVALID AMOUNT, KINDLY RECHARGE YOUR ACCOUNT AND TRY AGAIN"<<endl;
    }
}
void deposit(){
    cout << "----- Deposit Cash -----"<<endl;
    cout << "Enter Amount: R";
    cin >> deposits;
    if(deposits > 0){
        cout << ""<<endl;
        cout << "Processing ..."<<endl;
        cout << ""<<endl;
        cout << "Hold on..."<<endl;
        cout << ""<<endl;
        cout << "Almost There..."<<endl;
        cout << ""<<endl;
        cout << "Transaction Successful!"<<endl;
        cout << "Amount: R"<<deposits<<endl;
        cout << "New Balance: R"<<Balance + deposits<<endl;
    }else{
        cout << "INVALID AMOUNT"<<endl;
    }
}
void menu(){
    cout << ""<<endl;
    cout << "===== ATM MENU ====="<<endl;
    cout << "1. Check Balance"<<endl;
    cout << "2. Withdraw Cash"<<endl;
    cout << "3. Deposit Cash"<<endl;
    cout << "4. Exit Program"<<endl;
    cout << "Choose Option: ";
    cin >> option;
    switch(option){
    case 1:
        check();
         menu();
        break;
    case 2:
        withdraw();
         menu();
        break;
    case 3:
        deposit();
        menu();
        break;
    case 4:
        cout << "Thanks For Using ABC BANK"<<endl;
        exit(1);
    default:
        cout << "INVALID INPUT"<<endl;
        break;
}
}
void login(){
    cout << "===== Welcome To ABC BANK ====="<<endl;
    while(Attempt > 0){
        cout << "Enter PIN: ";
        cin>>pin1;
        if(pin1 == PIN){
            cout << "Access Granted"<<endl;
            menu();
        }else{
            Attempt --;
            cout << "Access Denied"<<endl;
        }
        if(Attempt > 0){
            cout << "You Have "<< Attempt<< " Attempt Remaining"<<endl;
        }else if(Attempt = 3){
            cout << "Card Blocked"<<endl;
            exit(1);
        }
    }

}
int main()
{
    login();
    return 0;
}
