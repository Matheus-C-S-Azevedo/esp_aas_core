/*
 * SPDX-FileCopyrightText: 2026 Matheus C. S. Azevedo
 * SPDX-License-Identifier: PolyForm-Noncommercial-1.0.0
 */

#include "esp_log.h"
#include "aas_core.h"

static const char *TAG = "sinaleiro";

void app_main(void)
{
    ESP_LOGI(TAG, "esp_aas_core v%s", aas_core_version());
}
