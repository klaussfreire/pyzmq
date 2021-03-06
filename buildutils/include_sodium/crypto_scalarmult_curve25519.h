#ifndef crypto_scalarmult_curve25519_H
#define crypto_scalarmult_curve25519_H

#if 0
# ifndef SODIUM_HAVE_TI_MODE
#  define SODIUM_HAVE_TI_MODE
# endif
#endif

#include <stddef.h>

#include "export.h"

#ifdef __cplusplus
extern "C" {
#endif

#define crypto_scalarmult_curve25519_BYTES 32
SODIUM_EXPORT
size_t crypto_scalarmult_curve25519_bytes(void);

#define crypto_scalarmult_curve25519_SCALARBYTES 32
SODIUM_EXPORT
size_t crypto_scalarmult_curve25519_scalarbytes(void);

SODIUM_EXPORT
int crypto_scalarmult_curve25519(unsigned char *,const unsigned char *,const unsigned char *);

SODIUM_EXPORT
int crypto_scalarmult_curve25519_base(unsigned char *,const unsigned char *);

#ifdef SODIUM_HAVE_TI_MODE
# define crypto_scalarmult_curve25519_donna_c64 crypto_scalarmult_curve25519
# define crypto_scalarmult_curve25519_donna_c64_base crypto_scalarmult_curve25519_base
#else
# define crypto_scalarmult_curve25519_ref crypto_scalarmult_curve25519
# define crypto_scalarmult_curve25519_ref_base crypto_scalarmult_curve25519_base
#endif

#ifdef __cplusplus
}
#endif

#endif
