# cpp-imdb-stars

O [IMDB](https://www.imdb.com/) é um conhecido serviço Web que cataloga filmes e classifica em estrelas quanto a percepção de seus usuáriios.

O programa imdb-stars tem duas estruturas (registros) bem distintas:
* **Movie** - uma estrutura que tem três campos: idMovie (número único de identificação de um filme), title (título do filme) e year (ano de lançamento do filme);
* **Opinions** - uma estrutura que tem dois campos: idMovie (o mesmo número único de identificação de um filme da estrutura Movie) e stars (vetor de tamanho MAX_OPINIONS com o número de estrelas de cada usuário).

Escreva o código da função **calculateStars** que calcule a média de estrelas recebida para cada filme.

Observe a saída esperada do programa.

Confira se o repositório está criado em alguma das organizações GitHub:
* [https://github.com/p7-m7-ecoi02-2021-1](https://github.com/p7-m7-ecoi02-2021-1)
* [https://github.com/p8-m7-ecoi02-2021-1](https://github.com/p8-m7-ecoi02-2021-1)

Veja o **Feeback** no link *Pull requests* para aber se a saída do programa está de acordo com o esperado.

## Saída esperada

- ENTRADA: nenhuma

        1977: Star Wars - Nova Esperanca: Episodio 4 had 4.5 stars
        1980: Star Wars - O Imperio Contra-Ataca: Episodio 5 had 4 stars
        1983: Star Wars - O Retorno do Jedi: Episodio 6 had 4 stars
        1994: Um sonho de liberdade had 4.5 stars
        1994: Pulp Fiction had 4 stars
