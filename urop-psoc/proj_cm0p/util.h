#pragma once 
#include <stdio.h>
#define PRINT(...) printf(__VA_ARGS__); __enable_irq();