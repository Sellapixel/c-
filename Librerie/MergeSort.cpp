#include <iostream>
using namespace std;
void merge(int array[], int inizio, int centro, int fine){
	int d1 = centro - inizio +1;
	int d2 = fine - centro;
	
	int* leftArray = new int[d1];  //dichiaraziojne con l'heap
	int* rightArray = new int[d2];
	for(int i=0; i<d1; i++){
		leftArray[i]= array[i+inizio];
	}
	for(int i=0; i<d2; i++){
		rightArray[i]= array[i+centro+1];
	}
	
	int i=0, j=0, k=inizio;
	
	while(i<d1 && j<d2){
		if(leftArray[i] < rightArray[j]){
			array[k] = leftArray[i];
			i++;
		}
		else{
			array[k] = rightArray[j];
			j++;
		}
		k++;
	}
	
	while(i<d1){
		array[k] = leftArray[i];
		i++;
		k++;
	}
	while(j<d2){
		array[k] = rightArray[j];
		j++;
		k++;
	}
	
	delete[] leftArray; //delete con le [] cancella tutti gli elementi dell'array
	delete[] rightArray;
}

void mergeSort(int array[], int inizio, int fine){
	if(inizio >= fine) return;
	int centro = inizio + (fine - inizio) /2;
	
	mergeSort(array, inizio, centro);
	mergeSort(array, centro+1, fine);
	
	merge(array, inizio, centro, fine);
	return;
}
