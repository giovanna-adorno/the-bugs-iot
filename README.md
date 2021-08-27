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
![image](https://user-images.githubusercontent.com/69016130/131044558-5bec95d4-e6f0-44ca-9e0c-e97dbf40808c.png)

Flow do Node-Red do projeto:
![image](https://user-images.githubusercontent.com/69016130/131044571-5203ba5e-192d-4195-a33c-020959a64e27.png)


&nbsp;
## Link de vídeo demonstração
[Clique aqui para assistir ao vídeo do projeto funcionando.](https://www.youtube.com/watch?v=DYvpSIIlV50)

&nbsp;
## Como usar 
Para rodar o projeto, basta seguir alguns passos:
1. Faça o download do arquivo zip do projeto [aqui](https://github.com/giovanna-adorno/the-bugs-iot/archive/refs/heads/main.zip)
2. Abra o arquivo Cp4.simu no software SimulIDE
3. Importe o arquivo Cp4.ino dentro do SimulIDE e starte o projeto
4. Acesse o [Twitter do TheBugs](https://twitter.com/TheBugs_Fiap) para ver os resultados

&nbsp;
### Referências 

- [Anemômetro](https://www.usinainfo.com.br/blog/anemometro-arduino-um-sensor-de-vento-para-estacao-meteorologica/)
  O Sensor do anemômetro foi simulado usando o 'clock' e o frequenciometro.