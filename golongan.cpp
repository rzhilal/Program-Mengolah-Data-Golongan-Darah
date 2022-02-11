#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "golongan.h"

void EntryData()	//SALMAN
{

}

void AkumulasiData()
{

}

void akumulasiPerGolongan(char Gol_dar[3]) //Haposan
{
FILE *File_A;//VAR PENAMPUNG FILE;
	FILE *File_B;
	
	Data_a dt;//VAR PENAMPUNG STRUK
	Data_b st;
	
	int compare;
	
	if((File_A=fopen("FILE_A.DAT","rb"))==NULL) // CHECK FILE
	{
		printf("File tidak dapat dibuka!\n");
		exit(1);
	}
	if((File_B=fopen("FILE_B.DAT","ab+"))==NULL) // CHECK FILE
	{
		printf("File tidak dapat dibuka!\n");
		exit(1);
	}
	fscanf(File_A,"%[^;];%[^;];%[^;];%c;", dt.kelas,dt.NIM,dt.Gol_Darah,&dt.jk);
	
	while(!feof(File_A))
	{
		st.Jml_pria=0;
		st.Jml_wanita=0;
		while(!feof(File_A))
		{
			compare = strcmp(dt.Gol_Darah,Gol_dar);
			if(compare==0&&dt.jk=='P')
			{
				st.Jml_pria = st.Jml_pria +1;
			} else if (compare==0&&dt.jk=='W')
			{
				st.Jml_wanita = st.Jml_wanita +1;
			}
			fscanf(File_A,"%[^;];%[^;];%[^;];%c;", dt.kelas,dt.NIM,dt.Gol_Darah,&dt.jk);
		}
		fprintf(File_B, "%s;%d;%d;", Gol_dar,st.Jml_pria,st.Jml_wanita);
	}
	fclose(File_A);
	fclose(File_B);
}

void tampilData_a() // ZAHRA
{

}

void tampilData_b()
{

}

