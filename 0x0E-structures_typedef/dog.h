#ifndef DOG_H
#define DOG_H


typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
int _putchar(char c);
dog_t *new_dog(char *name, float age, char *owner);

#endif
