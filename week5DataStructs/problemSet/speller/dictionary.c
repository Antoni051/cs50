// Implements a dictionary's functionality
#include <stdbool.h>
#include "dictionary.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
//for usage of strcmp and strcasecmp
#include <string.h>
#include <strings.h>

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// Number of buckets in hash table
// the larger the faster the algo but the more memory the hash table will take up
const unsigned int N = 1000;
unsigned int hashValue;
unsigned int wordCount;
// Hash table
node *table[N];
// Returns true if word is in dictionary, else false
bool check(const char *word)
{   

    hashValue = hash(word);
    node *current = table[hashValue];
    // traverse the linked list
    while (current != NULL)
    {
        // 0 means that there is no difference
        if (strcasecmp(word, current->word) == 0)
        {
            return true;
        }
        // actually doing the traversing
        current = current->next;
    }
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    //using djb2 hashing algorithm
    unsigned long hash = 5381;
    int c;
    while ((c = toupper(*word++)))
    {
        hash = ((hash << 5) + hash) + c; // hash * 33 + c
    }
    return hash % N;
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }

    char word[LENGTH + 1];

    while ((fscanf(file, "%s", word)) != EOF)
    {
        node *n = malloc(sizeof(node));

        if (n == NULL)
        {
            return false;
        }

        strcpy(n->word, word);
        hashValue = hash(word);
        n->next = table[hashValue];
        table[hashValue] = n;
        wordCount++;
    }
    fclose(file);

    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    if (wordCount > 0)
    {
        return wordCount;
    }
    else
    {
        return 0;
    }
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *current = table[i];
        while (current)
        {
            node *tmp = current;
            current = current->next;
            free(tmp);
        }

        if (i == N - 1 && current == NULL)
        {
            return true;
        }
    }
    return false;
}
