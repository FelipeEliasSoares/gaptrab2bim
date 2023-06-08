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
#include <string.h>
#include<stdio.h>


using namespace std;

class Clinica {
public:

    struct Animal{
            int id;
            string nomedono, nomepet;
            string raca, tipo;
            long int telefonedono;   
    }DadosAnimal[3];
    		    


    struct Veterinario{
        int id;
        string nome;
        string crmv;
           
    }dadosVet[3];
    
    
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
    
    
    void CadastroVet();
    void AtualizarVet();
    void RemoverVet();
    void PesquisarVet();
    void MenuVet();
    void ListarVet();
    int PesquisarVeterinario2(); 


    void MenuConsulta();
    void AgendarConsulta();
    void PesquisarConsulta();
    void ListarConsulta();
    void RemoverConsulta();



    void CadastroPet();
    void AtualizarPet();
    void RemoverPet();
    void PesquisarPet();
    void MenuPet();
    void ListarPet();	
    int PesquisarPet2();
    
    void Menu();
    
    Clinica();
    Clinica(const Clinica& orig);
    virtual ~Clinica();
    
private:

};

#endif /* CLINICA_H */

