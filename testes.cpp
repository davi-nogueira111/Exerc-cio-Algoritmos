#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
 
float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}
 
int main() {
    string nomes[5];
    float nota1[5], nota2[5], nota3[5], medias[5];
    int quantos;
 
    cout<<"Quantos alunos? (maximo 5): ";
    cin>>quantos;
 
    for(int i = 0; i<quantos; i++) {
        cout<<"\nDigite o nome do aluno "<<i+1<<": ";
        cin>>nomes[i];
        cout<<"Digite as 3 notas de "<<nomes[i]<<": ";
        cin>>nota1[i]>>nota2[i]>>nota3[i];
 
        medias[i] = calcularMedia(nota1[i], nota2[i], nota3[i]);
    }

    cout<<fixed<<setprecision(1);
 
    cout<<"\n";
    cout<<left<<setw(15)<<"ALUNO"
        <<right<<setw(6)<<"N1"
                <<setw(6)<<"N2"
                <<setw(6)<<"N3"
                <<setw(8)<<"MEDIA"
        <<left<<"  SITUACAO"
        <<"\n";
    cout<<"----------------------------------------------------\n";
 
    for(int i = 0; i < quantos; i++) {
        cout<<left<<setw(15)<<nomes[i]
            <<right<<setw(6)<<nota1[i]
                << setw(6)<<nota2[i]
                << setw(6)<< nota3[i]
                << setw(8)<< medias[i]
            <<left<<"  ";
 
        if(medias[i]>=7) {
            cout<<"Aprovado\n";
        }else{
            cout<<"Reprovado\n";
        }
    }

    int maiorMedia = 0;
    for(int i = 1; i<quantos; i++) {
        if(medias[i]>medias[maiorMedia]) {
            maiorMedia = i;
        }
    }
 
    cout<<"\nAluno com maior media: "<<nomes[maiorMedia];
    cout<<" ("<<medias[maiorMedia]<<")\n";
 
    return 0;
}