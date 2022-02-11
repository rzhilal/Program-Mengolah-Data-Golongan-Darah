#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "golongan.h"

void EntryData()	//SALMAN
{
cek cek mari belajar
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
FILE *File_A;//VAR PENAMPUNG FILE
	
	Data_a dt;//VAR PENAMPUNG STRUK
	
	if((File_A=fopen("FILE_A.DAT","rt"))==NULL) // CHECK FILE
	{
		printf("File tidak dapat dibuka!\n");
		exit(1);
	}
	fscanf(File_A,"%[^;];%[^;];%[^;];%c;", dt.kelas,dt.NIM,dt.Gol_Darah,&dt.jk);
	printf("%-15s|%-20s|%-10s|%-15s|\n","Golongan Darah","NIM","Kelas","Jenis Kelamin"); //HEADER TABEL
	printf("----------------------------------------------------------------\n");
	while(!feof(File_A))
	{
		printf("%-15s|%-20s|%-10s|%-15c|\n",dt.Gol_Darah,dt.NIM,dt.kelas,dt.jk);
		fscanf(File_A,"%[^;];%[^;];%[^;];%c;", dt.kelas,dt.NIM,dt.Gol_Darah,&dt.jk);
	}
	printf("----------------------------------------------------------------\n");
	fclose(File_A);
}

void tampilData_b()
{
	FILE *File_B;//VAR PENAMPUNG FILE
	
	Data_b dt;//VAR PENAMPUNG STRUK
	
	if((File_B=fopen("FILE_B.DAT","rt"))==NULL) // CHECK FILE
	{
		printf("File tidak dapat dibuka!\n");
		exit(1);
	}
	fscanf(File_B,"%[^;];%d;%d;", dt.Gol_Darah,&dt.Jml_pria,&dt.Jml_wanita);
	printf("%-15s|%-15s|%-25s|\n","Golongan Darah","Jumlah Pria","Jumlah Wanita"); // HEADER TABEL
	printf("----------------------------------------------------------\n");
	while(!feof(File_B))
	{
		printf("%-15s|%-15d|%-25d|\n", dt.Gol_Darah,dt.Jml_pria,dt.Jml_wanita);
		fscanf(File_B,"%[^;];%d;%d;", dt.Gol_Darah,&dt.Jml_pria,&dt.Jml_wanita);
	}
	printf("----------------------------------------------------------\n");
	fclose(File_B);
}

