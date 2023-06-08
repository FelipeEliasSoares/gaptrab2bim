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

void Clinica::MenuPet(){
    int opcao;
    do{
        cout << "1 - para Cadastro Animal: " << endl;
        cout << "2 - para Atualização do Cadastro do Animal: " << endl;
        cout << "3 - para Remover dados do Animal: " << endl;;
        cout << "4 - para Pesquisar Animal: " << endl;
        cout << "5 - para Listar os Pets: " << endl;
        cout << "0 - SAIR: " << endl;
        cin >> opcao;
        
        switch(opcao) {
            case 1:
                CadastroPet();
                break;
                
             case 2:
                AtualizarPet();
                break;
                
            case 3:
                RemoverPet();
                break;
                
            case 4:
                PesquisarPet();
                break;
            
            case 5:
                ListarPet();
                break;
        }
    } while (opcao!=0);
    
}


void Clinica::CadastroPet(){
    
    for(int i=0; i<3; i++){
        cout << "Digite o ID do animal: " << endl;
        cin >> this->DadosAnimal[i].id;         
        cout << "Digite o nome do Animal: " << endl;
        cin >> this->DadosAnimal[i].nomepet;
        cout << "Digite o nome do DONO do animal: " << endl;
        cin >> this->DadosAnimal[i].nomedono;
        cout << "Digite o tipo do animal: " << endl;
        cin >> this->DadosAnimal[i].tipo;
        cout << "Digite a raça do animal: " << endl;
        cin >> this->DadosAnimal[i].raca;
        cout << "Digite o telefone do Dono: " << endl;
        cin >> this->DadosAnimal[i].telefonedono;

        cout << endl;

    }
}

void Clinica::AtualizarPet(){
    int id;
    cout << "Digite seu ID para atualizar: " << endl;
    cin >> id;
    
    for(int i=0; i<3; i++){
        
        if(DadosAnimal[i].id==id){
        cout << "Digite o ID do animal: " << endl;
        cin >> this->DadosAnimal[i].id;         
        cout << "Digite o nome do Animal: " << endl;
        cin >> this->DadosAnimal[i].nomepet;
        cout << "Digite o nome do DONO do animal: " << endl;
        cin >> this->DadosAnimal[i].nomedono;
        cout << "Digite o tipo do animal: " << endl;
        cin >> this->DadosAnimal[i].tipo;
        cout << "Digite a raça do animal: " << endl;
        cin >> this->DadosAnimal[i].raca;
        cout << "Digite o telefone do Dono: " << endl;
        cin >> this->DadosAnimal[i].telefonedono;
        }
    }
} 

void Clinica::RemoverPet(){
    int id;
    cout << "Digite seu ID para remover os dados: " << endl;
    cin >> id;
    
    for(int i=0;i<3;i++){

        if(DadosAnimal[i].id==id){
            this->DadosAnimal[i].id=0; 
            this->DadosAnimal[i].nomepet="";
            this->DadosAnimal[i].nomedono="";
            this->DadosAnimal[i].tipo="";
            this->DadosAnimal[i].raca="";
            this->DadosAnimal[i].telefonedono=0;
            
            
        }
    }
} 





void Clinica::PesquisarPet(){
    bool encontrado = false;
    int id;
    cout << "Digite seu ID para pesquisa: " << endl;
    cin >> id;

    
    for(int i=0;i<3;i++){

        if(DadosAnimal[i].id==id){
            cout << endl;
            cout << "ID: " << this->DadosAnimal[i].id << endl; 
            cout << "Nome: " << this->DadosAnimal[i].nomepet << endl;
            cout << "Dono: " << this->DadosAnimal[i].nomedono << endl;
            cout << "Tipo: " << this->DadosAnimal[i].tipo << endl;
            cout << "Raça: " << this->DadosAnimal[i].raca << endl;
            cout << "Telefone: " << this->DadosAnimal[i].telefonedono << endl;
            cout << endl;
        }
            
            encontrado=true;
        }
        if(!encontrado){
            cout<<"Nao encontrado";
        }
    } 

void Clinica::ListarPet(){
    
    for(int i=0;i<3;i++){
        
         cout << endl;
         cout << "ID: " << this->DadosAnimal[i].id << endl; 
         cout << "Nome: " << this->DadosAnimal[i].nomepet << endl;
         cout << "Dono: " << this->DadosAnimal[i].nomedono << endl;
         cout << "Tipo: " << this->DadosAnimal[i].tipo << endl;
         cout << "Raça: " << this->DadosAnimal[i].raca << endl;
         cout << "Telefone: " << this->DadosAnimal[i].telefonedono << endl;
         cout << endl;
    }
}
