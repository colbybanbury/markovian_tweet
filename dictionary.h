#ifndef DICTIONARY_H
#define DICTIONARY_H

#define HASHSIZE 101

struct nlist { /* table entry: */
    struct nlist *next; /* next entry in chain */
    char *name; /* word  */
    int *occurances; /* number of occurances */
};

unsigned hash(char *s);
struct nlist *lookup(char *s);
struct nlist *insert(char *name);

#endif
