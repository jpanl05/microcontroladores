#include <16F877a.h>

#device ADC = 10

#use delay(crystal = 20000000)

#FUSES NOWDT, NOBROWNOUT, NOLVP




//Directiva para utilizar puerto USART

#use rs232(BAUD=9600, XMIT = PIN_C6, RCV=PIN_C7)




#use STANDARD_IO(B)
#use STANDARD_IO(C)



#define BOTON PIN_C0

#define G PIN_B1

#define Y PIN_B2

#define R PIN_B3

void verde(int8 seg)
{
   for(int8 i=0;i<seg;i++)
   {
      if(input(BOTON)==1)break;
      
      else
      {
         output_high(G);
         delay_ms(100);
      }
   }
   output_low(G);
}
void amarillo(int8 seg)
{
       for(int8 i = 0; i < seg; i++)

   {

      output_high(Y);
      delay_ms(250);

      output_low(Y);

      delay_ms(250);

   }
}
void rojo(int8 seg)
{
   for(int8 i=0;i<seg;i++)
   {
      if(input(BOTON)==1)
      {
         i=0;
      }
      else
      {
         output_high(R);
         delay_ms(100);
      }
   }
   output_low(R);
}


void main()

{

   setup_uart(9600); //Configurar baudios

   // Inicializar pines
   input(BOTON);

   output_low(R);

   output_low(Y);

   output_low(G);
while(1)
{
   verde(40);
   amarillo(4);
   rojo(80);
}
#include <16F877a.h>

#device ADC = 10

#use delay(crystal = 20000000)

#FUSES NOWDT, NOBROWNOUT, NOLVP




//Directiva para utilizar puerto USART

#use rs232(BAUD=9600, XMIT = PIN_C6, RCV=PIN_C7)




#use STANDARD_IO(B)
#use STANDARD_IO(C)



#define BOTON PIN_C0

#define G PIN_B1

#define Y PIN_B2

#define R PIN_B3

void verde(int8 seg)
{
   for(int8 i=0;i<seg;i++)
   {
      if(input(BOTON)==1)break;
      
      else
      {
         output_high(G);
         delay_ms(100);
      }
   }
   output_low(G);
}
void amarillo(int8 seg)
{
       for(int8 i = 0; i < seg; i++)

   {

      output_high(Y);
      delay_ms(250);

      output_low(Y);

      delay_ms(250);

   }
}
void rojo(int8 seg)
{
   for(int8 i=0;i<seg;i++)
   {
      if(input(BOTON)==1)
      {
         i=0;
      }
      else
      {
         output_high(R);
         delay_ms(100);
      }
   }
   output_low(R);
}


void main()

{

   setup_uart(9600); //Configurar baudios

   // Inicializar pines
   input(BOTON);

   output_low(R);

   output_low(Y);

   output_low(G);
while(1)
{
   verde(40);
   amarillo(4);
   rojo(80);
}
}
