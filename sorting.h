#ifndef SORTING_H
#define SORTING_H

    typedef int (*Comparador)(const void*, const void*);
    void swapBytes(void *, void *, int);
    void insertionSort(void *, int , int, Comparador);

#endif
