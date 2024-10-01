#ifndef ALGORITMOS_ORDENAMIENTO_HPP
#define ALGORITMOS_ORDENAMIENTO_HPP

#include <vector>

using namespace std;

template <typename T>
void bubbleSort(vector<T>& array);

template <typename T>
void insertionSort(vector<T>& array);

template <typename T>
void quickSort(vector<T>& array, int low, int high);

template <typename T>
void selectionSort(vector<T>& array);

template <typename T>
void stlSort(vector<T>& array);

#endif //ALGORITMOS_ORDENAMIENTO_HPP