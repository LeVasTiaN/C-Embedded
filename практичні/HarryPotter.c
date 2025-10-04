#include <stdio.h>

struct Book {
    char    title[100];
    double  price;
    int     pages;
    char    language[30];
    double  weight;
    int     year;
    struct  Book* next;
};

int main() {
    struct Book b1 = {"Philosopher's Stone", 350.0, 223, "English", 0.45, 1997, NULL};
    struct Book b2 = {"Chamber of Secrets", 370.0, 251, "English", 0.48, 1998, NULL};
    struct Book b3 = {"Prisoner of Azkaban", 400.0, 317, "English", 0.52, 1999, NULL};
    struct Book b4 = {"Goblet of Fire", 420.0, 636, "English", 0.70, 2000, NULL};
    struct Book b5 = {"Order of the Phoenix", 450.0, 766, "English", 0.80, 2003, NULL};
    struct Book b6 = {"Half-Blood Prince", 430.0, 607, "English", 0.65, 2005, NULL};
    struct Book b7 = {"Deathly Hallows", 460.0, 607, "English", 0.68, 2007, NULL};

    b1.next = &b2;
    b2.next = &b3;
    b3.next = &b4;
    b4.next = &b5;
    b5.next = &b6;
    b6.next = &b7;
    b7.next = NULL;

    struct Book* current = &b1;

    printf("Harry Potter Book Series:\n");
    printf("==========================\n");

    while (current != NULL) {
        printf("Title: %s\n",       current->title);
        printf("Price: %.2f UAH\n", current->price);
        printf("Pages: %d\n",       current->pages);
        printf("Language: %s\n",    current->language);
        printf("Weight: %.2f kg\n", current->weight);
        printf("Year: %d\n",        current->year);
        printf("---------------------------\n");

        current = current->next;
    }

    return 0;
}