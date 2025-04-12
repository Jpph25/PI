typedef struct item {
    int id;
    char nome[100];
    char * ingredientes[5];
    float preco;  
} Produto;

Produto menu[] = {
{1, "Panqueca Simples", {"Farinha", "Ovos", "Leite", "Açúcar", "Fermento"}, 3.50},{2, "Panqueca de Chocolate", {"Farinha", "Ovos", "Leite", "Chocolate", "Fermento"}, 4.00},{3, "Panqueca de Banana", {"Farinha", "Ovos", "Leite", "Banana", "Fermento"}, 4.20},{4, "Panqueca de Aveia", {"Aveia", "Ovos", "Leite", "Mel", "Fermento"}, 4.50},{5, "Panqueca de Canela", {"Farinha de amêndoa", "Ovos", "Leite", "Canela", "Fermento"}, 4.01},{6, "Crepe Simples", {"Farinha", "Ovos", "Leite", "Açúcar", "Manteiga"}, 3.80},{7, "Crepe de Nutella", {"Farinha", "Ovos", "Leite", "Nutella", "Manteiga"}, 5.00},{8, "Crepe de Morango", {"Farinha", "Ovos", "Leite", "Morango", "Manteiga"}, 5.20},{9, "Crepe de Doce de Leite", {"Farinha", "Ovos", "Leite", "Doce de Leite", "Manteiga"}, 5.50},{10, "Crepe de Mel e Nozes", {"Farinha", "Ovos", "Leite", "Mel", "Nozes"}, 5.80},{11, "Bolo de Chocolate", {"Farinha", "Ovos", "Açúcar", "Chocolate", "Fermento"}, 4.51},{12, "Bolo de Cenoura", {"Farinha", "Ovos", "Cenoura", "Açúcar", "Fermento"}, 4.30},{13, "Bolo de Baunilha", {"Farinha", "Ovos", "Leite", "Baunilha", "Fermento"}, 4.21},{14, "Bolo de Limão", {"Farinha", "Ovos", "Leite", "Limão", "Fermento"}, 4.40},{15, "Bolo de Coco", {"Farinha", "Ovos", "Leite de Coco", "Açúcar", "Fermento"}, 4.60},{16, "Muffin de Chocolate", {"Farinha", "Ovos", "Chocolate", "Açúcar", "Fermento"}, 3.51},{17, "Muffin de Mirtilo", {"Farinha", "Ovos", "Mirtilo", "Açúcar", "Fermento"}, 3.81},{18, "Muffin de Banana", {"Farinha", "Ovos", "Banana", "Açúcar", "Fermento"}, 3.70},{19, "Muffin de Noz", {"Farinha", "Ovos", "Nozes", "Açúcar", "Fermento"}, 3.90},{20, "Croissant Simples", {"Farinha", "Manteiga", "Açúcar", "Fermento", "Sal"}, 3.52},{21, "Croissant de Chocolate", {"Farinha", "Manteiga", "Chocolate", "Açúcar", "Fermento"}, 4.22},{22, "Croissant de Amêndoas", {"Farinha", "Manteiga", "Amêndoas", "Açúcar", "Fermento"}, 4.52},{23, "Croissant de Queijo", {"Farinha", "Manteiga", "Queijo", "Sal", "Fermento"}, 4.61},{24, "Croissant de Fiambre", {"Farinha", "Manteiga", "Fiambre", "Queijo", "Fermento"}, 4.81},{25, "Tosta Mista", {"Pão", "Fiambre", "Queijo", "Manteiga", "Oregãos"}, 3.82},{26, "Tosta de Atum", {"Pão", "Atum", "Maionese", "Milho", "Oregãos"}, 4.23},{27, "Tosta Vegetariana", {"Pão", "Tomate", "Mozzarella", "Pimentos", "Oregãos"}, 4.53},{28, "Sandes de Queijo", {"Pão", "Queijo", "Alface", "Tomate", "Molho"}, 3.20},{29, "Sandes de Ovo", {"Pão", "Ovo Cozido", "Maionese", "Alface", "Mostarda"}, 3.40},{30, "Sandes Vegan", {"Pão", "Tofu", "Abacate", "Rúcula", "Molho Vegan"}, 4.02},{31, "Empada de Frango", {"Farinha", "Frango", "Cebola", "Azeite", "Alho"}, 3.91},{32, "Empada de Legumes", {"Farinha", "Cenoura", "Ervilhas", "Milho", "Cebola"}, 3.83},{33, "Empada de Espinafres", {"Farinha", "Espinafres", "Ricotta", "Cebola", "Alho"}, 4.03},{34, "Pastel de Nata", {"Massa folhada", "Ovos", "Leite", "Açúcar", "Canela"}, 3.00},{35, "Pão de Deus", {"Farinha", "Ovos", "Coco", "Açúcar", "Fermento"}, 3.21},{36, "Queque de Laranja", {"Farinha", "Ovos", "Laranja", "Açúcar", "Fermento"}, 3.41},{37, "Queque de Mel", {"Farinha", "Ovos", "Mel", "Açúcar", "Fermento"}, 3.53},{38, "Brigadeiro", {"Leite condensado", "Chocolate", "Manteiga", "Açúcar", "Cacau"}, 2.50},{39, "Beijinho", {"Leite condensado", "Coco", "Manteiga", "Açúcar", "Baunilha"}, 2.51},{40, "Tarte de Frango", {"Farinha", "Frango", "Cebola", "Azeite", "Alho"}, 5.51},{41, "Tarte de Espinafres", {"Farinha", "Espinafres", "Ricotta", "Alho", "Cebola"}, 5.52},{42, "Tarte Vegan", {"Farinha", "Tofu", "Tomate", "Pimentos", "Cebola"}, 5.53},{43, "Wrap de Frango", {"Tortilha", "Frango", "Alface", "Molho", "Cenoura"}, 5.21},{44, "Wrap Vegetariano", {"Tortilha", "Tomate", "Alface", "Milho", "Molho Vegan"}, 5.01},{45, "Wrap Vegan", {"Tortilha", "Tofu", "Pimentos", "Rúcula", "Molho Vegan"}, 5.02},{46, "Crepe Salgado de Queijo", {"Farinha", "Ovos", "Leite", "Queijo", "Oregãos"}, 5.22},{47, "Crepe Salgado de Legumes", {"Farinha", "Ovos", "Leite", "Cenoura", "Espinafres"}, 5.23},{48, "Crepe Vegan", {"Farinha de amêndoa", "Água", "Cenoura", "Espinafres", "Pimentos"}, 5.24},{49, "Sopa do Dia", {"Batata", "Cenoura", "Cebola", "Azeite", "Sal"}, 2.52},{50, "Baguete de Queijo Fresco", {"Pão", "Queijo Fresco", "Tomate", "Orégãos", "Alface"}, 4.04},{51, "Baguete de Fiambre", {"Pão", "Fiambre", "Queijo", "Alface", "Tomate"}, 4.05},{52, "Baguete de Atum", {"Pão", "Atum", "Maionese", "Alface", "Tomate"}, 4.06},{53, "Baguete Vegetariana", {"Pão", "Queijo Fresco", "Alface", "Tomate", "Cenoura"}, 4.07},{54, "Baguete Vegan", {"Pão", "Tofu", "Alface", "Tomate", "Molho Vegan"}, 4.08},{55, "Bola de berlim", {"Farinha", "Ovos", "Açúcar", "Leite", "Doce de Ovos"}, 2.53},{56, "Bolo de Iogurte", {"Iogurte", "Farinha", "Ovos", "Açúcar", "Fermento"}, 5.50},{57, "Bolo Maçã e canela", {"Maçã", "Canela", "Farinha", "Ovos", "Açúcar"}, 5.65},{58, "Bolo de Canela", {"Iogurte", "Canela", "Farinha", "Ovos", "Açúcar"}, 5.65},{59, "Bolo de Limão e Coco", {"Limão", "Coco", "Farinha de amêndoa", "Ovos", "Açúcar"}, 5.50},{60, "Bolo de Chocolate e Framboesa", {"Chocolate", "Framboesa", "Farinha de amêndoa", "Ovos", "Açúcar"}, 5.55},{61, "Iogurte de morango", {"Iogurte", "Morango", "Muesli", "Agave", "Frutos secos"}, 2.64},{62, "Iogurte de baunilha", {"Iogurte", "Baunilha", "Muesli", "Agave", "Frutos secos"}, 2.55},{63, "Iogurte de chocolate", {"Iogurte", "Chocolate", "Muesli", "Agave", "Frutos secos"}, 2.87},{64, "Iogurte de frutos vermelhos", {"Iogurte", "Frutos vermelhos", "Muesli", "Agave", "Frutos secos"}, 2.90},{65, "Capuccino", {"Café", "Leite", "Açúcar", "Canela", "Chocolate"}, 2.50},{66, "Latte", {"Café", "Leite", "Açúcar", "Canela", "Chocolate"}, 2.60},{67, "Macchiato", {"Café", "Leite", "Açúcar", "Canela", "Chocolate"}, 2.70},{68, "Mocha", {"Café", "Leite", "Chocolate", "Açúcar", "Canela"}, 2.80},{69, "Chá Verde", {"Chá verde", "Limão", "Mel", "Água", "Açúcar"}, 1.50},{70, "Chá Preto", {"Chá preto", "Limão", "Mel", "Água", "Açúcar"}, 1.60},{71, "Chá de Ervas", {"Chá de ervas", "Limão", "Mel", "Água", "Açúcar"}, 1.70},{72, "Chá de Frutos Vermelhos", {"Chá de frutos vermelhos", "Morango", "Mel", "Água", "Açúcar"}, 1.80}  
};

int mais3barato(Produto a[]) {
    float p1 = 10000, p2 = 10000, p3 = 10000; 
    int   i, id1, id2, id3; 
    
    for (int i = 0; i < 72; i++) {
        float preco = a[i].preco;

        if (preco < p1) {
            // shift
            p3 = p2; id3 = id2;
            p2 = p1; id2 = id1;
            p1 = preco; id1 = a[i].id;
        } else if (preco < p2 && preco != p1) {
            p3 = p2; id3 = id2;
            p2 = preco; id2 = a[i].id;
        } else if (preco < p3 && preco != p1 && preco != p2) {
            p3 = preco; id3 = a[i].id;
        }
    }

    return id3;
} 

// Função para calcular a média dos preços
float media(Produto a[]) {
    float sum = 0;
    for (int i = 0; i < 72; i++) 
        sum += a[i].preco;
    return sum / 72;
}

// Função que verifica se os ingredientes contêm ambos os alvos
int contem(char *alvo1, char *alvo2, char *ingredientes[]) {
    int achou1 = 0, achou2 = 0;

    for (int i = 0; i < 5; i++) {
        if (strcmp(ingredientes[i], alvo1) == 0) achou1 = 1;
        if (strcmp(ingredientes[i], alvo2) == 0) achou2 = 1;
    }

    return (achou1 && achou2);
}

// Função principal para contar os produtos com "Tofu" e "Tomate" acima da média
int ns(Produto a[]) {
    int total = 0;
    float m = media(a);

    for (int i = 0; i < 72; i++) {
        if (contem("Chocolate", "Leite", a[i].ingredientes) && a[i].preco > m)
            total++;
    }

    return total;
}

int main() {
    printf("%d\n", mais3barato(menu)); 
    printf("%d\n", ns(menu)); 
    return 0; 
}