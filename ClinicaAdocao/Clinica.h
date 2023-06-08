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

#include<iostream>

using namespace std;


class Clinica {
public:
    Clinica();
    Clinica(const Clinica& orig);
    virtual ~Clinica();
    
    struct atende_hora{
        int hora;
        int data;
        int id_consulta;
        atende_hora* id_veterinario;
        atende_hora* id_animal;
        atende_hora* proximo_atendimento;       
    };
    
    atende_hora* id_atendimento = NULL;
    
    atende_hora *novo_atendimento,*ultimo_atendimento = NULL;
    
    void Menu();
    void AgendarConsulta();
    void PesquisarConsulta();
    void ListarConsulta();
    void RemoverConsulta();
    
private:

};

#endif /* CLINICA_H */

