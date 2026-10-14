# esp_aas_core

Componente ESP-IDF para hospedar um *Asset Administration Shell* (AAS) diretamente em microcontroladores ESP32, expondo o modelo do ativo via OPC UA.

> **Status:** em desenvolvimento inicial. A API ainda não é estável.

## Estrutura

```
esp_aas_core/
├── idf_component.yml   # manifesto do ESP Component Registry
├── CMakeLists.txt
├── include/            # API pública
├── src/                # implementação
└── examples/
    └── sinaleiro/      # exemplo mínimo, roda apenas com a placa ESP32
```

## Requisitos

- ESP-IDF v6.0 ou superior

## Uso em um projeto

No `main/idf_component.yml` do seu projeto:

```yaml
dependencies:
  matheus-c-s-azevedo/esp_aas_core:
    git: https://github.com/Matheus-C-S-Azevedo/esp_aas_core.git
    version: main
```

## Compilando o exemplo

```bash
cd examples/sinaleiro
idf.py set-target esp32s3
idf.py build flash monitor
```

## Licença

Este componente usa licença dupla:

- **Uso não comercial** (pessoal, acadêmico, pesquisa, ensino): gratuito, sob a [PolyForm Noncommercial 1.0.0](LICENSE).
- **Uso comercial**: exige licença comercial. Veja [COMMERCIAL_LICENSE.md](COMMERCIAL_LICENSE.md).

Copyright (c) 2026 Matheus C. S. Azevedo
