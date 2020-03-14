#include <18f4620.h>
#include <string.h>
#fuses INTRC,NOWDT,NOPROTECT,NOLVP,NODEBUG,NOMCLR 
#use delay(clock=32000000)
 
#define  PIN_ENC_MAC_SO    PIN_C6   //PIN MISO do ENC28J60.
#define  PIN_ENC_MAC_SI    PIN_C5   //PIN MOSI do ENC28J60. 
#define  PIN_ENC_MAC_CLK   PIN_C4   //PIN SCK do ENC28J60. 
#define  PIN_ENC_MAC_CS    PIN_D3   //PIN CS do ENC28J60. 

#define lcd_enable pin_b2       // pino enable do LCD
#define lcd_rs     pin_b3       // pino rs do LCD
#define lcd_db4    pin_b4       // pino de dados d4 do LCD
#define lcd_db5    pin_b5       // pino de dados d5 do LCD
#define lcd_db6    pin_b6       // pino de dados d6 do LCD
#define lcd_db7    pin_b7       // pino de dados d7 do LCD

#include <lcd16.c>
#include <teclado.c>

#define  STACK_USE_MCPENC  TRUE
#define  STACK_USE_ARP     TRUE
#define  STACK_USE_ICMP    TRUE
#define  STACK_USE_TCP     TRUE
#define  STACK_USE_HTTP     TRUE                      
#include "tcpip/stacktsk.c"

#define LAMPADA1 PIN_B0

// configurar endereço MAC
void MACAddrInit(void)
{
   MY_MAC_BYTE1=0x00;
   MY_MAC_BYTE2=0x04;
   MY_MAC_BYTE3=0xA3;
   MY_MAC_BYTE4=0x00;
   MY_MAC_BYTE5=0x00;
   MY_MAC_BYTE6=0x01;
}

void IPAddrInit(void)
{
   //endereco ip local
   MY_IP_BYTE1=192;
   MY_IP_BYTE2=168;
   MY_IP_BYTE3=95;
   MY_IP_BYTE4=10;

   //gatway padrao
   MY_GATE_BYTE1=192;
   MY_GATE_BYTE2=168;
   MY_GATE_BYTE3=95;
   MY_GATE_BYTE4=1;

   //mascara de subrede
   MY_MASK_BYTE1=255;
   MY_MASK_BYTE2=255;
   MY_MASK_BYTE3=255;
   MY_MASK_BYTE4=0;
}

//carrega a  pagina html  na string HTML_INDEX_PAGE 
#include <paginaHtml.c>
char nome_botao[20]="Lampada_1____Ligar", link_lampada[20]="WICXoc1"; //nome da lampada0 no imgur, GfbUR8p 1

//verifica qual pagina foi requisitadda
// carrega em file_loc o label_address() da string q contem a pagina html
int32 http_get_page(char *file_str) {
   int32 file_loc=0;
   //static char index_pag[]="/";
   static char pag_2[]="/pagina_2";
   
   if (stricmp(file_str,pag_2)==0){
      file_loc=label_address(PAGINA_2);
   }
   else
      file_loc=label_address(PAGINA_INDEX);
   return(file_loc);
}

//saida de dados para web
//função que transfeere os valores do hardware para o html. através dos %0, %1, %2, ..., que estão no html
//deve-se carregar em new_str o valor desejado, atraves do sprintf
//o switch do id e referente aos 0%,1%..., quando 0%, id vale 0
int8 http_format_char(int32 file, char id, char *str, int8 max_ret) {
   char new_str[20]="";
   int8 len=0;
   *str=0;

   switch(id) {
      // case do %0
      case '0':
         sprintf(new_str,"%s",mensagem);  
         len=strlen(new_str);
      break;
      case '1':
         sprintf(new_str,"%s",nome_botao);   
         len=strlen(new_str);
      break;
      case '2':
         sprintf(new_str,"%s",link_lampada);
         len=strlen(new_str);
      break;
    
   }

   if (len) { 
      memcpy(str,new_str,max_ret);
   }
   return(len);
}



//função que trata os dados vindos do navegador
void http_exec_cgi(int32 file, char *key, char *val) {
   static char led1_key[]="led1";static char ligar[]=  "Lampada_1____Ligar";
   static char lcd_key[]=  "lcd";
 

   if (stricmp(key,led1_key)==0) {
      if (stricmp(val,ligar)==0) {output_high(LAMPADA1);strcpy(nome_botao,"Lampada_1_Desligar");strcpy(link_lampada,"GfbUR8p");}
      else {output_low(LAMPADA1);   strcpy(nome_botao,"Lampada_1____Ligar");strcpy(link_lampada,"WICXoc1");}
   }


   // se key é lcd, val contem uma string que veio do campo do html
   // ou seja key é o nome da variavel e val é seu valor, exemplo com get ?variavel=valor
   if (stricmp(key,lcd_key)==0) {
      limpa_lcd(); printf(printf2,"%s",val);
   }

}

void main(void) 
{  
   MACAddrInit();
   IPAddrInit();
   StackInit();
   inicializa_lcd();
   printf2("/");
   while(TRUE) {
      StackTask();
      teclado();
   }
}
