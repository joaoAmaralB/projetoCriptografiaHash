#ifndef DEF_H
#define DEF_H

typedef struct { //Registro para o primeiro arquivo contendo o nome e a senha criptografada.
    char name[33];
    char encrypted_password[65];
} user;

typedef struct { //Registro para o segundo arquivo contendo a senha e o hash.
    char password[33];
    char hash[65];
} password;

#endif