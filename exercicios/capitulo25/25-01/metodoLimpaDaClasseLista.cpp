void Lista::limpa()
{
    Elemento *z = primeiro; // z aponta para o inicio
    // Percorre toda a lista para desalocar os elementos
    Elemento *y;
    while(z != 0){
        y = z->prox;
        delete z;
        z = y;
    }
    primeiro = 0; // Indica que a lista esta vazia
}
