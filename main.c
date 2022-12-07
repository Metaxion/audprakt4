#include <stdio.h>
#include "stdlib.h"

typedef struct baumknoten {
    int ele1;
    int ele2;
    int ele3;
    struct baumknoten *links;
    struct baumknoten *mitte_links;
    struct baumknoten *mitte_rechts;
    struct baumknoten *rechts;
} Knoten;

int main() {
    printf("Hello, World!\n");

    //init Baum mit 500 zufaelligen Elementen (jedes mal anderer Seed)

    //Ausgeben in sortierter Reihenfolge (rekursive Traversierung)

    //Ausgabe:
    //Hoehe des entstandenen Baums
    //Aus wie vielen Knoten besteht der Baum

    //Loop
    //Nutzer kann menugesteuert nach Elementen suchen
    //Anzahl der dafuer notwendigen Vergleiche ausgeben

    return 0;
}

Knoten *initKnoten() {
    Knoten *knot = calloc(sizeof(Knoten), 1);
    knot->ele1 = -1;
    knot->ele1 = -1;
    knot->ele1 = -1;
    knot->links = NULL;
    knot->mitte_links = NULL;
    knot->rechts = NULL;
    knot->mitte_rechts = NULL;
    return knot;
}

/**
 * Init mit 500 Elementen
 */
void initBaum() {

}

void sortedInsert(int zahl) {

}

void ausgabe() {

}

void search() {

}
