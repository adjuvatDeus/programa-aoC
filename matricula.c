#include <stdio.h>
#include <locale.h>

struct {
    char codigo[50];
    int ra;
    char area[100];
} estado[5];

void main(){
    setlocale(LC_ALL,"portuguese");
    int i;

  printf("--- card game ---\n\n");
  printf("--- Cadastre as cidades com :\n");
  printf("codigo, area e populaçao.\n");

  for (i = 0; i < 5; i++)
  {
    setbuf (stdin,NULL);
    printf("--- %d - estado\n",i+1);
    printf("--- codigo\n---:>");
    fgets(estado[i].codigo, 49, stdin);
    fflush(stdin);
    setbuf (stdin,NULL);
    printf("--- Número da populaçao\n---:>");
    scanf("%d", &estado[i].ra);
    setbuf (stdin,NULL);
    printf("--- area\n---:>");
    fgets(estado[i].area, 99, stdin);
    printf("\n--- Próximo codigo ---\n");
  }

  printf("\n--- codigos cadastrados ---\n");

  for (i = 0; i < 5; i++)
  {
    printf("\n--- %d - estado\n",i+1);
    printf("--- codigo: %s",estado[i].codigo);
    printf("--- Número da populaçao: %d\n", estado[i].ra);
    printf("--- area: %s", estado[i].area);
  }
  

}