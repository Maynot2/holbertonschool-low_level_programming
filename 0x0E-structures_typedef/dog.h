#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Represents a dog with a name, age and owner.
  * @name: The name of the dog as a string.
  * @age: The age of the dog as a float.
  * @owner: The owner of the dog as a string.
  *
  * Description: Modeling of a real world object dog as a struct.
  *
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* function prototypes */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
