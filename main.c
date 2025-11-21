#include <stdio.h>
#define MAX 20
// ---------- ESTRUTURA DO PRODUTO ----------
typedef struct {
char nome[50];
int quantidade;
float preco,total,desconto,valorFinal;
} Produto;
// ---------- ADICIONAR PRODUTO ----------
void adicionarProduto(Produto *p) {
printf(" Digite o nome do produto: ");
scanf("%s", p->nome);
printf("Digite o preço do produto: ");
scanf("%f", &p->preco);
printf("Digite a quantidade: ");
scanf("%d", &p->quantidade);
}
// ---------- CALCULAR TOTAL -------------
void calcularTotal(Produto *p) {
p->total = p->preco * p->quantidade;
}
// ---------- APLICAR DESCONTO ------------
void aplicarDesconto(Produto *p) {
if (p->total <= 100) {
p->desconto = 0;
} else if (p->total > 100 & p->total <= 250) {
p->desconto = 0.05;
} else if (p->total > 250 & p->total <= 500) {
p->desconto = 0.10;
} else {
p->desconto = 0.15;
}
p->valorFinal = p->total - (p->total * p->desconto);
}
// ---------- EMITIR NOTA FISCAL ----------
void emitirNotaFiscal(Produto produtos[], int qtd, float totalGeral) {
printf(" ======== NOTA FISCAL ======== \n");
for (int i = 0; i < qtd; i++) {
printf("***Produto %d*** \n", i + 1);
printf("Nome: %s \n", produtos[i].nome);
printf("Preço: R$ %.2f \n", produtos[i].preco);
printf("Quantidade: %d \n", produtos[i].quantidade);
printf("Total Bruto: R$ %.2f \n", produtos[i].total);
printf("Desconto: %.0f%% \n", produtos[i].desconto * 100);
printf("Valor Final: R$ %.2f \n", produtos[i].valorFinal);
}
printf("***Valor Final da compra: R$ %.2f*** \n", totalGeral);

}
// ------------MENU-----------
int main() {
Produto produtos[MAX];
int opcao, i = 0;
float totalGeral = 0;
do {
printf(" ===== MENU ===== \n");
printf("1 - Adicionar Produto \n");
printf("2 - Emitir Nota Fiscal \n");
printf("0 - Sair\n");
printf("Escolha uma opção: \n");
scanf("%d", &opcao);
if (opcao == 1) {
if (i >= MAX) {
printf("Limite máximo de produtos atingido! \n");
} else {
adicionarProduto(&produtos[i]);
calcularTotal(&produtos[i]);
aplicarDesconto(&produtos[i]);
totalGeral += produtos[i].valorFinal;
i++;
}
}
else if (opcao == 2) {
if (i == 0) {
printf(" Nenhum produto cadastrado! \n");
} else {
emitirNotaFiscal(produtos, i, totalGeral);
}
}
} while (opcao != 0);
printf(" Programa encerrado. \n");
return 0;
}