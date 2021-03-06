#include <iostream>
#include <fstream>

using namespace std;

void fileOpen(ifstream &nucleotide);
void translate(ifstream &nucleotide);

int main(){
	ifstream DNAString;
	DNAString.open("rosalind_dna.txt"); // open file
	fileOpen(DNAString);// check if file opened
	translate(DNAString);// translate DNA to RNA
	DNAString.close(); // close file
	return 0;
}// end main

//*****************************************************************
void fileOpen(ifstream &nucleotide){
	if(!nucleotide){
		cout << "File did not open -- terminating." << endl;
		exit(1106);
	}// end if
}// makes sure the file opens
//*****************************************************************
void translate(ifstream &nucleotide){
	char letter;
	int totalLetter = 1;
	while(nucleotide.get(letter) && totalLetter <= 1000){
		letter = toupper(letter);// change lower character to upper
		totalLetter++;
		switch(letter){
		case 'A': cout << 'A';
			break;
		case 'G': cout << 'G';
			break;
		case 'T': cout << 'U';
			break;
		case 'C': cout << 'C';
			break;
		}//end switch
	}// get nucleotide and only continue up to 1000 nucleotide
	cout << endl;
}// translate DNA string to RNA string.
