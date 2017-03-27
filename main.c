/*
 * main.c
 *
 *  Created on: Mar 27, 2017
 *      Author: ses46
 */

#include <semaphore.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

//semaphores

int main(){
	printf("starting bakery");
	pthread_t baket;
	pthread_t casht;
	pthread_t cust0t;
	pthread_t cust1t;
	pthread_t cust2t;
	pthread_t cust3t;
	pthread_t cust4t;
	pthread_t cust5t;
	pthread_t cust6t;
	pthread_t cust7t;
	pthread_t cust8t;
	pthread_t cust9t;
	pthread_create(&baket, NULL, bake, NULL);
	pthread_exit(NULL);
}

void * bake(void *arg){

}
