⛽ KAIQZIN DEV — Calculadora de Combustível

Uma calculadora de combustível simples, moderna e responsiva para calcular litros a partir de um valor em reais ou o valor total a partir da quantidade de litros.

O projeto possui seleção de Gasolina, Etanol e Diesel S-10, preenchendo automaticamente o preço por litro ao selecionar o combustível.

🚀 Funcionalidades

⛽ Seleção de Gasolina

🌱 Seleção de Etanol

🚛 Seleção de Diesel S-10

💵 Preenchimento automático do preço por litro

💰 Cálculo de litros através do valor em reais

🛢️ Cálculo do valor através da quantidade de litros

🧹 Botão para limpar os campos

📱 Interface responsiva para celular e computador

🎨 Interface moderna com identidade visual KAIQZIN DEV

⚡ Cálculos realizados instantaneamente no navegador

🖥️ Preview

A aplicação possui três opções de combustível:

┌─────────────────┐
│       ⛽        │
│    Gasolina     │
│    R$ 6,53/L    │
└─────────────────┘

┌─────────────────┐
│       🌱        │
│     Etanol      │
│    R$ 4,04/L    │
└─────────────────┘

┌─────────────────┐
│       🚛        │
│   Diesel S-10   │
│    R$ 6,97/L    │
└─────────────────┘


Ao clicar em um combustível, o preço por litro é preenchido automaticamente.

🧮 Exemplos
Valor em reais → Litros

Se a gasolina estiver custando:

R$ 6,53/L


E você informar:

R$ 100,00


O sistema calcula aproximadamente:

15,31 litros

Litros → Valor

Se você informar:

20 litros


Com o preço:

R$ 6,53/L


O resultado será:

R$ 130,60

📁 Estrutura do projeto
calculadora-combustivel/
│
├── index.html
├── style.css
├── calculadora.cpp
└── README.md

index.html

Responsável pela estrutura da página, campos, botões e interação com o usuário.

style.css

Responsável pelo visual da aplicação, incluindo cores, layout, responsividade e identidade visual.

calculadora.cpp

Contém uma versão dos cálculos desenvolvida em C++ para estudo da lógica de programação.

README.md

Documentação do projeto.

🛠️ Tecnologias utilizadas

HTML5

CSS3

JavaScript

C++

📌 Como executar
1. Clone o projeto
git clone SEU_LINK_DO_REPOSITORIO

2. Entre na pasta
cd calculadora-combustivel

3. Abra o projeto

Abra o arquivo:

index.html


Você pode abrir diretamente no navegador ou utilizar uma extensão como Live Server no VS Code.

💻 C++

O arquivo calculadora.cpp é uma implementação separada da lógica da calculadora em C++.

Para compilar utilizando o g++:

g++ calculadora.cpp -o calculadora


Depois execute:

Windows
calculadora.exe

Linux / macOS
./calculadora

🎨 Identidade visual

O projeto utiliza a marca:

KAIQZIN DEV


Com uma identidade baseada em:

🟢 Verde

⚫ Fundo escuro

💻 Elementos relacionados à programação

⛽ Tema automotivo

📱 Design responsivo

🔧 Personalizando os preços

Os preços podem ser alterados diretamente no index.html.

Exemplo:

<button
    class="combustivel"
    onclick="selecionarCombustivel(this, '6.53')"
>


Para alterar o preço da gasolina para R$ 6,80:

<button
    class="combustivel"
    onclick="selecionarCombustivel(this, '6.80')"
>


Também altere o valor exibido:

<strong>R$ 6,80/L</strong>

📱 Responsividade

A calculadora foi desenvolvida para funcionar em diferentes tamanhos de tela:

💻 Computador
📱 Celular
📲 Tablet


O layout se adapta automaticamente através de CSS Media Queries.

🔮 Melhorias futuras

Algumas funcionalidades que podem ser adicionadas posteriormente:

 Atualização automática dos preços

 Histórico de abastecimentos

 Comparação entre combustíveis

 Cálculo de consumo do veículo

 Cálculo de custo por km

 Cálculo de autonomia

 Seleção de estado/cidade

 Tema claro/escuro

 Gráficos de preços

 Integração com uma API

 Backend em C++

 Banco de dados

📚 Objetivo

Este projeto foi desenvolvido como uma aplicação prática para estudar e praticar:

HTML
CSS
JavaScript
C++
Lógica de programação
Desenvolvimento Web
Design responsivo

👨‍💻 Desenvolvedor
KAIQZIN DEV

Projeto desenvolvido para fins de estudo e desenvolvimento web.

⭐ Contribuição

Se você gostou do projeto, considere deixar uma ⭐ no repositório.

Sugestões e melhorias são bem-vindas!

📄 Licença

Este projeto pode ser utilizado para fins de estudo e aprendizado.

<div align="center">
⛽ KAIQZIN DEV

Calculadora de Combustível

Desenvolvido com 💚 e código.

</div> ``` :::

Você pode salvar esse conteúdo diretamente como README.md na raiz do projeto.
