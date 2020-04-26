#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/*===== constants =====*/
#define DATAOUT 11//MOSI
#define DATAIN  12//MISO
#define SPICLOCK  13//sck
#define SLAVESELECT 10//ss

//opcodes
#define WREN  6
#define WRDI  4
#define RDSR  5
#define WRSR  1
#define READ  3
#define WRITE 2

/*===== constants =====*/



 
void changeValues (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ArrayDisplay (int arr1[], int n)
{
	printf("The shuffled elements in the array are:  \n");    
    for (int i = 0; i < n; i++)
        printf("%d ", arr1[i]);
    printf("\n");
}
void shuffleRandon ( int arr1[], int n )
{
    srand ( time(NULL) );
    for (int i = n-1; i > 0; i--)
    {
        int j = rand() % (i+1);
        changeValues(&arr1[i], &arr1[j]);
    }
}


byte eeprom_output_data;
byte eeprom_input_data=0;
byte clr;
int address=0;
//data buffer
char buffer [128];


int buffer[] = {10,11,12,13};
int n = sizeof(arr1)/ sizeof(arr1[0]);


int pick_randon(int size)
{
    randomSeed(analogRead(0));
    int element;
    element  = random(size);
    return element 
}

void setup()
{
  Serial.begin(9600);

    pinMode(DATAOUT, OUTPUT);
    pinMode(DATAIN, INPUT);
    pinMode(SPICLOCK,OUTPUT);
    pinMode(SLAVESELECT,OUTPUT);
    digitalWrite(SLAVESELECT,HIGH); //disable device

    for(i = 0; i < n; i++){
        shuffleRandon (arr1, n);
        ArrayDisplay(arr1, n);
    }
  

}