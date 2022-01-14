/* Straight instructions

   Copyright (C) 2006-2021 Free Software Foundation, Inc.

   This file is part of the GNU opcodes library.

   This library is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License
   along with this file; see the file COPYING.  If not, write to the
   Free Software Foundation, 51 Franklin Street - Fifth Floor, Boston,
   MA 02110-1301, USA.  */

#ifndef TC_STRAIGHT_H
#define TC_STRAIGHT_H

#define TARGET_FORMAT "elf32-straight"
#define TARGET_ARCH bfd_arch_straight
#define TARGET_MACH bfd_mach_straight

/* little endian support only */
#define TARGET_BYTES_BIG_ENDIAN 0

/* customizable handling of expression operands */
#define md_operand(X)

/* proper byte/char-wise emission of numeric data 
    with respect to the endianness */
#define md_number_to_chars number_to_chars_littleendian

/* not having this will require you to provide more 
    hooks to handle jumps/broken works, such as 
    md_create_long_jump, md_long_jump_size, etc. */
#define WORKING_DOT_WORD

#endif