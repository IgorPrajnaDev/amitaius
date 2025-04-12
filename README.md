# Amitaius
# 🔐 Criptografia com Cifras de Hill

O objetivo é fazer um programa em C que a cifra de hill para criptografar mensagens *usando o github direitinho*.

toda a matemática por trás do algorítmo é encontrada aqui: 

https://www.ime.unicamp.br/~marcia/AlgebraLinear/aplicacao_criptografia.html

Vejam as issues: lá tem as etapas pra fazer cada coisa.


## 📁 Estrutura do Projeto

```bash
hill-cipher-c/
├── include/                   # Arquivos de cabeçalho (.h)
│   ├── hill.h                # Interface da cifra de Hill
│   ├── matrix.h              # Funções de manipulação de matrizes
│   └── utils.h               # Utilitários (conversão de texto, mod, etc.)
│
├── src/                      # Implementações (.c)
│   ├── hill.c               # Implementação da cifra de Hill (encrypt/decrypt)
│   ├── matrix.c             # Implementações matemáticas (multiplicação, inversa, etc.)
│   └── utils.c              # Funções auxiliares
│
├── test/                     # (Opcional) Testes unitários simples
│   └── test_cases.c
│
├── main.c                    # Ponto de entrada do programa
├── Makefile                  # Script de compilação do projeto
├── README.md                 # Documentação do projeto
├── .gitignore                # Arquivos e pastas a serem ignorados pelo Git
└── LICENSE                   # Licença do projeto (ex: MIT)

