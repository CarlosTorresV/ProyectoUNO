
#include "Card.h"
#include <string>


Card::Card(Color color, int number, Type type) {
    color = color;
    number = number;
    type = type;
    // Implementaci�n del constructor
}

Color Card::getColor() {
    return color;
}

Type Card::getType() {
    return type;
}

int Card::getNumber() {
    return number;
}

void Card::setColor(Color color1) {
    color = color1;
}

void Card::setType(Type type1) {
    type = type1;
}

void Card::setNumber(int number1) {
    number = number1;


    bool isValidOn(const Card & otherCard) ;
    std::string getDescription() ;

}

/*
void Card::play() {
    // Implementaci�n de la l�gica de juego en Card.cpp
    switch (type) {
    case Type::Number:
        // Acci�n para una carta num�rica
        // Por ejemplo, puedes mostrar el n�mero o realizar alguna acci�n espec�fica.
        break;
    case Type::Skip:
        // Acci�n para una carta "Pierde Turno"
        // Por ejemplo, puedes omitir el turno del siguiente jugador.
        break;
    case Type::Reverse:
        // Acci�n para una carta "Cambio de Sentido"
        // Por ejemplo, puedes cambiar el sentido del juego.
        break;
    case Type::DrawTwo:
        // Acci�n para una carta "+2"
        // Por ejemplo, puedes hacer que el siguiente jugador robe dos cartas.
        break;
    case Type::Wild:
        // Acci�n para una carta "Cambio de Color"
        // Por ejemplo, puedes permitir al jugador elegir un nuevo color.
        break;
    case Type::WildDrawFour:
        // Acci�n para una carta "+4 Cambio de Color"
        // Por ejemplo, puedes permitir al jugador elegir un nuevo color y hacer que el siguiente jugador robe cuatro cartas.
        break;
    case Type::Special:
        // Acci�n para una carta especial (si es necesario)
        // Esto depender� de las reglas espec�ficas del juego Uno.
        break;
    }
    */


