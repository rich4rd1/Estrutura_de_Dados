typedef int Item;
typedef struct
{
    Item *item;
    int topo;
} Pilha;

Pilha *criar(int MaxN)
{
    Pilha *p = malloc(sizeof(Pilha));
    p->item = malloc(MaxN * sizeof(Item));
    p->topo = 0;
    return p;
}

int vazia(Pilha *p){
    return p->topo == 0;
}

void empilhar(Pilha *p, Item item){
    p ->item[p ->topo++] = item;
}

Item desenmpilhar(Pilha *p){
    return p->item[-- p->topo];
}

Item espiar(Pilha *p){
    return p->item[p->topo - 1];
}