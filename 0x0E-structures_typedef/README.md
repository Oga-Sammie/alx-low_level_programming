Project 0x0D. -Structures, typedef
Each file in this repository holds code that illustrates an essential concept of programming, specific to the C programming language: what structures and typedef are, and when, why, and how to use them
This programme consists of six mandatory Tasks only

Tasks
Poppy
0. Define a new type struct dog with the following elements.
   name, type = char*
   age, type = float
   owner,type = char*
1. A dog is the only thing on earth that loves you more than you love yourself
   Write a function that initialise a variable of type struct dog.
   Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);
2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad
   Write a function that prints a struct dog.
   Prototype: *void print_dog(struct dog d);
3. Outside of a dog, a book is a man's bet friend. inside of a dog it's too dark to read
   Define a new type dog_t as a new name for the type struct dog.
4. A door is what a dog is perpetually on the wrong side of
   Write a function that creates a new dog.
   Prototype: *dog_t new_dog(char *name, float age, char *owner);
5. How many leges does a dog have if you call tail a leg? Four. Saying that a tail is a leg doesn't make it a leg
   Write a function that frees dogs.
   Prototype: void free_dog(dog_t *d);

Requirements
Language: C
OS: Ubuntu 20.04 LTS
Compiler: gcc 
Style guidelines: Betty style

Author:
Samuel
