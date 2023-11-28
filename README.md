# Integrantes

- Bruno Lauand Ferrão - 32217994
- Raul Vilhora Cardoso Matias - 32267274

# Utilizados

- Servidor <code>AWS</code>
- Repositório <code>git</code>
- Compilador <code>gcc</code>
- Código <code>.c</code>

# Passo-a-passo

- Acessar o servidor <code>AWS</code>
- Instalar o compilador <code>gcc</code>
- Criar uma pasta <code>mkdir</code> para clonar o repositório git
- Entrar na pasta <code>cd</code> e iniciar o git na pasta <code>git init</code>
- Clonar o repositório <code>git clone</code>
- Acessar a pasta do repositório clonado <code>cd</code>
- Compilar o arquivo <code>.c</code> utilizando o gcc <code>gcc -o</code>
- Executar o arquivo compilado <code>./"nome-do-arquivo"</code>


# Sobre o projeto

Nosso código inicia seu processo com a verificação da abertura do arquivo "entrada.txt", 
retornando erro caso dê errado. Em seguida ele lê o número N de pessoas do arquivo 
utilizando a função 'fscanf' e em seguida usa um loop for para ler o momento 'T' e a direção 
'D' de cada uma das pessoas. Em seguida, usando uma variável chamada 'direction' para 
controlar o estado de cada escada, calcula o tempo de viagem como a diferença entre 
o momento atual e o momento que a pessoa chegará e atualiza o momento atual para este 
mesmo momento de chegada. Ao verificar se a escada está parada ou indo na mesma direção 
que a pessoa atual deseja ir, autoriza que a mesma já embarque imediatamente. Caso contrário, 
manda a pessoa esperar a escada entrar para entrar. Por fim, atualiza o último momento 
de saída ('last_time_exit') com base nas condições de entrada na escada e imprime o mesmo 
antes de fechar o arquivo usando a função 'fclose'.

# Print da execução

Saída com o momento no qual a última pessoa saiu da escada rolante:

<img src="/Prints/saida.png">
