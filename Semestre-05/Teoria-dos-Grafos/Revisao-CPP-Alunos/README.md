# 🎓 Gestão Acadêmica: Revisão de Estrutura e Memória em C++

Este projeto foi desenvolvido como um exercício de nivelamento para a disciplina de **Teoria dos Grafos** (5º Semestre - UDF). O objetivo principal é a transição da lógica de objetos (Java/C#) para a manipulação direta de memória e buffers no C++.

## 🚀 Desafios Técnicos & Implementações

### 1. Gerenciamento de Buffer (Standard Input)
Diferente de linguagens de alto nível, o C++ mantém resíduos no buffer do teclado (como o `\n`). 
- **Solução:** Implementação de limpeza explícita via `while (getchar() != '\n');` após entradas numéricas, garantindo que o próximo `scanf` de texto não seja ignorado pelo sistema operacional.

### 2. Scansets e Segurança de Memória
Para leitura de nomes completos:
- **Técnica:** Uso de `%[^\n]` com limitador de caracteres `%59[^\n]`.
- **Resultado:** Prevenção de *Buffer Overflow* em `structs`, garantindo que o programa não tente escrever fora do espaço alocado para o array de `char`.

### 3. Lógica Defensiva (Error Handling)
Embora o C++ não lance exceções automáticas para entradas como o Java, o sistema foi blindado com:
- Validação de intervalo de notas $[0, 10]$.
- Proteção contra divisão por zero no cálculo de médias.
- Tratamento de fluxo com `j--` e `continue` para reentrada de dados inválidos sem quebrar o loop.

## 🛠️ Tecnologias e Ambiente
- **Linguagem:** C++ Nativo (Padrão C++11/17)
- **Compilador:** GCC/G++ 13.x
- **OS:** Linux (Pop!_OS 22.04 LTS)
- **IDE:** VS Code com Tasks Customizadas (`tasks.json`)

## 📖 Como Compilar e Rodar
No terminal Linux:
```bash
# Compilação
g++ main.cpp -o sistema

# Execução
./sistema