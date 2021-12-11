#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  char nomi[10][20], nome[20];
  cout << " l'utente scelga dieci nomi: ";
  
  for(size_t i=0; i<10; i++){
    cin>> nomi[i];
    cout << "ancora uno:";
    for (int j=0; j<20; j++) nome [j];
    cin >>nome;
    
    int posizione = funzione(nomi, nome);
    if (posizione>=0){
      cout << posizione;
    }else{
      cout << "non presente";
    }
  return 0;
}
