//funcao teclado(), caracter corrente =a, concatena em c, quando aoerta o botao "enter", copia c em mensagem.
char c[20],a[20];
char mensagem[20]="abc";
void teclado(){    
    
     ///////////////////////// coluna 1 \\\\\\\\\\\\\\\\\\\\\
     output_high(PIN_A7);
     while(input(pin_c2)){//linha 1
                       strcpy(a,"1");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"A");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"B");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"C");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_c3)){//linha 2
                       strcpy(a,"4");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"J");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"K");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"L");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_D0)){//linha 3
                       strcpy(a,"7");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"S");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"T");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"U");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;
      }
      while(input(pin_D1)){//linha 4 (#)
      limpa_lcd();delay_ms(300);strcpy(mensagem,c);printf(printf2,"feito");strcpy(a,"");strcpy(c,""); 
      // sem esse delay acima, a string mensagem desaparece da memoria
      }      
      output_low(PIN_A7);
     ///////////////////////// coluna 2 \\\\\\\\\\\\\\\\\\\\\
     output_high(PIN_C0);
     while(input(pin_c2)){//linha 1
                       strcpy(a,"2");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"D");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"E");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"F");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_c3)){//linha 2
                       strcpy(a,"5");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"M");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"N");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"O");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_D0)){//linha 3
                       strcpy(a,"8");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"V");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"X");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"Z");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_D1)){//linha 3
                       strcpy(a," ");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D1)){break;}
      c[strlen(c)-1]=0;strcpy(a,":");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D1)){break;}
      c[strlen(c)-1]=0;strcpy(a,")");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D1)){break;}
      c[strlen(c)-1]=0;strcpy(a,"(");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D1)){break;}
      c[strlen(c)-1]=0;
      } 
      output_low(PIN_C0);
    
     ///////////////////////// coluna 3 \\\\\\\\\\\\\\\\\\\\\
     output_high(pin_c1);
     while(input(pin_c2)){//linha 1
                       strcpy(a,"3");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"G");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"H");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;strcpy(a,"I");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c2)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_c3)){//linha 2
                       strcpy(a,"6");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"P");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"Q");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;strcpy(a,"R");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_c3)){break;}
      c[strlen(c)-1]=0;
      }
     while(input(pin_D0)){//linha 3
                       strcpy(a,"9");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"Y");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"W");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;strcpy(a,"?");strcat(c,a);limpa_lcd();printf(printf2,c);delay_ms(200);if(!input(pin_D0)){break;}
      c[strlen(c)-1]=0;
      }    
      while(input(pin_D1)){//linha 4 (#)
      c[strlen(c)-1]=0;limpa_lcd();printf(printf2,c);delay_ms(200);
      
      }
      output_low(pin_c1);
} 