#include <stdlib.h>

#include "globals.h"


/*
    VOCÊ DEVE CRIAR VARIÁVEIS GLOBAIS PARA ARMAZENAR DADOS SOBRE A SIMULAÇÃO.
    NOTAS:
    1.  OS SEGUINTES DADOS DEVEM SER ARMAZENADOS E PRINTADOS AO FIM DA SIMULAÇÃO:
        a. Quantidade de clientes que sentaram-se no conveyor e consumiram todos os itens desejados
        b. Quantidades produzidas de cada alimento
        c. Quantidades consumidas de cada alimento
    2.  SIGA OS EXEMPLOS DE VARIÁVEIS GLOBAIS JÁ EXISTENTES NESSE ARQUIVO PARA CRIAR AS NOVAS.
*/

virtual_clock_t* global_virtual_clock = NULL;
conveyor_belt_t* global_conveyor_belt = NULL;
queue_t* global_queue = NULL;
int global_open_restaurant = TRUE;
int global_costumers = 0;
int global_satisfied_costumers = 0;
int global_food_produced[] = {0, 0, 0, 0, 0};
int global_food_eaten[] = {0, 0, 0, 0, 0};

void globals_set_virtual_clock(virtual_clock_t* virtual_clock) {
    global_virtual_clock = virtual_clock;
}

virtual_clock_t* globals_get_virtual_clock() {
    return global_virtual_clock;
}

void globals_set_conveyor_belt(conveyor_belt_t* conveyor_belt) {
    global_conveyor_belt = conveyor_belt;
}

conveyor_belt_t* globals_get_conveyor_belt() {
    return global_conveyor_belt;
}

void globals_set_queue(queue_t* queue) {
    global_queue = queue;
}

queue_t* globals_get_queue() {
    return global_queue;
}

void globals_set_open_restaurant(int open) {
    global_open_restaurant = open;
}

int globals_get_open_restaurant() {
    return global_open_restaurant;
}

void globals_set_costumers(int costumers) {
    global_costumers = costumers;
}

int globals_get_costumers() {
    return global_costumers;
}

void globals_set_satisfied_costumers(int satisfied_costumers) {
    global_satisfied_costumers = satisfied_costumers;
}

int globals_get_satisfied_costumers() {
    return global_satisfied_costumers;
}

void globals_increment_food_produced(int i) {
    global_food_produced[i] += 1;
}

int* globals_get_food_produced() {
    return global_food_produced;
}

void globals_increment_food_eaten(int i) {
    global_food_eaten[i] += 1;
}

int* globals_get_food_eaten() {
    return global_food_eaten;
}

/**
 * @brief Finaliza todas as variáveis globais.
 * Se criar alguma variável global que faça uso de mallocs, lembre-se sempre 
 * de usar o free dentro dessa função.
 */
void globals_finalize() {
    virtual_clock_finalize(global_virtual_clock);
    conveyor_belt_finalize(global_conveyor_belt);

    printf("\nClientes atendidos: %d\n", global_costumers);
    printf("Clientes satisfeitos: %d\n", global_satisfied_costumers);
    printf("Comidas produzidas: %s:%d %s:%d %s:%d %s:%d %s:%d\n", SUSHI, global_food_produced[0], 
                                                                  DANGO, global_food_produced[1], 
                                                                  RAMEN, global_food_produced[2],
                                                                  ONIGIRI, global_food_produced[3],
                                                                  TOFU, global_food_produced[4]);
    printf("Comidas consumidas: %s:%d %s:%d %s:%d %s:%d %s:%d\n", SUSHI, global_food_eaten[0], 
                                                                  DANGO, global_food_eaten[1], 
                                                                  RAMEN, global_food_eaten[2],
                                                                  ONIGIRI, global_food_eaten[3],
                                                                  TOFU, global_food_eaten[4]);
}
