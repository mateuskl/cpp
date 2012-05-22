#include "pessoa.h"

Pessoa::Pessoa() {
                 nome = "";
                 sexo = 'x';
                 idade = 0;
}

Pessoa::Pessoa(string nome, char sexo, int idade) {
    this->nome = nome;
    this->sexo = sexo;
    this->idade = idade;
}

Pessoa::~Pessoa() {}

string Pessoa::get_nome() { 
       return nome;
}

void Pessoa::set_nome(string vNome) {
     nome = vNome;
}

char Pessoa::get_sexo() { 
     return sexo; 
}

void Pessoa::set_sexo(char vSexo) {
     sexo = vSexo;
}

int Pessoa::get_idade() {
    return idade;
}

void Pessoa::set_idade(int vIdade) {
     idade = vIdade;
}

void Pessoa::faca_aniversario() {
     idade ++;
}

bool Pessoa::ehIgual(Pessoa::Ptr outra) {
    return  (nome == outra->get_nome()) &&
            (sexo == outra->get_sexo()) &&
            (idade == outra->get_idade())
    ;
}

/*void Pessoa::serialize(ostream& serial_rep) {
    serial_rep << nome << sexo << idade;
}*/

void Pessoa::serialize(ostringstream& serial_rep) {
    serial_rep << nome << " " << "$" << " " << sexo << " " << idade;
}

Pessoa::Ptr Pessoa::unserialize(string& serial_rep) {
    string v_nome;
    char v_sexo;
    int v_idade;
    string aux;
    
    istringstream rep_serial(serial_rep);
    rep_serial >> aux;
    v_nome = aux;
    
    for (int i = 0; i < 50 ; i++) {
        rep_serial >> aux;        
        if (aux == "$") break;
        v_nome = v_nome + " " +aux;
    }
    
    rep_serial >> v_sexo;
    rep_serial >> v_idade;
    Pessoa::Ptr umaPessoa (new Pessoa(v_nome, v_sexo, v_idade));
    return umaPessoa;    
}
