#include <iostream>
//#include "Deck.h"
#include "Card.h"
#include <vector>
#include <string>
#include <deque>
#include <algorithm>
#include <vector>
#include <random>
using namespace std;



int main() {
   
    Card card(Color::Blue,7, DrawTwo);
    card.setColor(Color::Blue);
    cout << "Color:   " << card.getColor() << endl;
    deque<Card> deck;
    int flag = 0;
    for (int k=0;k<2;k++) {

        //iterate over the four colors
        for (int j = 0; j < 4; j++) {
            //iterate over the ten numbers
            for (int i = 0; i < 10; i++) {

                //Second iteration and ignore the second 0
                if(!(flag==1 && i==0)) { 
                    Card card(Color::Blue, 7, DrawTwo);
                    switch (j) {
                    case 0:
                        card.setColor(Color::Blue);
                        break;
                    case 1:
                        card.setColor(Color::Red);
                        break;
                    case 2:
                        card.setColor(Color::Green);
                        break;
                    case 3:
                        card.setColor(Color::Yellow);
                        break;

                    }

                    card.setNumber(i);
                    deck.push_back(card);

                }
                
                }
              
        }
        flag = 1;
    }
    cout << "Numeros del 1 al 50: ";

   
    random_shuffle(deck.begin(),deck.end());
    for (int i = 0; i < deck.size(); ++i) {

        std::cout << deck.at(i).getColor() << "  "  << deck.at(i).getNumber() << endl;
    }

    return 0;

}

    
    