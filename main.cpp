/*
Nama : Rizq Hilal Rifaasya
Program : Pengoperasian File
Tanggal : 05/02/2022
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>
#include "golongan.h"

int main (){
	int pil=0;
	
	for(;;) //Rezky
	{
		printf("\t M E N U\n");
		printf("1. EntryData\n");
		printf("2. Tampilkan Data\n");
		printf("3. Akumulasikan Data\n");
		printf("4. S E L E S A I\n");
		printf("Tentukan Pilihan : ");
		scanf("%d", &pil);
		switch(pil)
		{
			case 1:
				{
					system("cls");
					EntryData();
					system("cls");
					break;
				}
			case 2:
				{
					system("cls");
					tampilData_a();
					system("pause");
					system("cls");
					break;
				}
			case 3:
				{
					system("cls");
					AkumulasiData();
					printf("Ketik 0 untuk menampilkan Data : ");
					scanf("%d",&pil);
					if(pil==0)
					{
						system("cls");
						tampilData_b();
						system("pause");
					}
					system("cls");
					main();
				}
			case 4:
				{
					return(0);
				}
			default:
				{
					system("cls");
					printf("/t\n\n\nSalah Input Masukan Kembali");
					system("cls");
				}
		}
	}
	
}
