/* asm-common-aarch64.h  -  Common macros for AArch64 assembly
 *
 * Copyright (C) 2018 Martin Storsjö <martin@martin.st>
 *
 * This file is part of Libgcrypt.
 *
 * Libgcrypt is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2.1 of
 * the License, or (at your option) any later version.
 *
 * Libgcrypt is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program; if not, see <http://www.gnu.org/licenses/>.
 */

#ifndef GCRY_ASM_COMMON_AARCH64_H
#define GCRY_ASM_COMMON_AARCH64_H

#include <config.h>

#ifdef __ELF__
# define ELF(...) __VA_ARGS__
#else
# define ELF(...) /*_*/
#endif

#endif /* GCRY_ASM_COMMON_AARCH64_H */
