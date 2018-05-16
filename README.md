# Laboratório 03 da disciplina IMD0030

- Questão 01
Crie uma hierarquia de classes de domínio para uma loja que vende os seguintes Produtos: Roupa,
Bebida e Fruta. Sobrescreva o operador de inserção em stream “<<” para cada classe, de modo que
o uso do mesmo imprima:

* Para Roupa: código de barras, descrição, preço, marca, sexo (M/F) e tamanho;
* Para Bebida: código de barras, descrição, preço e teor alcoólico (em %);
* Para Fruta: código de barras, descrição, preço, data do lote e validade.

Sobrescreva os operadores de adição “+” e subtração “-“ de modo a permitir somar e subtrair o preço
de dois produtos. Sobrescreva também o operador de igualdade “==” retornando true se dois
produtos possuem o mesmo código de barras ou false em caso contrário.

Evite repetição de código. Explore, ao máximo, os conceitos de Programação Orientada a Objetos
(POO) em C++ discutidos em sala de aula: classes, métodos, métodos de acesso (getters/setters),
modificadores de acesso, sobrecarga de operadores, herança, polimorfismo, método virtual, classe
abstrata, templates, entre outros.

Realize testes sobre as classes implementadas para mostrar o correto funcionamento de sua
implementação. A carga dos produtos na lista de produtos deve ser realizada a partir dos arquivos
.dat correspondentes.

SUPRESA!!! Ainda envergonhado pela situação em que te colocou na última avaliação, Teobaldo
resolveu voltar para te ajudar. Para isso, dentro de seu tempo disponível, ele te enviou um código
inicial, disponível através do endereço https://github.com/imdcode/teobaldo.git e descreveu o que
deve ser feito no arquivo README.md.

- Questão 02
Implemente em C++ as respectivas classes, atributos e métodos (incluindo construtores e destrutor)
necessários para atender às seguintes abstrações:

* Uma conta corrente possui uma agência, um número, um saldo, um status que informa se ela é
especial ou não, um limite (e o limite disponível) e um conjunto de movimentações (normalmente
em grande número e variável entre contas).
* Uma movimentação possui uma descrição, um valor e uma indicação se ela é uma movimentação
de crédito ou débito.

Usando as classes implementadas, escreva um programa em C++ para simular uma agência
bancária. Uma agência bancária deve armazenar um conjunto de contas e permitir as seguintes
operações básicas: criações de conta, exclusão de contas, saques (respeitando o saldo e o limite),
depósitos, emissão de saldo e extrato, além de transferência entre contas.
Especificamente com relação à emissão de extrato, seu programa deverá exibir a lista de
movimentações realizadas por meio da sobrecarga do operador de inserção em stream (<<).

- Questão 03
Utilizando de abstração e do conceito de herança, altere o programa da questão 2 para permitir a
manipulação de dois tipos de contas: conta corrente e conta poupança.