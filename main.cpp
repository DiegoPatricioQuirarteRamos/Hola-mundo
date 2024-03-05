
#include<iostream>
#include<list>
using namespace std;

#include <Mascota.hpp>
#include <Dibujo.hpp>
#include <Alimento.hpp>

int main(int argc, char const *argv[])
{
    list<Dibujo> dibujos;
   Dibujo dibujo("./assets/nala.txt");
   dibujo.Dibujar();
   Dibujo dibujo2("./assets/pepe.txt");
   dibujo2.Dibujar();
   Dibujo dibujo3("./assets/juan.txt");
   dibujo3.Dibujar();
   
    // dibujos.push_front(dibujo);
    // dibujos.push_front(dibujo2);
    // dibujos.push_front(dibujo3);
    Mascota m1,m2,m3;

    list<Mascota> mascotas;
    mascotas.push_back(m1);
    mascotas.push_back(m2);
    mascotas.push_back(m3);
    Alimento alimento(5);
    for (auto &&mascotaActual : mascotas)
    {
        mascotaActual.Comer(alimento);
    }
    
    for(auto &&mascotaActual : mascotas)
    {

    cout<<"Mascota "<<mascotaActual.LeerEnergia()<<endl;

    }

    // m1.Comer(alimento);
    // m2.Comer(alimento);
    // m3.Comer(alimento);
    
    return 0;
}
