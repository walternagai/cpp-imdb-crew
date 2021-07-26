# cpp-imdb-crew

O [IMDB](https://www.imdb.com/) é um conhecido serviço Web que cataloga filmes e classifica em estrelas quanto a percepção de seus usuários.

O programa cpp-imdb-crew tem três estruturas (registros) bem distintas:
* **Movie** - estrutura tem quatro campos: idMovie (número único de identificação de um filme), title (título do filme), year (ano de lançamento do filme) e crew (diretor e elenco do filme);
* **Crew** - estrutura com três campos: idMovie (o mesmo número único de identificação de um filme da estrutura Movie), director (diretor do filme) e cast (elenco do filme).
* **Cast** - estrutura com um único campo: actors (nomes de atores/atrizes do elenco).

Termine de escrever o código da função **printCrew** que mostra o diretor e o elenco de um filme. A chamada da função **printCrew** é feita na função principal. Não é preciso alterar o código da função principal.

Observe a saída esperada do programa.

Confira se o repositório está criado em alguma das organizações GitHub:
* [https://github.com/p7-m7-ecoi02-2021-1](https://github.com/p7-m7-ecoi02-2021-1)
* [https://github.com/p8-m7-ecoi02-2021-1](https://github.com/p8-m7-ecoi02-2021-1)

Veja o **Feeback** no link *Pull requests* para aber se a saída do programa está de acordo com o esperado.

## Saída esperada

- ENTRADA: nenhuma

        1994: Pulp Fiction
        Director: Quentin Tarantino
        Cast: John Travolta Samuel L. Jackson Uma Thurman 
        1994: Um sonho de liberdade
        Director: Frank Darabont
        Cast: Tim Robbins Morgan Freeman Bob Gunton 
        1983: Star Wars - O Retorno do Jedi: Episodio 6
        Director: George Lucas
        Cast: Mark Hamill Alec Guinness Carrie Fisher 
        1980: Star Wars - O Imperio Contra-Ataca: Episodio 5
        Director: George Lucas
        Cast: Mark Hamill Harrison Ford Billie Dee Williams 
        1977: Star Wars - Nova Esperanca: Episodio 4
        Director: George Lucas
        Cast: Mark Hamill Harrison Ford Carrie Fisher
