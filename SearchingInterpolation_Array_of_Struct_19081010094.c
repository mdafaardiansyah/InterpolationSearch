#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct data_mahasiswa_upn_jatim{
	char nama[40];
	char npm[12];
	char email[40];
	char nohp[20];
	char kota_asal[15];
	char tb[4];
	char bb[4];
}mhs;

mhs daftar [50],temp;

int main (){
	int i=0,j=1,k=0,tipe,bagian,yesno,urutan,maks=0,pos;
	mhs daftar [50];
	
pilih:
	printf("=------------= Program Data Mahasiswa =-------------=\n");
	printf("Pilih yang anda inginkan :\n\n1.Menambahkan Data Mahasiswa. \n2.Lihat List Data. \n3.Update Data. \n4.Hapus Data. \n5.Urutkan Data berdasarkan NPM. \n6.Pencarian berdasarkan NPM. \n7.Keluar Program. \n");
	printf("pilih \t: ");
	scanf("%d",&tipe);
	
	if(tipe==1){
		if (maks==0){
			maks=1;
			i=1;
		}
		do{
			system ("cls");
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf("\nMahasiswa ke- %d \n",i);
			printf("\nMasukkan Nama anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].nama);
			printf("\nMasukkan NPM anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].npm);
			printf("\nMasukkan Email anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].email);
			printf("\nMasukkan Nomor HP\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].nohp);
			printf("\nMasukkan Kota Asal anda\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].kota_asal);
			printf("\nMasukkan Tinggi Badan anda\t: ");
			scanf(" %[^\n]%*c",&daftar[i].tb);
			printf("\nMasukkan Berat Badan\t\t: ");
			scanf(" %[^\n]%*c",&daftar[i].bb);
			i++,maks++;
			
			printf("Apakah anda ingin menginput kembali ?\n1.Ya 2.Tidak =");
			scanf("%d",&yesno);						
		}
		while (yesno == 1);
		
		if(yesno == 2){
			system("cls");
			goto pilih;
		}				
	}
	else if (tipe==2){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(maks==0){
			printf("\t\tData Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else {
			for(i=1;i<maks;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n\n",&daftar[i].bb);
			}
			system("pause");
			system("cls");
			goto pilih;
		}		
	}
	else if(tipe == 3){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(maks == 0){
			printf("\t\t Data Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else{
			for (i=1;i<maks;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n",&daftar[i].bb);
			}
			printf("\nMasukkan Nomor yang ingin anda update datanya :");
			scanf("%d",&i);
			system("cls");
			
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf("Masukkan data apa yang akan anda ubah\n ");
			printf("\n1.Nama\n2.NPM\n3.Email\n4.Nomor HP\n5.Kota Asal\n6.Tinggi Badan\n7.Berat Badan\n");
			printf("Pilih :");
			scanf("%d",&bagian);
			
			if (bagian == 1){
			printf("\nNama :");
			scanf(" %[^\n]%*c",&daftar[i].nama);
			}
			
			else if (bagian == 2){
			printf("\nNPM :");
			scanf(" %[^\n]%*c",&daftar[i].npm);
			}	
				
			else if (bagian == 3){
			printf("\nEmail :");
			scanf(" %[^\n]%*c",&daftar[i].email);
			}
			
			else if (bagian == 4){
			printf("\nNomor HP :");
			scanf(" %[^\n]%*c",&daftar[i].nohp);
			}
			
			else if (bagian == 5){
			printf("\nKota Asal :");
			scanf(" %[^\n]%*c",&daftar[i].kota_asal);
			}
			
			else if (bagian == 6){
			printf("\nTinggi Badan :");
			scanf(" %[^\n]%*c",&daftar[i].tb);
			}
				
			else if (bagian == 7){
			printf("\nBerat Badan :");
			scanf(" %[^\n]%*c",&daftar[i].bb);
			}
		}
		system("cls");
		goto pilih;	
	}
	else if (tipe==4){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		if(maks == 0){
			printf("\t\t Data Anda Belum Terinput\t\n");
			system("pause");
			system("cls");
			goto pilih;
		}
		else{
			for (i=1;i<maks;i++){
				printf("\n\nMahasiswa ke- %d\n",i);
				printf("\nNama\t\t : %s",&daftar[i].nama);
				printf("\nNPM\t\t : %s",&daftar[i].npm);
				printf("\nEmail\t\t : %s",&daftar[i].email);
				printf("\nNomor HP\t : %s",&daftar[i].nohp);
				printf("\nKota Asal\t : %s",&daftar[i].kota_asal);
				printf("\nTinggi Badan\t : %s",&daftar[i].tb);
				printf("\nBerat Badan\t : %s\n",&daftar[i].bb);
			}
			printf("\n Masukkan Mahasiswa keberapa yang ingin anda Hapus dari list Data :");
			scanf("%d",&urutan);
			for(urutan;urutan<i;urutan++){
				strcpy(daftar[urutan].nama,daftar[urutan+1].nama);
				strcpy(daftar[urutan].npm,daftar[urutan+1].npm);
				strcpy(daftar[urutan].email,daftar[urutan+1].email);
				strcpy(daftar[urutan].nohp,daftar[urutan+1].nohp);
				strcpy(daftar[urutan].kota_asal,daftar[urutan+1].kota_asal);
				strcpy(daftar[urutan].tb,daftar[urutan+1].tb);
				strcpy(daftar[urutan].bb,daftar[urutan+1].bb);
			}
			maks=maks-1;
		}	
		system("cls");
		goto pilih;
	}
	else if (tipe == 5){
		if (maks < 2){
			system("cls");
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf(" Data anda tidak ada yang harus diurutkan.\n");
			system("pause");
			system("cls");
			
			goto pilih;
		}
		else{
				
		sorting:
			system("cls");
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf("Pilih yang anda inginkan :\n\n1. Bubble Sorting \n2. Selection Sorting\n");
			printf("pilih \t: ");
			scanf("%d",&tipe);
			
			if (tipe == 1){
				system("cls");
				printf("=------------= Program Data Mahasiswa =-------------=\n");
				printf(":     Bubble Sorting     :\n\n");
				printf("Pilih yang anda inginkan :\n\n1. Dari Terkecil ke Terbesar (Ascending) \n2. Dari Terbesar ke Terkecil (Descending)\n");
				printf("pilih \t: ");
				scanf("%d",&tipe);
				//ascending
				
				if(tipe == 1){
					
					for(j=0;j<maks;j++){
						for(k=1;k<maks-1;k++){
							if(strcmp(daftar[k].npm, daftar[k+1].npm) > 0){
								temp =daftar[k];
								daftar[k]=daftar[k+1];
								daftar[k+1]=temp;				
							}
						}
					}
					
					
					system("cls");
					printf("=------------= Program Data Mahasiswa =-------------=\n\n");
					printf("Data anda berhasil diurutkan Sesuai NPM \n");
					
					system("pause");
					system("cls");
					goto pilih;
					
				}							
				//descending
				else if (tipe == 2){
					
					for(j=0;j<maks;j++){
						for(k=1;k<maks-1;k++){
							if(strcmp(daftar[k].npm, daftar[k+1].npm) < 0){
								temp =daftar[k];
								daftar[k]=daftar[k+1];
								daftar[k+1]=temp;				
							}
						}
					}
					
					
					system("cls");
					printf("=------------= Program Data Mahasiswa =-------------=\n\n");
					printf("Data anda berhasil diurutkan Sesuai NPM \n");
					
					system("pause");
					system("cls");
					goto pilih;
				}
				else{
				system("cls");
				goto sorting;
				}	
			}
			else if (tipe == 2){
				system("cls");
				printf("=------------= Program Data Mahasiswa =-------------=\n");
				printf(":       Selection Sorting       : \n\n");
				printf("Pilih yang anda inginkan :\n\n1. Dari Terkecil ke Terbesar (Ascending) \n2. Dari Terbesar ke Terkecil(Descending)\n");
				printf("pilih \t: ");
				scanf("%d",&tipe);
				//ascending
				if(tipe == 1){
					
					for (j=1;j<maks;j++){
						pos = j;
						for (k=j+1;k<maks;k++){
							if(strcmp(daftar[k].npm, daftar[pos].npm) < 0){
							pos=k;
							} 
						}
						if (pos!=j){
						temp =daftar[pos];
						daftar[pos]=daftar[j];
						daftar[j]=temp;
						} 
					}
					
					
					system("cls");
					printf("=------------= Program Data Mahasiswa =-------------=\n\n");
					printf("Data anda berhasil diurutkan Sesuai NPM \n");
					
					system("pause");
					system("cls");
					goto pilih;
				}
				//descending
				else if (tipe == 2){
					
					for (j=1;j<maks;j++){
						pos = j;
						for (k=j+1;k<maks;k++){
							if(strcmp(daftar[k].npm, daftar[pos].npm) > 0){
							pos=k;
							} 
						}
						if (pos!=j) {
							temp = daftar[pos];
							daftar[pos]=daftar[j];
							daftar[j]=temp;	
						}					
					}
					
					
					system("cls");
					printf("=------------= Program Data Mahasiswa =-------------=\n\n");
					printf("Data anda berhasil diurutkan Sesuai NPM \n");
					
					system("pause");
					system("cls");
					goto pilih;
				}
				else{
				system("cls");
				goto sorting;
				}
			}
			else {
			system("cls");
			goto sorting;
			}				
		}
	}
	else if (tipe == 6){
		if (maks < 2){
			system("cls");
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf(" Data anda tidak ada yang harus dicari.\n");
			system("pause");
			system("cls");
			
			goto pilih;
		}
		else{
				
		searching:
			system("cls");
			printf("=------------= Program Data Mahasiswa =-------------=\n");
			printf("Pilih yang anda inginkan :\n\n1. Binary Searching \n2. Sequential Searching\n3. Interpolation Search\n");
			printf("pilih \t: ");
			scanf("%d",&tipe);
			
			//binary searching
			if (tipe == 1){
				system("cls");
				printf("=------------= Program Data Mahasiswa =-------------=\n");
				printf(":     Binary Searching     :\n\n");
				
				char cari [12];
				printf("Masukkan NPM yang ingin anda cari menggunakan Binary Search \t:");				
				scanf("%s",&cari);
				
				//ascending-bubble
					for(j=0;j<maks;j++){
						for(k=1;k<maks-1;k++){
							if(strcmp(daftar[k].npm, daftar[k+1].npm) > 0){
								temp =daftar[k];
								daftar[k]=daftar[k+1];
								daftar[k+1]=temp;				
							}
						}
					}
					
					printf("Data anda berhasil diurutkan Sesuai NPM terlebih dahulu \n");
					system("pause");			
					system("cls");
					
					int pertama=0;
					int tengah;					
					int terakhir=maks;
					int ketemu=-1;
					int l=0;
					
					while(ketemu==-1 && l<maks){
						tengah= (pertama+terakhir)/2;
						if(strcmp(daftar[tengah].npm,cari) == 0){
							ketemu=tengah;
						}
						else{
							if(strcmp(daftar[tengah].npm,cari) < 0){
								pertama = tengah + 1;
							}else{
								terakhir = tengah - 1;
							}
						}
						l++;
					}
					
					if (ketemu == -1){
						printf("\nNPM tidak ada dalam list Data Mahasiswa\n\n");
					}
					else {
						printf("\nNPM %s berhasil ditemukan dalam list, dan berada pada Mahasiswa Ke-%d\n\n",cari,ketemu+1);
						printf("\nNama\t\t : %s",&daftar[ketemu].nama);
						printf("\nNPM\t\t : %s",&daftar[ketemu].npm);
						printf("\nEmail\t\t : %s",&daftar[ketemu].email);
						printf("\nNomor HP\t : %s",&daftar[ketemu].nohp);
						printf("\nKota Asal\t : %s",&daftar[ketemu].kota_asal);
						printf("\nTinggi Badan\t : %s",&daftar[ketemu].tb);
						printf("\nBerat Badan\t : %s\n",&daftar[ketemu].bb);
					}
					
					system("pause");
					system("cls");
					goto pilih;					
			}
			//Sequential Searching
			else if (tipe == 2){
				system("cls");
				printf("=------------= Program Data Mahasiswa =-------------=\n");
				printf(":       Sequential Searching       : \n\n");
				
				char cari [12];
				printf("Masukkan NPM yang ingin anda cari menggunakan Sequential Search \t:");				
				scanf("%s",&cari);
				
				//ascending-selection	
					for (j=1;j<maks;j++){
						pos = j;
						for (k=j+1;k<maks;k++){
							if(strcmp(daftar[k].npm, daftar[pos].npm) < 0){
							pos=k;
							} 
						}
						if (pos!=j){
						temp =daftar[pos];
						daftar[pos]=daftar[j];
						daftar[j]=temp;
						} 
					}
							
					printf("Data anda berhasil diurutkan Sesuai NPM terlebih dahulu \n");
					system("pause");			
					system("cls");
					
					int flag=-1;
					int m=0;
					
					for (m=0;m<maks;m++){
						if(strcmp(daftar[m].npm,cari) == 0){
							flag=m;
						}
					}
					
					if (flag>=0){
						printf("\nNPM %s berhasil ditemukan dalam list, dan berada pada Mahasiswa Ke-%d\n\n",cari,flag+1);
						printf("\nNama\t\t : %s",&daftar[flag].nama);
						printf("\nNPM\t\t : %s",&daftar[flag].npm);
						printf("\nEmail\t\t : %s",&daftar[flag].email);
						printf("\nNomor HP\t : %s",&daftar[flag].nohp);
						printf("\nKota Asal\t : %s",&daftar[flag].kota_asal);
						printf("\nTinggi Badan\t : %s",&daftar[flag].tb);
						printf("\nBerat Badan\t : %s\n",&daftar[flag].bb);
					}
					else {
						printf("\nNPM Tidak ada didalam List Data Mahasiswa\n\n");
					}
					system("pause");
					system("cls");
					goto pilih;				
			}
			//Interpolation Search
			else if (tipe == 3){
				system ("cls");
				printf("=------------= Program Data Mahasiswa =-------------=\n");
				printf(":       Interpolation Searching       : \n\n");
				
				char cari [12];
				printf("Masukkan NPM yang ingin anda cari menggunakan Interpolation Search \t:");				
				scanf("%s",&cari);
				
				//ascending-bubble
					for(j=0;j<maks;j++){
						for(k=1;k<maks-1;k++){
							if(strcmp(daftar[k].npm, daftar[k+1].npm) > 0){
								temp =daftar[k];
								daftar[k]=daftar[k+1];
								daftar[k+1]=temp;				
							}
						}
					}
					
					printf("Data anda berhasil diurutkan Sesuai NPM terlebih dahulu \n");
					system("pause");			
					system("cls");
				
				int low;
				int high;
				int match;
				float posisi1;
				int posisi;
				
				low = 1;
				high = maks - 1;
				
				do{
                    posisi1 = (float) strcmp(cari,daftar[low].npm)/strcmp(daftar[high].npm,daftar[low].npm)*(high-low)+low;
                    posisi = floor(posisi1);
                    if(strcmp(daftar[posisi].npm,cari)==0){
                        match=posisi;
                        break;
                    }
                    if(strcmp(daftar[posisi].npm,cari)>0)high=posisi-1;
                    else
                        if(strcmp(daftar[posisi].npm,cari)<0)low=posisi+1;
                }while((strcmp(cari,daftar[low].npm)>=0)&& (strcmp(cari,daftar[high].npm)<=0));
					
				if (match == 0){
					printf ("Data Tidak ada");
				}
				else {
					printf("\nNPM %s berhasil ditemukan dalam list, dan berada pada Mahasiswa Ke-%d\n\n",cari,match);
					printf("\nNama\t\t : %s",&daftar[match].nama);
					printf("\nNPM\t\t : %s",&daftar[match].npm);
					printf("\nEmail\t\t : %s",&daftar[match].email);
					printf("\nNomor HP\t : %s",&daftar[match].nohp);
					printf("\nKota Asal\t : %s",&daftar[match].kota_asal);
					printf("\nTinggi Badan\t : %s",&daftar[match].tb);
					printf("\nBerat Badan\t : %s\n",&daftar[match].bb);					
				}
			}
			else {
			system("cls");
			goto searching;
			}				
		}
	}
	else if (tipe == 7){
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		printf("Terimakasih");
	}else {
		system("cls");
		printf("=------------= Program Data Mahasiswa =-------------=\n");
		printf(" Inputan yang anda masukkan Invalid ");
	}
	return 0;
}
