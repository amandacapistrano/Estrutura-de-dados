
typedef struct NO *arvAVL;

arvAVL *cria_arvAVL();

void liberar_arvAVL(arvAVL *raiz);

int vazia_arvAVL(arvAVL *raiz);

int altura_arvAVL(arvAVL *raiz);

int totalNO_arvAVL(arvAVL *raiz);

void preOrdem_arvAVL(arvAVL *raiz);

void emOrdem_arvAVL(arvAVL *raiz);

void posOrdem_arvAVL(arvAVL  *raiz);

int insere_arvAVL(arvAVL *raiz, int valor);

int remove_arvAVL(arvAVL *raiz, int valor);

int consulta_arvAVL(arvAVL *raiz, int valor);

int alt_no(struct NO *no);
int fatorBalanceamento_NO(struct NO *no);
int maior (int x, int y);

void rotacaoRL(arvAVL *raiz);
void rotacaoLR(arvAVL *raiz);
void rotacaoRR(arvAVL *raiz);
void rotacaoLL(arvAVL *raiz);

int remove_arvAVL(arvAVL *raiz, int valor);
