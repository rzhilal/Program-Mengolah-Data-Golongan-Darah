#ifndef golongan_H
#define golongan_H

//HAFIDH
void EntryData(); // PROSEDUR MEMASUKAN DATA
void AkumulasiData(); // PROSEDUR PEMANGGILAN PROSEDUR AKUMULASI DATA
void akumulasiPerGolongan(char Gol_dar[3]); // PROSEDUR PENGAKUMULASIAN SATU GOLONGAN DATA
void tampilData_a(); // PROSEDUR MENAMPILKAN DATA DARI FILE A
void tampilData_b(); // PROSEDUR MENAMPILAN DATA DARI FILE B

typedef struct
{
	char kelas[4];
	char NIM[10];
	char Gol_Darah[3];
	char jk ;
}Data_a;

typedef struct
{
	char Gol_Darah[3];
	int Jml_pria;
	int Jml_wanita;
}Data_b;

#endif
