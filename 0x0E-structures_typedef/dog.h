#ifndef dog_h
#define dog_h
/**
 * struct dog - is a tructure that contanes all the elements
 *
 * @name: the name of the dog .
 *
 * @age: the age that the dog have .
 *
 * @owner: the owner of the dog .
 */
struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
