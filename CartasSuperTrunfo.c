#include <stdio.h>

int main()
{
    unsigned long int populacaoA, populacaoB;
    int pontosTuristicosA, pontosTuristicosB;
    float areaA, areaB, densidadeA, densidadeB;
    double pibA, pibB, pibPerCapitaA, pibPerCapitaB, superPoderA, superPoderB;
    int escolha, escolha2, pontosA = 0, pontosB = 0;

    printf("\n-------- SUPER TRUNFO --------\n");

    // Cadastro da Carta A
    printf("\nInsira a quantidade populacional do país A: ");
    scanf("%lu", &populacaoA);
    printf("Insira a Área do país A (em km²): ");
    scanf("%f", &areaA);
    printf("Insira o PIB do país A (em trilhões): ");
    scanf("%lf", &pibA);
    printf("Insira a quantidade de pontos turísticos do país A: ");
    scanf("%d", &pontosTuristicosA);

    densidadeA = (float)populacaoA / areaA;
    pibPerCapitaA = pibA * 1e12 / populacaoA;  // PIB per capita em valores reais

    // Cadastro da Carta B
    printf("\n--------  Informações da Carta B  --------\n");
    printf("\nInsira a quantidade populacional do país B: ");
    scanf("%lu", &populacaoB);
    printf("Insira a Área do país B (em km²): ");
    scanf("%f", &areaB);
    printf("Insira o PIB do país B (em trilhões): ");
    scanf("%lf", &pibB);
    printf("Insira a quantidade de pontos turísticos do país B: ");
    scanf("%d", &pontosTuristicosB);

    densidadeB = (float)populacaoB / areaB;
    pibPerCapitaB = pibB * 1e12 / populacaoB;  // PIB per capita em valores reais

    // Cálculo do Super Poder
    superPoderA = (double)populacaoA + areaA + pibA * 1e12 + pontosTuristicosA + (1 / densidadeA) + pibPerCapitaA;
    superPoderB = (double)populacaoB + areaB + pibB * 1e12 + pontosTuristicosB + (1 / densidadeB) + pibPerCapitaB;

    // Escolha do primeiro atributo
    printf("\nEscolha o atributo para comparação:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - Número de Pontos Turísticos\n");
    scanf("%d", &escolha);

    printf("\n-------- Resultado da Primeira Comparação --------\n");

    switch (escolha)
    {
    case 1:
        printf("Atributo: População\nPaís A: %lu habitantes\nPaís B: %lu habitantes\n", populacaoA, populacaoB);
        if (populacaoA > populacaoB)
            pontosA++;
        else if (populacaoA < populacaoB)
            pontosB++;
        break;
    case 2:
        printf("Atributo: Área\nPaís A: %.2f km²\nPaís B: %.2f km²\n", areaA, areaB);
        if (areaA > areaB)
            pontosA++;
        else if (areaA < areaB)
            pontosB++;
        break;
    case 3:
        printf("Atributo: PIB\nPaís A: %.2lf trilhões\nPaís B: %.2lf trilhões\n", pibA, pibB);
        if (pibA > pibB)
            pontosA++;
        else if (pibA < pibB)
            pontosB++;
        break;
    case 4:
        printf("Atributo: Densidade Populacional\nPaís A: %.2f hab/km²\nPaís B: %.2f hab/km²\n", densidadeA, densidadeB);
        if (densidadeA < densidadeB)  // Menor densidade vence
            pontosA++;
        else if (densidadeA > densidadeB)
            pontosB++;
        break;
    case 5:
        printf("Atributo: Pontos Turísticos\nPaís A: %d locais\nPaís B: %d locais\n", pontosTuristicosA, pontosTuristicosB);
        if (pontosTuristicosA > pontosTuristicosB)
            pontosA++;
        else if (pontosTuristicosA < pontosTuristicosB)
            pontosB++;
        break;
    default:
        printf("Opção inválida. Selecione um número de 1 a 5.\n");
        return 0;
    }

    // Escolha do segundo atributo (diferente do primeiro)
    do
    {
        printf("\nEscolha o segundo atributo para comparação (diferente do primeiro):\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Densidade Populacional\n5 - Número de Pontos Turísticos\n");
        scanf("%d", &escolha2);

        if (escolha == escolha2)
        {
            printf("Para fazer a comparação, os atributos devem ser diferentes. Tente novamente.\n");
        }

    } while (escolha == escolha2);

    printf("\n-------- Resultado da Segunda Comparação --------\n");

    switch (escolha2)
    {
    case 1:
        printf("Atributo: População\nPaís A: %lu habitantes\nPaís B: %lu habitantes\n", populacaoA, populacaoB);
        if (populacaoA > populacaoB)
            pontosA++;
        else if (populacaoA < populacaoB)
            pontosB++;
        break;
    case 2:
        printf("Atributo: Área\nPaís A: %.2f km²\nPaís B: %.2f km²\n", areaA, areaB);
        if (areaA > areaB)
            pontosA++;
        else if (areaA < areaB)
            pontosB++;
        break;
    case 3:
        printf("Atributo: PIB\nPaís A: %.2lf trilhões\nPaís B: %.2lf trilhões\n", pibA, pibB);
        if (pibA > pibB)
            pontosA++;
        else if (pibA < pibB)
            pontosB++;
        break;
    case 4:
        printf("Atributo: Densidade Populacional\nPaís A: %.2f hab/km²\nPaís B: %.2f hab/km²\n", densidadeA, densidadeB);
        if (densidadeA < densidadeB)  // Menor densidade vence
            pontosA++;
        else if (densidadeA > densidadeB)
            pontosB++;
        break;
    case 5:
        printf("Atributo: Pontos Turísticos\nPaís A: %d locais\nPaís B: %d locais\n", pontosTuristicosA, pontosTuristicosB);
        if (pontosTuristicosA > pontosTuristicosB)
            pontosA++;
        else if (pontosTuristicosA < pontosTuristicosB)
            pontosB++;
        break;
    default:
        printf("Opção inválida.\n");
        return 0;
    }

    // Comparando o Super Poder
    if (superPoderA > superPoderB)
        pontosA++;
    else if (superPoderA < superPoderB)
        pontosB++;

    // Determinação do vencedor final
    printf("\n-------- Resultado Final --------\n");
    printf("Pontos do País A: %d\n", pontosA);
    printf("Pontos do País B: %d\n", pontosB);

    if (pontosA > pontosB)
        printf("VENCEDOR FINAL: País A! 🏆\n");
    else if (pontosA < pontosB)
        printf("VENCEDOR FINAL: País B! 🏆\n");
    else
        printf("O JOGO TERMINOU EMPATADO! 🤝\n");

    return 0;
}
