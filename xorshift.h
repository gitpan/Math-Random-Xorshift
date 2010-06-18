#ifndef XORSHIFT_H
#define XORSHIFT_H

#include <stdint.h>
#include <stdbool.h>

typedef struct {
  uint32_t x, y, z, w;
} xorshift_t;

bool     xorshift_srand(xorshift_t *prng,
                               uint32_t x, uint32_t y, uint32_t z, uint32_t w);
uint32_t xorshift_irand(xorshift_t *prng);
double   xorshift_rand(xorshift_t *prng, double upper_limit);

#endif XORSHIFT_H
