#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void menu();
void Saldo(float *Pesos	, int UsuarioBan);
int Depositos(float *Pesos	, int UsuarioBan);
int Fondos(float *Pesos	, int UsuarioBan);
int Transferir(float *Pesos	, int NumMax, int UsuarioBan);

#define Usu 10
#define Ta 20

int main(){

	int NIP[Usu];
	char nombre[Usu][Ta];
	int Pesos	[Usu];
	int NumMax;

	printf("\n Usuarios (%d):\n", Usu);
	scanf("%d", &NumMax);
	system("clear");
	for (int i = 0; i < NumMax; i++){
		printf("\n Nuevo Usuario %d", i + 1);
		printf("\nIngrese el nombre del cliente:\n");

		scanf("%s", &nombre[i][Ta]);

		printf("\n NIP DE Usuario:\n");

		scanf("%d", &NIP[i]);
		Pesos	[i] = 0.0;

		printf("\n Cliente registrado exitosamente.\n ");

	}

	int op;
	int UsuarioBan;
	int NIN;

	do{
		printf("\n Bienvenido Nuevo Usuario UWU" );
		printf("\n Ingresa tu numero de Registro:\n ");
		scanf("%d", &UsuarioBan);

		printf("\n Ingresa ti NIP:\n ");
		scanf("%d", &nip);

		int UsuarioAc = -1;
		for (int i = 0; i < NumMax; i++)
		{
			if (NIP[i] == nip)
			{
				UsuarioAc = i;
				break;
			}
		}

		if (UsuarioAc == -1 || UsuarioBan <= 0 || UsuarioBan > NumMax)
		{
			printf("\n Nip o Usuarion no encontrado o Incorrecto \n");
			continue;
		}
		system("clear");
		printf("\n Bienvenido, %s.\n", nombre[UsuarioAc]);

		int ciclo = 1;

		while (ciclo){

			menu();
			scanf("%d", &op);
			system("clear");
			switch (op){
			case 1:			
				Saldo(Pesos	, UsuarioAc);
				break;
			case 2:			
				if (Depositos(Pesos	, UsuarioAc)){
					printf("\n Deposito Exitoso ");
				}
				else{
					printf("\n No se proceso intentelo de nuevo UNU.");
				}
				break;
			case 3:			
				if (Fondos(Pesos, UsuarioAc)){
					printf("\n Fondos Exitosos.");
				}
				else{
					printf("No se proceso intentelo de nuevo UNU.\n");
				}
				break;
			case 4:			
				if (Transferir(Pesos, NumMax, UsuarioAc)){
					printf("\n Transaccion Exitosa.");
				}
				else{
					printf("No se proceso intentelo de nuevo UNU.");
				}
				break;
			case 5:			
				printf("\n Gracias por su visita !JAMAS VUELBAS ¡ \n");
				ciclo = 0;
				break;
			default:
				printf
					("\n No se proceso intentelo de nuevo UNU. \n");
				break;
			}
		}

	}
	while (1);
}

void menu(){
	printf("\n Banco uWu \n");
	printf("\n 1. Saldo");
	printf("\n 2. Deposito");
	printf("\n 3. Retirar");
	printf("\n 4. Transferir");
	printf("\n 5. Adios\n");
	
}

void Saldo(float *Pesos	, int UsuarioBan)
{
	printf("\n Banco UwU\n");
	printf("\n Saldo actual: $ %.2f\n", Pesos	[UsuarioBan]);
}

int Depositos(float *Pesos	, int UsuarioBan)
{
	float monto;
	printf("\n Banco UWU\n");
	printf("\n Ingrese el monto a depositar:\n $ ");
	scanf("%f", &monto);
	Pesos	[UsuarioBan] = Pesos	[UsuarioBan] + monto;
	printf("\n Depósito realizado.\n          Pesos: $ %.2f, Saldo actual: $ %.2f\n",
		 Pesos	[UsuarioBan] - monto, Pesos	[UsuarioBan]);
	return 1;
}

int Fondos(float *Pesos	, int UsuarioBan)
{
	float monto;
	printf("\n Banco UWU \n");
	printf
		("\n Ingrese el monto a retirar :\n                           $ ");
	scanf("%f", &monto);
	if (monto > Pesos	[UsuarioBan])
	{
		printf("\n Saldo insuficiente.");
		return 0;
	}
	else
	{
		Pesos	[UsuarioBan] = Pesos	[UsuarioBan] - monto;
		printf("\n\t\t\t                 Retiro realizado. Saldo restante: %.2f",
			   Pesos	[UsuarioBan]);
		return 1;
	}
}

int Transferir(float *Pesos	, int NumMax, int UsuarioBan)
{
	int transfer;
	float monto;
	printf("\nBanco UWU \n");
	printf("\nIngrese el número de cliente destinatario (1-%d):\n  ",
		 NumMax);
	scanf("%d", &transfer);
	transfer--;
	if (transfer < 0 || transfer >= NumMax)
	{
		printf("\n Número de cliente inválido.\n");
		return 0;
	}
	printf
		("\n\t\t\t                      Ingrese el monto a transferir:\n\t\t\t                               $ ");
	scanf("%f", &monto);
	if (monto > Pesos	[UsuarioBan])
	{
		printf("\n\t\t\t                          Saldo insuficiente.\n");
		return 0;
	}
	else
	{
		Pesos	[UsuarioBan] = Pesos	[UsuarioBan] - monto;
		Pesos	[transfer] = Pesos	[transfer] + monto;
		printf("\n\t\t\t                         Transferencia realizada.");
		printf("\n\t\t\t                   Saldo final del cliente actual: $ %.2f",
			   Pesos	[UsuarioBan]);
		printf("\n\t\t\t                Saldo final del cliente destinatario: $ %.2f",
			   Pesos	[transfer]);
		return 1;
	}
}