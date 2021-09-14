    #include "pila.h"
/// Van las funciones

void apilar(Pila * p, int valor)
{
    int aux;
    aux=p->posTope;
    p->valores[aux]=valor;
    p->posTope+=1;
}

int desapilar(Pila *p)
{
    int aux;
    aux=p->valores[p->posTope-1];   /// -1 para leer el ultimo dato.
    p->posTope--;  /// Restamos 1 al tope
    return aux;
}

int tope(Pila * p)
{
    int aux;
    aux=p->valores[p->posTope-1]; /// Devolvemos el ultimo valor. (Nos paramos en la pos anterior y leemos el dato)
    return aux;
}


int pilavacia(Pila *p)
{
    return (p->posTope==0); /// ponemos 2 igual ya que tenemos comparar el valor.
}

void mostrar(Pila *p)
{
    int aux;
    for(int i=0;i<p->posTope; i++)
    {
        printf(" %d ",p->valores[i]);
    }
}
void leer(Pila *p)
{
    int aux=0;
    if(p->posTope<100)
    {
        printf("\n Ingrese un valor:\n");
        scanf("%d",&aux);
        apilar(p,aux);
    }
    else
    {
        printf("\n La pila esta llena\n");
    }
}

void inicPila(Pila *p)
{
    p->posTope=0;
    p->valores[100];
}
