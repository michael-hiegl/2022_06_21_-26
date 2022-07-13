//**************************************************************************
//**************************************************************************
//**
//**	Projekt: 2022_06_21_Ü26	
//**    ***************************************
//**
//**	Filename: Main.c
//**
//**    Name: micha  
//**	Date: 6/21/2022 6:05:59 PM
//**	
//**	Description:
//**    
//**
//**
//**
//**************************************************************************
//**************************************************************************

//Includes
//**************************************************************************
#include <stdio.h>
#include <math.h>

//Defines & Pragmas
//**************************************************************************
#pragma warning(disable:4996) //Disable warning scanf unsafe
#pragma warning(disable:6031) //Disable warning return getchar()


//Functions
//**************************************************************************


int main(void)
{
	//Variables
	int i_Zahl1 = 100; 
	double d_Zahl2 = 99.5; 
	int* ip_ptr1 = NULL; 
	double* dp_ptr2 = NULL;
	ip_ptr1 = &i_Zahl1; 
	dp_ptr2 = &d_Zahl2;

	//Code
	printf("Variablen:\n"); 
	printf("Die Variable i_Zahl1 hat die Adresse %u und den Wert %i\n", &i_Zahl1, i_Zahl1); 
	printf("Die Variable d_Zahl2 hat die Adresse %u und den Wert %lf\n", &d_Zahl2, d_Zahl2);
	printf("\n\nPointer:\n"); 
	printf("Pointer ip_ptr1 mit der Adresse %u zeigt auf die Adresse %u mit dem Wert %i.\n", &ip_ptr1, ip_ptr1, *ip_ptr1);
	printf("Der Speicherbedarf des Pointers: %i.\n\n", sizeof(ip_ptr1));
	printf("Pointer dp_ptr2 mit der Adresse %u zeigt auf die Adresse %u mit dem Wert %lf.\n", &dp_ptr2, dp_ptr2, *dp_ptr2);
	printf("Der Speicherbedarf des Pointers: %i.\n\n", sizeof(dp_ptr2));



	getchar();
	fflush(stdin);
	getchar();
	return 0;
}