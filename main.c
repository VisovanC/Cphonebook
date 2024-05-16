#include <stdio.h>
#include <string.h>

typedef struct contact{
    int number[50];
    char name[101];
    char email[101];
}contact[10000];

void addContact(){
    struct contact new_contact;
    printf("Enter name: ");
    scanf("%s", &new_contact.name);
    printf("Enter phone number: ");
    scanf("%d", &new_contact.number);
    printf("Enter email: ");
    scanf("%s", &new_contact.email);
}

void seeContact(){
    struct contact search_contact;

}
void searchContact(){
    printf("Choose your searching method: ");
     //aici inca un switch pt cautare dupa nr de tel sau dupa nume
}

void deleteContact(){
    struct contact del_contact;
    printf("Choose a contact to delete:");
    scanf("%s", del_contact.name);
}


int main()
{
    int option;
    printf("Welcome to the phonebook /n");
    printf("Choose your option: %d", option);
    switch(option)
    {
        case 1: addContact();
        break;

        case 2:seeContact();
        break;

        case 3:searchContact();
        break;

        case 4:deleteContact();
        break;
    }
    return 0;
}
