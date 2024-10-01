#ifndef ALGORITMOS_ORDENAMIENTO_HPP
#define ALGORITMOS_ORDENAMIENTO_HPP

#include <vector>

using namespace std;

template <typename T>
void bubbleSort(vector<T>& array);

template <typename T>
void insertionSort(vector<T>& arr);

template <typename T>
void quickSort(vector<T>& arr, int low, int high);

template <typename T>
void selectionSort(svector<T>& arr);

template <typename T>
void stlSort(svector<T>& arr);

#endif //ALGORITMOS_ORDENAMIENTO_HPP