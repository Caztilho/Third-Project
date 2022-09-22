#include <stdio.h>
#include <locale.h>

int digitos[11], digitos_um[2][9], digitos_dois[2][9], soma_digitos_um, soma_digitos_dois, total,  valido, invalido, digito_umcpf, digito_doiscpf, resto, restodois, x, y, z, d;
float produto_digitos_um[9], produto_digitos_dois[10], pvalido, pinvalido;

// N0MES: JOAO VICTOR CASTILHO, JOAO PEDRO ARAUJO, LUCCA MONTEIRO HENRIQUE
// SALA: 1º H

main(){
	setlocale(LC_ALL, "Portuguese");
	
			
			while(x != 2){
					
					 	
				total++;	 
				d = 1;
					for(x=0;x<=10;x++){
						
						printf("Insira o %d° digito do CPF: ", d);
						scanf("%d", &digitos[x]);
						
					
						

						while ((digitos[x] < 0) || (digitos[x] > 9)){
							printf("Insira apenas UM dígito!\n");
							scanf("%d", &digitos[x]);
						}
						d++;	
						
						
						
					}
					
					for(x=0;x<=8;x++){
				
						digitos_um[0][x] = digitos[x];
					}
				
					z = 10;
					for(x=0;x<=8;x++){
						digitos_um[1][x] = z;	
						z--;
						 
					}
				
					y=10;
					for(x=0;x<=8;x++){
						produto_digitos_um[x] = digitos_um[0][x] * y;
						y--;
					}
					
					for(x=0;x<=8;x++){
						soma_digitos_um = soma_digitos_um + produto_digitos_um[x];
						 
					}
					 
					
					
					resto = soma_digitos_um % 11;
					
					if (resto % 11 < 2){
						digito_umcpf = 0;
				
					}else{
						digito_umcpf = 11 - resto;
						
					}
					 
					for(x=0;x<=9;x++){
					
						digitos_dois[0][x] = digitos[x];
						
						if(x == 9){
							digitos_dois[0][x] = digito_umcpf;
						} 	
					}
					
					y=11;
					for(x=0;x<=9;x++){
						produto_digitos_dois[x] = digitos_dois[0][x] * y;
						y--;
						
					}
					
					for(x=0;x<=9;x++){
						soma_digitos_dois = soma_digitos_dois + produto_digitos_dois[x];
						 
					}
					 
					 
					 
					 restodois = soma_digitos_dois % 11;
					 
					 if(restodois < 2 ){
					 	digito_doiscpf = 0;
					 }else{
					 	digito_doiscpf = 11 - restodois;
					 }
					  
					
					 if ((digitos[9] == digito_umcpf ) && (digitos[10] == digito_doiscpf)){
					 	printf("CPF VALIDO!\n\n");
					 	
					    valido++;
					 }else{
					 	printf("CPF INVALIDO!\n\n");
					 	invalido++;
					 }
					 
					 printf("Deseja continuar? (1 SIM | 2 NAO)\n");
					 scanf("%d", &x);
					 
					 while ((x < 1) || (x > 2)){
					 
					 	printf("Insira apenas 1 ou 2!\n");
					 	scanf("%d", &x);
					    
					}
					
					 soma_digitos_um = 0;
					 soma_digitos_dois = 0;
					 
					 
			}
			
				
			
			
			 	
			printf("CPF'S TESTADOS: %d\n", total);	 
			printf("CPF'S VALIDOS: %d\n", valido);
			printf("CPF'S INVALIDOS: %d\n", invalido);
				if (valido > 0){
				pvalido = (valido * 100) / total;	
				}
			printf("PORCENTAGENS DE CPF'S VÁLIDOS EM RELAÇÃO AO TOTAL TESTADO: %f%%\n", pvalido);
				if (invalido > 0){
				pinvalido = (invalido * 100) / total;	
				}
			printf("PORCENTAGENS DE CPF'S INVALIDOS EM RELAÇÃO AO TOTAL TESTADO: %f%%", pinvalido);	 
				 
}
