/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.h to edit this template
 */

/* 
 * File:   Clinica.h
 * Author: felipe
 *
 * Created on 8 de junho de 2023, 15:19
 */

#ifndef CLINICA_H
#define CLINICA_H

#include<stdio.h>
#include<iostream>
#include <string.h>

using namespace std;

class Clinica {
public:
    
            struct Animal{
            int id;
            string nomedono, nomepet;
            string raca, tipo;
            long int telefonedono;   
    };
    
    Animal  DadosAnimal[3];
    
    Clinica();
    Clinica(const Clinica& orig);
    virtual ~Clinica();
    
    void CadastroPet();
    void AtualizarPet();
    void RemoverPet();
    void PesquisarPet();
    void MenuPet();
    void ListarPet();

private:

};

#endif /* CLINICA_H */

