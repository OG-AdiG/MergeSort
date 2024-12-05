#include "MergeSort.h"

void MergeSort::Sort(std::vector<int>& tab) {

    if (tab.size() <= 1) return; // <-- Jeśli tablica ma jeden lub mniej elementów, nie ma potrzeby sortować
    Divide(tab, 0, tab.size() - 1); // <-- Rozpoczynamy dzielenie tablicy od indeksu 0 do ostatniego elementu

}

void MergeSort::Divide(std::vector<int>& tab, int l, int r) { // <-- Funkcja jest odpowiedzialana za dzielenie tablicy na mniejsze podtablice


    if (l >= r) return; // <-- Jeśli lewy indeks jest większy lub równy prawemu, oznacza to, że nie ma już co dzielić (tablica ma tylko jeden element)
        int mid = l + (r - l) / 2; // <-- Obliczamy indeks środkowy
        Divide(tab, l, mid);       // <-- Rekurencyjnie dzielimy lewą część tablicy
        Divide(tab, mid + 1, r);   // <-- Rekurencyjnie dzielimy prawą część tablicy
        Merge(tab, l, mid, r);     // <-- Scalanie obu posortowanych części tablicy

}

void MergeSort::Merge(std::vector<int>&tab, int l, int mid, int r) {

    std::vector<int> left(tab.begin() + l, tab.begin() + mid + 1); // <-- Tworzenie tablicy która zawiera elementy lewa do środka 
    std::vector<int> right(tab.begin() + mid + 1, tab.begin() + r + 1); // <-- Tworzenie tablicy która zawiera elementy środka do końca 

     int i = 0; // <-- indeks dla lewej podtablicy
     int j = 0; // <-- indeks dla lewej prawej
     int k = l; // <-- indeks dla lewej głównej

     while (i < left.size() && j < right.size()) { // <-- Scalanie obu podtablic to tablicy głównej dopóki są elementy w obu podtablicach

         if (left[i] <= right[j]) { // <-- Jeśli element w lewej podtablicy jest mniejszy lub równy elementowi w prawej

             tab[k++] = left[i++]; // <-- Wstawiamy element z lewej podtablicy do głównej tablicy

            }

         else {

             tab[k++] = right[j++]; // <-- Wstawiamy element z prawej podtablicy do głównej tablicy

            }

        }

     while (i < left.size()) { // <-- Jeżeli pozostały elementy w lewej podtablicy, wstawiamy je do głównej tablicy

         tab[k++] = left[i++]; // <-- Przenosimy pozostałe elementy z lewej podtablicy

        }

     while (j < right.size()) { // <-- Jeśli pozostały elementy w prawej podtablicy, wstawiamy je do głównej tablicy

         tab[k++] = right[j++]; // <-- Przenosimy pozostałe elementy z prawej podtablicy

        }

}


