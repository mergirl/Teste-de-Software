#include <stdio.h>

int main()
{
      int l1, l2, l3;

      printf ("informe tamanho do lado (A)do Triângulo: ");
      scanf("%d",&l1);
      printf ("informe tamanho do lado (B)do Triângulo: ");
      scanf("%d",&l2);
      printf ("informe tamanho do lado (C)do Triângulo: ");
      scanf("%d",&l3);

      if (l1 + l2 >= l3 && l1 + l3 >= l2 && l2 + l3 >= l1)
         {
          if (l1 == l2 && l2 == l3 && l3 == l1){
             printf ("Triangulo Equilatero");
             }
          else if (l1 == l2 || l2 == l3 || l3 == l1){
             printf ("Triangulo Isosceles");
             }
          else if (l1 != l2 && l2 != l3 && l3 != l1){
             printf ("Triangulo Escaleno");
             }
         }
      else
          printf ("Valores invalidos para formar um triangulo");
}