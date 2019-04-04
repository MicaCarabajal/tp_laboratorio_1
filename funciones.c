int sumar(float x,float y)
    {
     int suma;
     suma=x+y;
     return suma;
    }
  int restar(float x,float y)
   {
     int resta;
     resta=x-y;
     return resta;
   }
  int multiplicar(float x,float y)
  {
     int multiplicacion;
     multiplicacion=x*y;
     return multiplicacion;
  }
  float dividir(float x,float y)
  {
    float division;
    division=x/y;
    return division;
  }
  float factorial(float x)
  {
    int i;
    int contador = 1;
    for ( i = 1; i <= x; i++)
    {
        contador = contador*i;
    }
   return contador;
  }


