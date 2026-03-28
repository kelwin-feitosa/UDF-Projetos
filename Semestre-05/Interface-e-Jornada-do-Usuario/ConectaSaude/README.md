# ConectaSaúde — Fluxo de Agendamento de Consultas

## 👥 Equipe
* **Kelwin Feitosa**
* **Julia Gregori**
* **Jonathan Correia**

## 🎯 Contexto e Desafio
O **ConectaSaúde** é um wireframe de baixa fidelidade voltado para um app de plano de saúde. O objetivo central é permitir que um usuário (percebido como emocionalmente vulnerável e com baixa tolerância à fricção) agende uma consulta de forma rápida e intuitiva. O design foca na clareza do processo, eliminando distrações visuais.

## 🔗 Protótipo Navegável (Figma)
> [!IMPORTANT]
> **[➔ CLIQUE AQUI PARA ACESSAR O PROTÓTIPO NO FIGMA](https://www.figma.com/proto/7sbbARXN0zuO9FgyWZ4N28/ConectaSa%C3%BAde?node-id=0-1&t=qWn5TqdjX25unPxE-1)**

## 🛤️ Detalhamento dos Dois Caminhos (Tarefa: Agendar Consulta)
Para cumprir os requisitos de redundância e acessibilidade, o protótipo oferece duas rotas distintas para a realização da mesma tarefa:

### 1. Caminho Principal: Fluxo de Acesso Direto (Home)
Ideal para agendamentos rápidos a partir da visualização inicial do sistema.
* **Entrada:** Após o login, o utilizador interage com o card central **"Marcar Consulta"**, posicionado em destaque na Página Inicial (acima do menu inferior).
* **Etapas:**
  - Seleção da modalidade (Presencial ou Online)
  - Escolha da Especialidade Médica
  - Seleção de Horário
  - Confirmação de dados e Finalização de Pagamento


### 2. Caminho Secundário: Fluxo via Gestão de Consultas
Focado no utilizador que deseja rever o histórico ou gerir compromissos antes de uma nova marcação.
* **Entrada:** O utilizador acede através do **Card de Próxima Consulta** (topo da Home) ou através do ícone **"Consultas"** na barra de navegação inferior.
* **Etapas:**
  - O sistema direciona para a tela de **Histórico/Consultas Marcadas**.
  - No final desta lista, o utilizador seleciona a opção **"Marcar Nova Consulta"**, sendo integrado no fluxo padrão de agendamento.

## 🛠️ Requisitos Técnicos Atendidos
- [x] Wireframe de Baixa Fidelidade (Foco em Usabilidade).
- [x] Desenvolvido integralmente no Figma.
- [x] Fluxo 100% Navegável (do Login à Confirmação).
- [x] Implementação de dois caminhos lógicos para a mesma tarefa crítica.
