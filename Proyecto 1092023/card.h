

#pragma once


// Definici�n de Color como typedef
typedef enum {
    Blue, Red, Green, Yellow
} Color;


typedef enum {

    Number, Skip, Reverse, DrawTwo, Wild, WildDrawFour, Special
} Type;


class Card {
public:

    Color color;
    Type type;
    int number;
    
    Card(Color color, int number, Type type);
    Color getColor(); // Agregado getColor()
    // Resto de la declaraci�n de la clase Card
    Type getType();

    int getNumber();

    void setColor(Color color);
    void setType(Type type);
    void setNumber(int number1);
    
};
