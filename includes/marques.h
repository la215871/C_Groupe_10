#ifndef MARQUES_H
#define MARQUES_H

#define     QUERY_LENGTH    255

/**
 * Represente une marque avec <char *id>, <char *name>, <char* niceName>
 * \struct Marque
 * 
 */
typedef struct marque {
    char *id;
    char *name;
    char *niceName;
} Marque;

unsigned createTableMarque(MYSQL *connexion, char *erreur);
unsigned insertMarque(MYSQL *connexion, Marque *marque, char *erreur);
unsigned addMarques(MYSQL* connexion, char *path, char *erreur);

#endif