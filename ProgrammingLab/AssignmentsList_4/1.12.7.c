//Tarefa 1.12.7

#include <stdio.h>
#include <stdlib.h>

// 14 turmas existentes
// para cada turma -> (idTurma, nMatriculados) {Numero de matricula,[A ou P]}
// --> resultados
// para cada turma -> porcentagemAusencia, idTurma
// determine quantas tumas ausencia > 5%

int main() {
    char idTurma = '@';
    int matricula, AouP;

    float pAusTurmaA, pAusTurmaB, pAusTurmaC, pAusTurmaD, pAusTurmaE, pAusTurmaF, pAusTurmaG;
    float pAusTurmaH, pAusTurmaI, pAusTurmaJ, pAusTurmaK, pAusTurmaL, pAusTurmaM, pAusTurmaN;
    int turmasPorcentagemMaior = 0;

    int qtdAusentesTurmaA = 0, qtdPresentesTurmaA = 0;
    int qtdAusentesTurmaB = 0, qtdPresentesTurmaB = 0;
    int qtdAusentesTurmaC = 0, qtdPresentesTurmaC = 0;
    int qtdAusentesTurmaD = 0, qtdPresentesTurmaD = 0;
    int qtdAusentesTurmaE = 0, qtdPresentesTurmaE = 0;
    int qtdAusentesTurmaF = 0, qtdPresentesTurmaF = 0;
    int qtdAusentesTurmaG = 0, qtdPresentesTurmaG = 0;
    int qtdAusentesTurmaH = 0, qtdPresentesTurmaH = 0;
    int qtdAusentesTurmaI = 0, qtdPresentesTurmaI = 0;
    int qtdAusentesTurmaJ = 0, qtdPresentesTurmaJ = 0;
    int qtdAusentesTurmaK = 0, qtdPresentesTurmaK = 0;
    int qtdAusentesTurmaL = 0, qtdPresentesTurmaL = 0;
    int qtdAusentesTurmaM = 0, qtdPresentesTurmaM = 0;
    int qtdAusentesTurmaN = 0, qtdPresentesTurmaN = 0;

    int nMatriculadosA, nMatriculadosB, nMatriculadosC, nMatriculadosD, nMatriculadosE, nMatriculadosF, nMatriculadosG;
    int nMatriculadosH, nMatriculadosI, nMatriculadosJ, nMatriculadosK, nMatriculadosL, nMatriculadosM, nMatriculadosN;

    for (int c = 1; c <= 14; c++) {
        printf("\nTurma: ");
        idTurma = idTurma + 1;
        printf("%c", idTurma);

        printf("\nQuantos alunos estao matriculados? ");

        if (c == 1) {
            scanf("%d", &nMatriculadosA);
            for (int i = 1; i <= nMatriculadosA; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaA = qtdAusentesTurmaA + 1;
                } else {
                    qtdPresentesTurmaA = qtdPresentesTurmaA + 1;
                }
                printf("_______________");
            }
        }

        if (c == 2) {
            scanf("%d", &nMatriculadosB);
            for (int i = 1; i <= nMatriculadosB; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaB = qtdAusentesTurmaB + 1;
                } else {
                    qtdPresentesTurmaB = qtdPresentesTurmaB + 1;
                }
                printf("_______________");

            }
        }

        if (c == 3) {
            scanf("%d", &nMatriculadosC);
            for (int i = 1; i <= nMatriculadosC; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaC = qtdAusentesTurmaC + 1;
                } else {
                    qtdPresentesTurmaC = qtdPresentesTurmaC + 1;
                }
                printf("_______________");

            }
        }

        if (c == 4) {
            scanf("%d", &nMatriculadosD);
            for (int i = 1; i <= nMatriculadosD; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaD = qtdAusentesTurmaD + 1;
                } else {
                    qtdPresentesTurmaD = qtdPresentesTurmaD + 1;
                }
                printf("_______________");
            }
        }

        if (c == 5) {
            scanf("%d", &nMatriculadosE);
            for (int i = 1; i <= nMatriculadosE; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaE = qtdAusentesTurmaE + 1;
                } else {
                    qtdPresentesTurmaE = qtdPresentesTurmaE + 1;
                }
                printf("_______________");
            }
        }

        if (c == 6) {
            scanf("%d", &nMatriculadosF);
            for (int i = 1; i <= nMatriculadosF; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaF = qtdAusentesTurmaF + 1;
                } else {
                    qtdPresentesTurmaF = qtdPresentesTurmaF + 1;
                }
                printf("_______________");
            }
        }

        if (c == 7) {
            scanf("%d", &nMatriculadosG);
            for (int i = 1; i <= nMatriculadosG; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaG = qtdAusentesTurmaG + 1;
                } else {
                    qtdPresentesTurmaG = qtdPresentesTurmaG + 1;
                }
                printf("_______________");
            }
        }

        if (c == 8) {
            scanf("%d", &nMatriculadosH);
            for (int i = 1; i <= nMatriculadosH; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaH = qtdAusentesTurmaH + 1;
                } else {
                    qtdPresentesTurmaH = qtdPresentesTurmaH + 1;
                }
                printf("_______________");

            }
        }

        if (c == 9) {
            scanf("%d", &nMatriculadosI);
            for (int i = 1; i <= nMatriculadosI; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaI = qtdAusentesTurmaI + 1;
                } else {
                    qtdPresentesTurmaI = qtdPresentesTurmaI + 1;
                }
                printf("_______________");
            }
        }

        if (c == 10) {
            scanf("%d", &nMatriculadosJ);
            for (int i = 1; i <= nMatriculadosJ; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaJ = qtdAusentesTurmaJ + 1;
                } else {
                    qtdPresentesTurmaJ = qtdPresentesTurmaJ + 1;
                }
                printf("_______________");

            }
        }

        if (c == 11) {
            scanf("%d", &nMatriculadosK);
            for (int i = 1; i <= nMatriculadosK; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaK = qtdAusentesTurmaK + 1;
                } else {
                    qtdPresentesTurmaK = qtdPresentesTurmaK + 1;
                }
                printf("_______________");

                scanf("%d", &nMatriculadosK);
            }
        }

        if (c == 12) {
            scanf("%d", &nMatriculadosL);
            for (int i = 1; i <= nMatriculadosL; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaL = qtdAusentesTurmaL + 1;
                } else {
                    qtdPresentesTurmaL = qtdPresentesTurmaL + 1;
                }
                printf("_______________");
            }
        }

        if (c == 13) {
            scanf("%d", &nMatriculadosM);
            for (int i = 1; i <= nMatriculadosL; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaM = qtdAusentesTurmaM + 1;
                } else {
                    qtdPresentesTurmaM = qtdPresentesTurmaM + 1;
                }
                printf("_______________");
            }
        }

        if (c == 14) {
            scanf("%d", &nMatriculadosN);
            for (int i = 1; i <= nMatriculadosN; i++) {
                printf("\nDigite o numero da matricula: ");
                scanf("%d", &matricula);
                fflush(stdin);
                printf("O aluno esta presente?");
                scanf("%c", &AouP);
                if (AouP == 'A') {
                    qtdAusentesTurmaN = qtdAusentesTurmaN + 1;
                } else {
                    qtdPresentesTurmaN = qtdPresentesTurmaN + 1;
                }
                printf("_______________");

            }
        }

    }

    // DPS DO FOR O COMPUTADOR IRA ESTABELECER AS PORCENTAGENS:
    pAusTurmaA = (qtdAusentesTurmaA / nMatriculadosA)*100;
    pAusTurmaB = (qtdAusentesTurmaB / nMatriculadosB)*100;
    pAusTurmaC = (qtdAusentesTurmaC / nMatriculadosC)*100;
    pAusTurmaD = (qtdAusentesTurmaD / nMatriculadosD)*100;
    pAusTurmaE = (qtdAusentesTurmaE / nMatriculadosE)*100;
    pAusTurmaF = (qtdAusentesTurmaF / nMatriculadosF)*100;
    pAusTurmaG = (qtdAusentesTurmaG / nMatriculadosG)*100;
    pAusTurmaH = (qtdAusentesTurmaH / nMatriculadosH)*100;
    pAusTurmaI = (qtdAusentesTurmaI / nMatriculadosI)*100;
    pAusTurmaJ = (qtdAusentesTurmaJ / nMatriculadosJ)*100;
    pAusTurmaK = (qtdAusentesTurmaK / nMatriculadosK)*100;
    pAusTurmaL = (qtdAusentesTurmaL / nMatriculadosL)*100;
    pAusTurmaM = (qtdAusentesTurmaM / nMatriculadosM)*100;
    pAusTurmaN = (qtdAusentesTurmaN / nMatriculadosN)*100;

    printf("\n_________________________________");
    printf("\nResultados: ");

    idTurma = '@';
    for (int c = 1; c <= 14; c++ ) {
        printf("\nTurma: ");
        idTurma = idTurma + 1;
        printf("%c", idTurma);

        if (c == 1) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaA);
            if (pAusTurmaA > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 2) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaB);
            if (pAusTurmaB > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 3) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaC);
            if (pAusTurmaC > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 4) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaD);
            if (pAusTurmaD > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 5) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaE);
            if (pAusTurmaE > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 6) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaF);
            if (pAusTurmaF > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }
        if (c == 7) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaG);
            if (pAusTurmaG > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }
        if (c == 8) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaH);
            if (pAusTurmaA > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 9) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaI);
            if (pAusTurmaI > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 10) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaJ);
            if (pAusTurmaJ > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 11) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaK);
            if (pAusTurmaK > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }

        if (c == 12) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaL);
            if (pAusTurmaL > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }
        if (c == 13) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaM);
            if (pAusTurmaM > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }
        if (c == 14) {
            printf("\nPorcentagem de ausencia: %.2f", pAusTurmaN);
            if (pAusTurmaN > 5) {
                turmasPorcentagemMaior = turmasPorcentagemMaior + 1;
            }
        }
    }

    printf("\n%d Turmas tiveram ausencia superiror a 5 porcento", turmasPorcentagemMaior);

    return 0;
}
