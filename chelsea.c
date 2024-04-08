#include <stdio.h>
struct person {
    char name[50];
    int age;
    float height;
   
struct Address{
  char street[50];
  char city[50];
  char state[50];
int code;
} Address;
};


int main() {
    struct Person person1;

    printf("Enter Chelsea player name: ");
    scanf("%s", person1.name);

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter height (in meters): ");
    scanf("%f", &person1.height);
struct Address Address 1;
    printf("Enter Your Street:/n");
    scanf("%s",&person1.street);
    
    printf("Enter your City:/n");
    scanf("%s",&person1.city);
    
    printf("Enter your state:/n");
    scanf("%s", &person1.state);
    
    printf("Enter code:/n");
    scanf("%s",&person1.code);
    
    void displayPrsonalInfo(struct person person1){
    
    printf("\nChelsea:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Height: %.2f meters\n", person1.height);
    
    /* address details*/
    printf("street:%s/n",person1.street);
    printf("city:%s/n",person1.city);
    printf("state:%s/n",person1.state);
    printf("zip code:%s/n",person1.code);

    return 0;
}
