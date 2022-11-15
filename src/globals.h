#ifndef __GLOBALS_H__
#define __GLOBALS_H__


#include "conveyor_belt.h"
#include "virtual_clock.h"
#include "queue.h"

/**
 * @brief Inicia um relógio virtual (de modo global)
 * 
 * @param virtual_clock 
 */
extern void globals_set_virtual_clock(virtual_clock_t *virtual_clock);

/**
 * @brief Retorna um relógio virtual (de modo global)
 * 
 * @return virtual_clock_t* 
 */
extern virtual_clock_t *globals_get_virtual_clock();

/**
 * @brief Inicia uma esteira de sushi (de modo global).
 * 
 * @param conveyor_belt
 */
extern void globals_set_conveyor_belt(conveyor_belt_t *conveyor_belt);

/**
 * @brief Retorna uma esteira de sushi (de modo global)
 * 
 * @return conveyor_belt_t* 
 */
extern conveyor_belt_t *globals_get_conveyor_belt();

/**
 * @brief Inicia uma fila (de modo global)
 * 
 * @param queue 
 */
extern void globals_set_queue(queue_t *queue);

/**
 * @brief Retorna uma fila (de modo global)
 * 
 * @return queue_t* 
 */
extern queue_t *globals_get_queue();

/**
 * @brief Muda o indicador de restaurante aberto (de modo global)
 * 
 * @param int 
 */
extern void globals_set_open_restaurant(int open);

/**
 * @brief Retorna indicador de restaurante aberto (de modo global)
 * 
 * @return int 
 */
extern int globals_get_open_restaurant();

/**
 * @brief Muda a quantidade de clientes atendidos (de modo global)
 * 
 * @param int 
 */
extern void globals_set_costumers(int costumers);

/**
 * @brief Retorna a quantidade de clientes atendidos (de modo global)
 * 
 * @return int 
 */
extern int globals_get_costumers();

/**
 * @brief Muda a quantidade de clientes satisfeitos (de modo global)
 * 
 * @param int 
 */
extern void globals_set_satisfied_costumers(int satisfied_costumers);

/**
 * @brief Retorna a quantidade de clientes satisfeitos (de modo global)
 * 
 * @return int 
 */
extern int globals_get_satisfied_costumers();

/**
 * @brief Incrementa o total consumido (de modo global)
 * 
 * @param 
 */
extern void globals_increment_total_eaten();

/**
 * @brief Retorna o total consumido (de modo global)
 * 
 * @return int 
 */
extern int globals_get_total_eaten();

/**
 * @brief Incrementa uma posição do vetor de comidas produzidas (de modo global)
 * 
 * @param int
 */
extern void globals_increment_food_produced(int i);

/**
 * @brief Retorna o vetor de comidas produzidas (de modo global)
 * 
 * @return int* 
 */
extern int* globals_get_food_produced();

/**
 * @brief Incrementa uma posição do vetor de comidas comidas (de modo global)
 * 
 * @param int
 */
extern void globals_increment_food_eaten(int i);

/**
 * @brief Retorna o vetor de comidas comidas (de modo global)
 * 
 * @return int* 
 */
extern int* globals_get_food_eaten();

/**
 * @brief Finaliza todas as variáveis globais.
 * 
 */
extern void globals_finalize();

#endif  // __GLOBALS_H__
