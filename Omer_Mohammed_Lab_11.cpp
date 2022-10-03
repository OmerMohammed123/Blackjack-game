//==========================================================
// Title:      Black Jack game
// Author:     Omer Mohammed
// Date:       04/03/22
//==========================================================
#include <iostream>
#include <string>
#include <random>
#include <ctime>
#include <iomanip>

using namespace std;


int main()
{
    srand (time(NULL));
    cout<<"BlackJack card game"<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    
   
    string cards[13] = { "2", "3" , "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    string cardsD[13] = { "2", "3" , "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A" };
    int playerone;
    int playertwo;
    int dealerone;
    int dealertwo;
    int addtemp;
    
    string one;
    string two;
    int cardone = 0;
    int cardtwo = 0;
    
    string oneD;
    string twoD;
    int cardoneD = 0;
    int cardtwoD = 0;
    
    string temp;
    int tempone = 0;
    
    int total;
    double totaltwo;
    string input;
    string inputD;
    string inputC;
   
    
    playerone = (rand()%13)+1;
    playertwo = (rand()%13)+1;
    
    dealerone = (rand()%13)+1;
    dealertwo = (rand()%13)+1;
    
    addtemp = (rand()%13)+1;
    
    temp = cardsD[addtemp];
    
    oneD = cardsD[dealerone];
    twoD = cardsD[dealertwo];
    
    one = cards[playerone];
    two = cards[playertwo];
   
    cout<< "Player drew: "<<one<< " And "<< two<<endl;
    cout<< "Dealer drew: "<<oneD<< " And "<< twoD<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    
    
    if (one == "1" || one == "2" || one == "3" || one == "4" || one == "5" ||
            one == "6" || one == "7" || one== "8" || one == "9" || one == "10") {
            cardone = stoi(one);
        }

        if (two == "1" || two == "2" || two == "3" || two == "4" || two == "5" ||
            two== "6" || two == "7" || two == "8" || two == "9" || two == "10") {
            cardtwo = stoi(two);
        }

        if (one == "J" || one == "Q" || one == "K") {
            cardone = 10;
        }
        if (two == "J" || two == "Q" || two == "K") {
            cardtwo = 10;
        }

    if(one == "A"){
        cout<<"Ace value can be either one or 10 choose which one you would like: "<<endl;
        while (cardone != 1 && cardone != 11){
            getline (cin, input);
            if (input == "1"){
                cardone = 1;
            }
            else if(input == "11"){
                cardone = 11;
            }
            else{
                cout<<"Enter either 1 or 11"<<endl;
            }
        }
    }
    
    if(two == "A"){
        cout<<"Ace value can be either one or 11 choose which one you would like: "<<endl;
        while (cardtwo!= 1 && cardtwo!= 11){
            getline (cin, input);
            if (input == "1"){
                cardtwo = 1;
            }
            else if(input == "11"){
                cardtwo = 11;
            }
            else{
                cout<<"Enter either 1 or 11"<<endl;
            }
        }
    }
    
    if (oneD == "1" || oneD == "2" || oneD == "3" || oneD == "4" || oneD== "5" ||
            oneD == "6" || oneD == "7" || oneD== "8" || oneD == "9" || oneD == "10") {
            cardoneD = stoi(oneD);
        }

        if (twoD == "1" || twoD == "2" || twoD == "3" || twoD == "4" || twoD == "5" ||
            twoD == "6" || twoD == "7" || twoD == "8" || twoD == "9" || twoD == "10") {
            cardtwoD = stoi(twoD);
        }

        if (oneD == "J" || oneD == "Q" || oneD == "K") {
            cardoneD = 10;
        }
        if (twoD == "J" || twoD == "Q" || twoD == "K") {
            cardtwoD = 10;
        }
    
    if(oneD == "A"){
        cout<<"Ace value can be either one or 10 choose which one you would like: "<<endl;
        while (cardoneD != 1 && cardoneD != 11){
            getline (cin, inputD);
            if (inputD == "1"){
                cardoneD = 1;
            }
            else if(input == "11"){
                cardoneD = 11;
            }
            else{
                cout<<"Enter either 1 or 11"<<endl;
            }
        }
    }
    
    if(twoD == "A"){
        cout<<"Ace value can be either 1 or 11 choose which one you would like: "<<endl;
        while (cardtwoD!= 1 && cardtwoD!= 11){
            getline (cin, inputD);
            if (inputD == "1"){
                cardtwoD = 1;
            }
            else if(inputD == "11"){
                cardtwoD = 11;
            }
            else{
                cout<<"Enter either 1 or 11"<<endl;
            }
        }
    }
    
    
    
    totaltwo = cardoneD + cardtwoD;
    total = cardone + cardtwo;
    
    
   
    cout << "The Total Value of your cards is: " << total << endl;
    cout<<"The Total Value of the Dealer Cards is: "<<totaltwo<<endl;
    cout<<endl;
    cout<<"-----------------------------------------"<<endl;
    
    cout<<"Would you like too add one more card to beat the dealer (y/n)?"<<endl;
    
    
    if (total > 17 && total <21 ){
        cout<<"It is not recommeded too continue would you want too add more (y/n)? "<<endl;
        getline (cin, inputC);
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
        
    }
    if(total >= 15 && total <= 17){
        cout<<"Choosing too hit still somewhat risky, still want to continue (y/n)?"<<endl;
        getline (cin, inputC);
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
        
    }
    if(total< 15){
        cout<<"You are safe too add more (y/n) "<<endl;
        getline (cin, inputC);
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
        
    }
    if(total > 21){
        cout<<"You done goofed up "<<endl;
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
        
    }
    if (inputC == "y"){
        cout<< "Player drew: "<<temp<<endl;
        cout<<endl;
        cout<<"-----------------------------------------"<<endl;
        
        
        if (temp == "1" || temp == "2" || temp == "3" || temp== "4" || temp== "5" ||
                temp == "6" || temp == "7" || temp== "8" || temp == "9" || temp == "10") {
                tempone = stoi(temp);
            }
        
        if (temp == "J" || temp == "Q" || temp == "K") {
            tempone = 10;
        }
        total = cardone + cardtwo+ tempone;
        cout << "The New Total Value of your cards is: " << total << endl;
        if(total > 21){
            cout<< "Dealer wins"<<endl;
        }
        if (totaltwo > total){
            cout<<"Dealer wins"<<endl;
        }
        if (total == 21 ){
            cout<<"Player wins"<<endl;
        }
        
    }
    
    
     if (total > totaltwo){
        cout<<"Player wins"<<endl;
    }
    
   
    
     if(total == totaltwo){
        cout<<"Draw game"<<endl;
    }
}
