#pragma once
#include <vector>
/**
 * @class MergeSort
 * @brief Klasa implementuj�ca algorytm MergeSort.
 */
class MergeSort {

	public:
	/**
	* @brief Funkcja sortuj�ca tablic� przy u�yciu algorytmu MergeSort.
	*
	* Ta funkcja jest wywo�ywana w celu rozpocz�cia procesu sortowania tablicy. U�ywa algorytmu MergeSort,
	* kt�ry dzieli tablic� na mniejsze cz�ci i scala je w posortowan� ca�o��.
	*
	* @param tab Referencja do tablicy, kt�ra ma zosta� posortowana.
	*/
	static void Sort(std::vector<int>& tab);
	/**
    * @brief Funkcja dziel�ca tablic� na dwie cz�ci do dalszego sortowania.
    *
    * Funkcja ta dzieli tablic� na dwie cz�ci na podstawie indeks�w lewego (l) i prawego (r)
    * granicy. Nast�pnie wywo�uje rekurencyjnie sortowanie dla obu cz�ci.
    *
    * @param tab Referencja do tablicy, kt�ra ma zosta� podzielona.
    * @param l Indeks pocz�tkowy lewej cz�ci tablicy.
    * @param r Indeks ko�cowy prawej cz�ci tablicy.
    */
	static void Divide(std::vector<int>& tab, int l, int r);
	/**
	* @brief Funkcja scala dwie posortowane cz�ci tablicy w jedn� posortowan� ca�o��.
	*
	* Ta funkcja ��czy dwie posortowane cz�ci tablicy w jeden ci�g w spos�b wydajny,
	* zachowuj�c porz�dek rosn�cy. Operacja scalania jest kluczow� cz�ci� algorytmu MergeSort.
	*
	* @param tab Referencja do tablicy, w kt�rej odbywa si� scalanie.
	* @param l Indeks pocz�tkowy lewej cz�ci tablicy.
	* @param mid Indeks �rodkowy, kt�ry dzieli tablic� na dwie cz�ci.
	* @param r Indeks ko�cowy prawej cz�ci tablicy.
	*/
	static void Merge(std::vector<int>& tab, int l, int mid, int r);
	
};