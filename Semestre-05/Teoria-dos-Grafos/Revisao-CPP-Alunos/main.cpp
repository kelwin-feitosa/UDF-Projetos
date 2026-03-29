#include <cstdio>

typedef struct Aluno {
    char nome[60];
    char sexo;
    int idade;
    float notas[3];
    float media;
    bool aprovado;
} Aluno;

int main() {
    Aluno Turma[100] = {};

    int i = 0, qtdAlunos = 0, qtdProvas = 0;
    int somaIdades = 0;
    float mediaAprovacao = 0;
    int totalMasc = 0, totalFem = 0;
    int aprovadosMasc = 0, aprovadosFem = 0;

    printf("Digite a quantidade de Alunos na turma: ");
    if (scanf("%d", &qtdAlunos) != 1) return 1;
    if (qtdAlunos > 100) qtdAlunos = 100;
    if (qtdAlunos <= 0) qtdAlunos = 1;

    printf("Digite a quantidade de Provas na turma: ");
    scanf("%d", &qtdProvas);
    if(qtdProvas <= 0) qtdProvas = 1;

    printf("Digite a media de Aprovacao: ");
    scanf("%f", &mediaAprovacao);

    while(i < qtdAlunos) {

        printf("Insira o Nome do Aluno: ");
        scanf(" %59[^\n]", Turma[i].nome);
        
        printf("Insira o gênero do Aluno (M/F): ");
        scanf(" %c", &Turma[i].sexo);
        
        printf("Insira a idade do Aluno: ");
        scanf("%d", &Turma[i].idade);
        somaIdades += Turma[i].idade;
        
        float somaNotas = 0;
        for(int j = 0; j < qtdProvas; j++) {
            printf("Nota %d. ", j+1);
            scanf("%f", &Turma[i].notas[j]);
            if(Turma[i].notas[j] < 0 || Turma[i].notas[j] > 10) {
                printf("\nNota inválida! Digite entre 0 e 10.\n");
                j--;
                continue;
            }
            somaNotas += Turma[i].notas[j];
        }
        
        Turma[i].media = somaNotas/qtdProvas;
        Turma[i].aprovado = (Turma[i].media >= mediaAprovacao);

        if(Turma[i].sexo == 'M' || Turma[i].sexo == 'm') {
            totalMasc++;
            if(Turma[i].aprovado) aprovadosMasc++;

        } else if(Turma[i].sexo == 'F' || Turma[i].sexo == 'f') {
            totalFem++;
            if(Turma[i].aprovado) aprovadosFem++;
        }
        
        while (getchar() != '\n');

        i++;
    }
  
    printf("-------------- RELATORIO FINAL -----------\n");

    printf("1) Total de Alunos Registrados: %d\n", qtdAlunos);

    printf("2) Media de Idade da Turma: %.2f. anos.\n", (float)somaIdades / qtdAlunos);

    printf("3) Media de Aprovacao por Sexo: \n");
    if (totalMasc > 0)
        printf("   - Masculino: %.2f%% aprovados\n", (float)aprovadosMasc * 100.0 / totalMasc);
    if (totalFem > 0)
        printf("   - Feminino:  %.2f%% aprovadas\n", (float)aprovadosFem * 100.0 / totalFem);

    printf("4) Lista de Status de Aprovação/Reprovação\n");

    for(int j = 0; j < qtdAlunos; j++) {
        printf("   [%s] %-20s - Media: %.2f (Idade: %d)\n",
                Turma[j].aprovado ? "Aprovado" : "Reprovado", Turma[j].nome,
                Turma[j].media, Turma[j].idade);
    }
}