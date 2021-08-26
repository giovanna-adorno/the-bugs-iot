# Template para desenvolvimento e entrega de NAC

Projeto desenvolvido para a disciplina de Disruptive Architectures IOT e IA para a avaliação do segundo semestre. 
O arduino contará com 3 sensores, um de luminosidade, um de temperatura e um frequenciometro com clock representando um anemometro (sensor de velocidade do vento).
O arduino enviará um texto com os parametros e seus valores da leitura dos sensores que será recebido pelo node red. Esses dados serão dívididos em 3 tópicos, um para cada parâmetro e enviados para um broker por protocolo mqtt. Esse broker é o responsável por enviar os dados para o dashboard e caso a velocidade do vento ultrapasse 80km/h, um alerta via twitter vai ser emitido.

# Nome do projeto

**Nome dos alunos:** 
RM 85473 - Danilo Maia Boccomino,
RM 85555 - Felipe da Silva Marcondes,
RM 85542 - Giovanna Caroline Adorno,
RM 83448 - Gustavo Malvone,
RM 85634 - Murilo Augusto Pereira Nascimento

**Turma:**
2º TDSA

## Objetivo / descrição do Projeto

O objetivo do produto é fazer a medição de temperatura, luminosidade e velocidade do vento em determinado lugar e mostrar isso em um dashboard, para que os dados fiquem mais fáceis de serem visualizados. Além disso o projeto fará um tweet caso o vento esteja com uma velocidade alarmante (80km/h), para alertar os habitantes.

## Diagrama do projeto

Arquitetura do Arduino:

Flow do Node-Red do projeto:

## Como usar 

Explique como rodar o seu projeto. Quais programas instalar, como configurar... 

* Pode ser utilizado marcadores
* Para ajudar na formatação

Ou qualquer outra tabulação:

- [x] Youtube
- [ ] Facebook 
- [x] Instagram

Pode adicionar algum trecho de código, por exemplo para clonar esse repositório:

    cd /home/iot
    git clone https://github.com/arnaldojr/templatenac
    cd templatenac
    ls


## Link de vídeo demonstração

Adicione o link para assistir ao vídeo do projeto funcionando.

[Link para o video youtube](https://www.youtube.com/watch?v=xva71wynxS0)


### Referências 

* [mastering-markdown](https://guides.github.com/features/mastering-markdown/)
* [Basic writing and formatting syntax](https://docs.github.com/en/github/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax)
