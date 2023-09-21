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


void print_deck(deque<Card> deck) {

 std::string color, type;
 int number;
 for (int i = 0; i < deck.size(); ++i) {
 
     switch (deck.at(i).getColor()) {
     case Color::Blue:
         color="Blue";
       break;
     case Color::Red:
         color = "Red";
         break;
     case Color::Green:
         color = "Green";
         break;
     case Color::Yellow:
         color = "Yellow";
         break;
     case Color::Black:
         color = "Black";
         break;

     }
     switch (deck.at(i).getType()) {
     case Type::Wild:
         type = "Wild";
         break;
     case Type::WildDrawFour: 
         type = "Wild Draw Four";
         break;
     case Type::Reverse:
         type = "Reverse";
         break;
     case Type::Skip:
         type = "Skip";
         break;
     case Type::DrawTwo:
         type = "Draw Two";
         break;
     case Type::Number:
         type = "Number";
         break;

     }
     number = deck.at(i).getNumber();
     std::cout << color << "  " << number  <<"  " << type << " " << endl;

 }
 std::cout << "   " << endl; 

}

int main() {

    Card card(Color::Blue, 7, DrawTwo);
    card.setColor(Color::Blue);
    cout << "Color:   " << card.getColor() << endl;
    deque<Card> deck;
    int flag = 0;

    for (int i = 0; i < 4; i++) {
        Card card_wild(Color::Blue, 0, Type::Number);
        Card card_wild_four(Color::Blue, 0, Type::Number);

        card_wild.setType(Type::Wild);
        card_wild_four.setType(Type::WildDrawFour);
        // 13 = Wild, 14 = wild_four
        card_wild.setNumber(13);
        card_wild_four.setNumber(14);

        card_wild.setColor(Color::Black);
        card_wild_four.setColor(Color::Black);

        deck.push_back(card_wild);
        deck.push_back(card_wild_four);
    }
    for (int k = 0; k < 2; k++) {
        //iterate over the four colors
        for (int j = 0; j < 4; j++) {

            // 10 = reverse, 11 = DrawTwo, 12 = Skip 
            for (int i = 10; i < 13; i++) {
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
                Card type();
                switch (i) {
                case 10:
                    card.setType(Type::Reverse);
                    break;
                case 11:
                    card.setType(Type::DrawTwo);
                    break;
                case 12:
                    card.setType(Type::Skip);
                    break;

                }
                card.setNumber(i);
                deck.push_back(card);

            }

        }
    }
    //iterate to have 2 times the numbers and colors of cards 
    for (int k = 0; k < 2; k++) {

        //iterate over the four colors
        for (int j = 0; j < 4; j++) {
            //iterate over the ten numbers
            for (int i = 0; i < 10; i++) {

                //Second iteration and ignore the second 0
                if (!(flag == 1 && i == 0)) {
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

                    card.setType(Type::Number);
                    card.setNumber(i);
                    deck.push_back(card);
                    

                }

            }

        }
        flag = 1;
    }

    
    std::cout<<"size deck: " << deck.size() << endl;
     
   //test
    //random_shuffle(deck.begin(),deck.end());   

    /*for (int i = 0; i < deck.size(); ++i) {

        std::cout << deck.at(i).getColor() << "  "  << deck.at(i).getNumber() << endl;
    }*/

    deque<Card> hand1; 
    deque<Card> hand2;

    
    for (int i = 0; i < 8; i++) {
        hand1.push_back(deck.back());
        deck.pop_back(); 

        hand2.push_back(deck.back());
        deck.pop_back(); 
 
    }
   
    std::cout << "size deck:  " << deck.size() << endl;
    std::cout << "size hand1: " << hand1.size() << endl;
    for (int i = 0; i < hand1.size(); ++i) {

        std::cout << hand1.at(i).getColor() << "  " << hand1.at(i).getNumber() << endl;
    }

    std::cout << "size hand2: " << hand2.size() << endl; 
    for (int i = 0; i < hand2.size(); ++i) {

        std::cout << hand2.at(i).getColor() << "  " << hand2.at(i).getNumber() << endl; 
    }
   
    
    print_deck(hand1);
    print_deck(hand2);


    return 0;

}

    
    