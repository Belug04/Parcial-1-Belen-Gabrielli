#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    ///Ejercicio 1
    ///  1. Declaro e inicilalizo las variables num1 y num2 como variables de tipo float.
    ///  2. Declaro las variables resultado de tipo float.
    ///  3. Le pido al usuario que ingrese los numeros.
    ///  4. Inicilaizo a las variables resultado con las operaciones basicas de la matematica.
    ///  5. Muestro al usuario los resultados de las operaciones basicas.

    /*float num1=0;
    float num2=0;
    float resultado;
    float resultado1;
    float resultado2;
    float resultado3;


    cout<<"Ingrese el primer numero: "<<endl;
    cin>>num1;

    cout<<"Ingrese el segundo numero: "<<endl;
    cin>>num2;

   if(num1 == 0 || num2 == 0)
   {
       cout<<"No se puede dividir por 0 un numero"<<endl;
   }else{
    resultado=num1 + num2;
    resultado1= num1 - num2;
    resultado2= num1 * num2;
    resultado3= num1 / num2;

    cout<< "La suma de los dos numeros es de: " <<resultado<<endl;
    cout<< "La resta de los dos numeros es de:" <<resultado1<<endl;
    cout<< "La multiplicacion de los dos numeros es de: "<<resultado2<<endl;
    cout<< "La division  de los dos numeros es de: "<<resultado3<<endl;}*/

  ///Ejercicio 2
  /// 1. Declaro e inicializo la variable "anio" de tipo int
  /// 2. Le pido al usuario que ingrese un año.
  /// 3. Pregunto con un IF si el anio el año al dividirlo por 4 o por 400 el resto es estrictamente igual a cero,
  ///    muestro por pantalla que es un año bisiesto.
  /// 4. Hago un else if preguntando si la division por 100, el resto es distinto de cero, muestro por pantalla
  ///    que no es un anio bisiesto.


  /*int anio=0;
  cout<<"Ingrese el anio que desea saber si es bisiesto"<<endl;
  cin>>anio;

  if(anio %4 == 0 && anio %400 == 0)
  {
      cout<<"Es un anio bisiesto"<<endl;
  }else if(anio %100 != 0)
  {
      cout<<"No es un anio bisiesto"<<endl;
  }*/


///Ejercicio 3

  /*unsigned long long fact= 1;
  int factorial=0;

  cout<<"Ingrese un factor: "<<endl;
  cin>>factorial;
if(factorial == 0 || factorial == 1)
{
    fact=1;
    cout<<fact;
}
 for(int i = 1; i<=factorial;i--)
 {
     cout<<factorial*i;
 }*/

///Ejercicio 4
/// 1. Declaro la variable "cantmaterias" de tipo int.
/// 2. Declaro e inicializo las variables "promedio ponderado y "sumaponderada" como double.
/// 3. Le pedimos al usuario que ingrese la cantidad de materias.
/// 4. Hacemos un FOR para que vaya recorriendo la cantidad de materias y en cada una vaya poniendo el nombre,
///    la nota y la ponderacion. Ademas asignaremos a la variable "promedioponderado" la mulplicacion de la nota por
///    la ponderacion y a su vez le asignaremos a "sumaponderada" la ponderacion ingresada por el usuario.
/// 5. Le asignaremos a "promedioponderado" la division del mismo por la variable "sumaponderada".
/// 6. Haremos que el resultado se muestre con dos decimales con fixed y setprecision.
/// 7. Mostreremos el promedio final.

   /* int cantmaterias;
    double promedioponderado = 0.0;
    double sumaponderada = 0.0;

    cout << "Ingrese la cantidad de materias: " << endl;
    cin >> cantmaterias;

    for (int i = 1; i <= cantmaterias; i++)
    {
        string nombremateria;
        double nota;
        double ponderacion;

        cout << "Ingrese el nombre de la materia " << i << ": ";
        cin >> nombremateria;

        cout << "Ingrese la nota de la materia " << i << ": ";
        cin >> nota;
        if(nota<0)
        {
            cout<<"No puede ingresar una nota negativa ";
        }else{

        cout << "Ingrese la ponderacion de la materia " << i << ": ";
        cin >> ponderacion;


         promedioponderado = nota * ponderacion;
        sumaponderada = ponderacion;}

    }


    promedioponderado = promedioponderado / sumaponderada;

    cout << fixed << setprecision(2)<<promedioponderado;
    cout <<"El promedio ponderado final es: " << promedioponderado<< endl;*/



  return 0;

}
