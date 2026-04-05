#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing basic information about a dog
 * @name: Pointer to a char representing the dog's name
 * @age: Float representing the dog's age
 * @owner: Pointer to a char representing the owner's name
 *
 * Description: This struct is used to store the name, age, and owner
 * of a dog for the low-level programming structures project.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */