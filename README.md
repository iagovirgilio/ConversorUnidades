# Conversor de Unidades em C

Este projeto tem como objetivo criar um programa modular em **linguagem C** para conversão de diversas unidades. Ele também serve como exercício de uso de **Git** e **GitHub** para versionamento e trabalho em equipe.

---

## **Pré-requisitos**
Antes de começar a trabalhar no projeto, certifique-se de ter:
1. **Git** instalado ([instale o Git aqui](https://git-scm.com/)).
2. Um **compilador C** (exemplo: GCC no Linux/WSL ou MinGW no Windows).
3. **Editor de código** como [VSCode](https://code.visualstudio.com/), CLion ou Code::Blocks.

---

## **Como Configurar o Projeto Localmente**

1. **Clone o repositório**:
   ```bash
   git clone https://github.com/<seu-usuario>/ConversorUnidades.git
   ```

2. **Acesse a pasta do projeto**:
   ```bash
   cd ConversorUnidades
   ```

3. **Compile o projeto** com `Makefile`:
   ```bash
   make
   ```

4. **Execute o programa**:
   ```bash
   make run
   ```

5. **Limpe arquivos compilados** (opcional):
   ```bash
   make clean
   ```

---

## **Estrutura do Projeto**
```plaintext
/ConversorUnidades
|-- src/               # Código-fonte principal
|   |-- main.c         # Ponto de entrada
|   |-- comprimento.c  # Funções de conversão de comprimento
|   |-- massa.c        # Funções de conversão de massa
|   |-- ...
|-- include/           # Arquivos de cabeçalho (.h)
|   |-- comprimento.h
|   |-- massa.h
|-- build/             # Arquivos compilados (executáveis)
|-- tests/             # Arquivos de testes
|-- Makefile           # Script de compilação
|-- README.md          # Instruções do projeto
```

---

## **Como Trabalhar no Projeto**

### 1. **Crie uma Branch para Sua Tarefa**
Cada funcionalidade deve ser desenvolvida em uma branch separada:
```bash
git checkout -b feature/<nome-da-funcionalidade>
```
Exemplo:
```bash
git checkout -b feature/comprimento
```

### 2. **Implemente Sua Funcionalidade**
- Adicione seu código na pasta `src/` (exemplo: `comprimento.c`).
- Crie ou edite o arquivo de cabeçalho correspondente na pasta `include/` (exemplo: `comprimento.h`).
- Garanta que sua função seja modular e possa ser chamada no `main.c`.

### 3. **Teste Localmente**
Compile e teste para garantir que sua implementação está funcionando:
```bash
make
make run
```

### 4. **Faça Commits Regulares**
Adicione e comite suas alterações com mensagens claras e descritivas:
```bash
git add .
git commit -m "Implementa conversão de comprimento de metros para centímetros"
```

### 5. **Envie Sua Branch para o GitHub**
```bash
git push origin feature/<nome-da-funcionalidade>
```

---

## **Revisão do Código e Pull Requests**
1. Acesse o repositório no GitHub.
2. Abra um **Pull Request (PR)** para a branch principal `main`.
3. Aguarde o líder revisar e aprovar.
4. Corrija qualquer feedback solicitado.

---

## **Regras para o Código**
- Use **comentários** para explicar suas funções.
- Garanta que o código está **organizado e modular**.
- Faça **testes regulares** antes de enviar um PR.
- Use nomes de variáveis e funções descritivos.

---

## **Comandos Git Úteis**

| Comando                        | Descrição                                   |
|--------------------------------|--------------------------------------------|
| `git clone <url>`              | Clonar o repositório                       |
| `git checkout -b feature/<nome>`| Criar uma nova branch                     |
| `git add .`                    | Adicionar arquivos para o commit           |
| `git commit -m "mensagem"`     | Fazer commit                               |
| `git push origin <branch>`     | Enviar alterações para o GitHub            |
| `git pull origin main`         | Atualizar a branch local com a branch main |
| `git merge <branch>`           | Mesclar uma branch                         |

---

## **Dúvidas e Suporte**
- Comunique-se pelo **GitHub Issues** ou pelo canal de comunicação definido pela equipe.
- Em caso de problemas, entre em contato com o **líder do projeto**.

---
