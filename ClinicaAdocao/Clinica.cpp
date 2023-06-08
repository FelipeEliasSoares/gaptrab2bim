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


void Clinica::AgendarConsulta(){
    
    int ValorHoras,ValorData, aux_id_veterinario, aux_id_animal,id_consulta;
    
    
    cout<<"Digite a id da Consulta a ser Agendada: ";
    cin>>id_consulta;
    
    cout<<"Digite a hora a ser Agendada: ";
    cin>>ValorHoras;

    cout<<"Digite a data a ser Agendada: ";
    cin>>ValorData;
    
    
    
    //aux_id_veterinario= cVeterinario.Pesquisar();
    //aux_id_animal= Pet.Pesquisar();
    
    
    atende_hora* novo_atendimento = new atende_hora;
    novo_atendimento->hora = ValorHoras;
    novo_atendimento->data = ValorData;
    novo_atendimento->id_consulta = id_consulta;
    novo_atendimento->id_veterinario = NULL;
    novo_atendimento->id_animal = NULL;
    novo_atendimento->proximo_atendimento = NULL;
    
    if(id_atendimento == NULL){
        id_atendimento = novo_atendimento;
    }else{  
        atende_hora* ultimo_atendimento = id_atendimento;
        
        while (ultimo_atendimento->proximo_atendimento != NULL) {
                ultimo_atendimento = ultimo_atendimento->proximo_atendimento;
        }
        
        ultimo_atendimento->proximo_atendimento = novo_atendimento;    
    } 
}


void Clinica :: ListarConsulta(){
    int opc;
    cout << "Digite:" << endl;
    cout << "1 - para listar desde a Primeira Consulta" << endl;
    cout << "2 - para listar desde a Última Consulta" << endl;
    cout << "Digite: ";
    cin >> opc;
    
    if (opc == 1) {
        atende_hora* atual = id_atendimento;
        while (atual != NULL) {
            cout << "Hora: " << atual->hora << endl;
            cout << "Data: " << atual->data << endl;
            // Mostrar outras informações do struct, se houver
            cout << endl;
            atual = atual->proximo_atendimento;
        }
    } else {
        atende_hora* atual = id_atendimento;
        if (atual != NULL) {
            while (atual->proximo_atendimento != NULL) {
                atual = atual->proximo_atendimento;
            }
            while (atual != NULL) {
                cout << "Hora: " << atual->hora << endl;
                cout << "Data: " << atual->data << endl;
                // Mostrar outras informações do struct, se houver
                cout << endl;
                atual = atual->id_animal;
            }
        }
    }     
}


void Clinica::RemoverConsulta() {
    int id;
    cout << "Digite o ID da consulta a ser removida: ";
    cin >> id;
    
    atende_hora* anterior = NULL;
    atende_hora* atual = id_atendimento;
    
    // Procurar o nó com o ID fornecido
    while (atual != NULL && atual->id_consulta != id) {
        anterior = atual;
        atual = atual->proximo_atendimento;
    }
    
    // Verificar se encontrou o nó com o ID fornecido
    if (atual != NULL) {
        // Remover o nó da lista
        if (anterior == NULL) {
            // O nó a ser removido é o primeiro da lista
            id_atendimento = atual->proximo_atendimento;
        } else {
            // O nó a ser removido não é o primeiro da lista
            anterior->proximo_atendimento = atual->proximo_atendimento;
        }
        
        // Liberar a memória alocada pelo nó removido
        delete atual;
        
        cout << "Consulta removida com sucesso!" << endl;
    } else {
        cout << "Consulta com o ID fornecido não encontrada." << endl;
    }
}

void Clinica::PesquisarConsulta() {
    int id;
    cout << "Digite o ID da consulta a ser pesquisada: ";
    cin >> id;
    
    atende_hora* consulta = id_atendimento;
    
    while (consulta != NULL) {
        if (consulta->id_consulta == id) {
            cout << "ID da Consulta: " << consulta->id_consulta << endl;
            cout << "Hora: " << consulta->hora << endl;
            cout << "Data: " << consulta->data << endl;
            // Exibir outras informações relevantes, como id_veterinario e id_animal, se necessário
            return; // Retorna após encontrar a consulta com o ID correspondente
        }
        
        consulta = consulta->proximo_atendimento;
    }
    
    cout << "Consulta com o ID fornecido não encontrada." << endl;
}


void Clinica :: Menu(){
    int opc;
    while(opc!=0){
        switch(opc){
            case 1:
                this->AgendarConsulta();
            break;
            case 2:
                this->ListarConsulta();
            break;
            case 3:
                this->RemoverConsulta();
    };
    cout<<endl;
    cout<<"Digete\n1-Cadastrar:\n2-Listar\n3-Remover\n0-Sair\n\nDigite:";
    cin>>opc;
    }
}




