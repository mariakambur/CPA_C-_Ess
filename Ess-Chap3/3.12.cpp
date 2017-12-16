#include <iostream>
#include <cstdlib>
#include <ctime>
struct Collection
{
    int elno;
    int *elements;
};
void Add(Collection &col, int element)
{
    int *newarray = new int[col.elno + 1];
    for(int i = 0; i < col.elno + 1; i++)
        newarray[i] = (i < col.elno) ? col.elements[i] : element;
    col.elno++;
    delete [] col.elements;
    col.elements = newarray;
}
void Print(Collection col)
{
    for(int i = 0; i < col.elno; i++)
        std::cout << col.elements[i] << " ";
}
int main(void)
 {
    Collection collection = { 0, NULL };
    int elems;
    std::cout << "How many elements? ";
    std::cin >> elems;
    srand(time(NULL));
    for(int i = 0; i < elems; i++)
        Add(collection, rand() % 100 + 1);
    Print(collection);
    delete[] collection.elements;
    return 0;
}