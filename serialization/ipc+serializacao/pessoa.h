#include<string>
#include <memory>
#include <iostream>
#include <sstream>

using namespace std;

class Pessoa {
      private:
              string nome;
              char sexo;
              int idade;
      public:
             typedef std::auto_ptr<Pessoa> Ptr;
             Pessoa();
             Pessoa(string nome, char sexo, int idade);
             ~Pessoa();
             string get_nome();
             void set_nome(string vNome);
             char get_sexo();     
             void set_sexo(char vSexo);
             int get_idade();
             void set_idade(int vIdade);
             void faca_aniversario();
             bool ehIgual(Pessoa::Ptr outra);
            //void serialize(ostream& serial_rep);
            void serialize(ostringstream& serial_rep);      
            static Pessoa::Ptr unserialize(string& serial_rep);
};
