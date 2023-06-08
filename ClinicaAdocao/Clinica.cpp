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

Clinica::Clinica() {
}

Clinica::Clinica(const Clinica& orig) {
}

Clinica::~Clinica() {
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

