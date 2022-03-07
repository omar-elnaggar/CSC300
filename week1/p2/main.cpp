#include ".\modules\Author\Author.hpp"
#include ".\modules\Book\Book.hpp"
#include <iostream>

using namespace std;

int main(){

    Author card("Orson Scott Card", "osc@space.org", 'm');
    Book endersGame("Ender's Game", card, 29.99);

    cout << card.print() << endl;
    cout << endersGame.print() << endl;


    return 0;
}