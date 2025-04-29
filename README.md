# Challenge - First Year - Edge Computing: Alerta Leitos

## O que é o projeto?
O projeto Alerta-Leitos é um sistema de monitoramento inteligente de leitos hospitalares, desenvolvido com o foco em melhorar a gestão hospitalar através da Internet das Coisas (IoT), unindo hardware, automação e nuvem para fornecer alertas em tempo real e dados confiáveis sobre a ocupação dos leitos.

## Visão Geral
Hospitais enfrentam desafios constantes na gestão eficiente dos seus leitos. Pensando nisso, o Alerta-Leitos surge como uma solução moderna e integrada que monitora o status de cada leito hospitalar de forma automatizada, emitindo alertas sempre que há mudanças no status de ocupação de cada um dos leitos.

### Tecnologias Utilizadas

- Arduino IDE: Para o desenvolvimento do hardware de monitoramento (sensores de presença/pressão nos leitos).
- Node-RED: Plataforma de automação que intermedeia os dados entre o hardware e o back-end, permitindo criação de fluxos lógicos e alertas.
- Tago.io: Plataforma em nuvem utilizada para armazenar, processar e visualizar os dados coletados, funcionando como o "cérebro na nuvem" do projeto.

### Funcionalidades
O sistema Alerta-Leitos oferece monitoramento em tempo real dos leitos hospitalares, permitindo o acompanhamento contínuo do estado de ocupação de cada unidade. Ele é capaz de emitir alertas automáticos por meio da plataforma Tago.io, garantindo uma resposta rápida diante de qualquer mudança de status. Além disso, conta com um painel de visualização intuitivo, composto por dashboards personalizados que facilitam a interpretação dos dados. A automação das regras operacionais é realizada por meio do Node-RED, que processa as informações recebidas e executa ações predefinidas. Todo esse ecossistema é integrado a sensores físicos conectados a um Arduino, possibilitando uma solução completa e eficaz de IoT aplicada à saúde.

### Especificações Técnicas (Hardware)
A parte física do sistema é composta por componentes simples e de baixo custo, permitindo fácil replicação:

1 - Arduino Uno: Microcontrolador responsável por ler os sensores e enviar os dados ao Node-RED.

2 - Servo Motor: Utilizado como indicador físico do status do leito, girando para diferentes ângulos conforme a ocupação. Seguem aqui as descrições dos ângulos:

- 0° – Leito desocupado;
- 90° – Leito em transição ou manutenção;
- 180° – Leito ocupado;

3 - Três LEDs: Indicação visual complementar ao servo motor:

- Verde: Leito disponível
- Amarelo: Leito em preparação ou manutenção
- Vermelho: Leito ocupado

Este conjunto garante um feedback local direto no ambiente hospitalar, mesmo sem acesso à plataforma digital.

### Como Funciona?
Sensores físicos são conectados a microcontroladores programados via Arduino IDE. Em seguida, os dados coletados são enviados ao Node-RED (exemplo: presença ou aunsência no leito). O Node-RED processa esses dados e os encaminha à nuvem pela plataforma Tago.io, onde os dados são armazenados, exibidos em dashboards e utilizados para disparar alertas automatizados.

### Instalação e Execução
#### Atenção: Este projeto envolve componentes de hardware e acesso à plataformas externas. Abaixo estão os passos principais:

1 - Configure o Arduino com os sensores e carregue o código via Arduino IDE;

2 - Instale o Node-RED localmente ou em um servidor;

3 - Importe o fluxo .json do projeto para o Node-RED;

4 - Conecte o Node-RED à sua conta do Tago.io via tokens de acesso;

5 - Crie um dashboard no Tago.io e configure os widgets para visualizar os dados.
