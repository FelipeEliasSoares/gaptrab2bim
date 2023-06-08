/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/class.cc to edit this template
 */

/* 
 * File:   Clinica.cpp
 * Author: felipe
 * 
 * Created on 8 de junho de 2023, 15:19
 */

#include "Clinica.h"
#include<iostream>

using namespace std;
Clinica::Clinica() {
}

Clinica::Clinica(const Clinica& orig) {
}

Clinica::~Clinica() {
}

void Clinica::MenuVet(){
    int opcao;
    do{
        cout << "1 - para Cadastro Veterinario: " << endl;
        cout << "2 - para Atualização do Cadastro do Veterinario: " << endl;
        cout << "3 - para Remover dados do Veterinario: " << endl;;
        cout << "4 - para Pesquisar Veterinario: " << endl;
        cout << "5 - para Listar os Veterinarios: " << endl;
        cout << "0 - SAIR: " << endl;
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                CadastroVet();
                break;
                
             case 2:
                AtualizarVet();
                break;
                
            case  3:
                RemoverVet();
                break;
                
            case  4:
                PesquisarVet();
                break;
                
            case  5:
                ListarVet();
                break;
        }
    } while (opcao != 0);
    
}


void Clinica::CadastroVet(){
    
    for(int i=0; i<3; i++){
        cout << "Digite o ID do veterinario: " << endl;
        cin >> this->dadosVet[i].id;         
        cout << "Digite o nome do Veterinario: " << endl;
        cin >> this->dadosVet[i].nome;
        cout << "Digite o CRMV: " << endl;
        cin >> this->dadosVet[i].crmv;
     
        cout << endl;

        
    }
}

void Clinica::AtualizarVet(){
    int id;
    cout << "Digite seu ID para atualizar: " << endl;
    cin >> id;
    
    for(int i=0; i<3; i++){
        
        if(dadosVet[i].id==id){
        cout << "Digite o ID do veterinario: " << endl;
        cin >> this->dadosVet[i].id;         
        cout << "Digite o nome do Veterinario: " << endl;
        cin >> this->dadosVet[i].nome;
        cout << "Digite o CRMV: " << endl;
        cin >> this->dadosVet[i].crmv;
    
        
        }
    }
} 

void Clinica::RemoverVet(){
    int id;
    cout << "Digite seu ID para remover os dados: " << endl;
    cin >> id;
    
    for(int i=0;i<3;i++){

        if(dadosVet[i].id== id){
            dadosVet[i].id = 0;
            dadosVet[i].nome ="";
            dadosVet[i].crmv ="";
            
        }
    }
} 





void Clinica::PesquisarVet(){
    bool encontrado = false;
    int id;
    cout << "Digite seu ID para pesquisa: " << endl;
    cin >> id;

    
    for(int i=0;i<3;i++){

        if(dadosVet[i].id==id){
            cout << endl;
            
            cout << "ID: " << this->dadosVet[i].id << endl; 
            cout << "Nome: " << this->dadosVet[i].nome << endl;
            cout << "CRMV: " << this->dadosVet[i].crmv << endl;
           
            cout << endl;
        }
            
            encontrado=true;
        }
        if(!encontrado){
            cout<<"Nao encontrado" << endl;
        }
    } 

void Clinica :: ListarVet(){
    
    
    for(int i=0; i<3; i++){
          
        cout << "ID : " << this->dadosVet[i].id << endl;
                 
        cout << "Nome : " << this->dadosVet[i].nome << endl;
        
        cout << "CRMV : " << this->dadosVet[i].crmv << endl;
        
        cout << endl;
        
    
        }
    
    
}

