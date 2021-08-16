#include <stdlib.h>
#include <stdio.h>

bool search(node *tree, int number);

int main(void)
{
    search(/*blah blah blah*/);
}

bool search(node *tree, int number)
{
    if (tree == NULL)
    {
        return false;
    }
    else if (number < tree->number)
    {
        return search(tree->left, number);
    }
    else
    {
        return true;
    }
}