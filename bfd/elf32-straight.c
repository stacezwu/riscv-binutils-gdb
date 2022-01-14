/* 

   This file is part of BFD, the Binary File Descriptor library.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING3. If not,
   see <http://www.gnu.org/licenses/>.  */

/* This file handles STRAIGHT ELF targets.  */

/* TODO  */
#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"
#include "elf-bfd.h"

static reloc_howto_type*
straight_reloc_type_lookup(bfd *abfd,
                           bfd_reloc_code_real_type code)
{
   return 0;
}

static reloc_howto_type*
straight_reloc_name_lookup(bfd *abfd, 
                           const char *name)
{
   return 0;
}

#define bfd_elf32_bfd_reloc_type_lookup   straight_reloc_type_lookup
#define bfd_elf32_bfd_reloc_name_lookup   straight_reloc_name_lookup

/* things expected to provide */
#define ELF_ARCH              bfd_arch_straight
#define ELF_MAXPAGESIZE       0x4000
#define ELF_MACHINE_CODE      EM_STRAIGHT

#undef TARGET_LITTLE_SYM
#define TARGET_LITTLE_SYM     straight_elf32_vec

#undef TARGE_LITTLE_NAME
#define TARGET_LITTLE_NAME    "elf32-straight"

/* this header has to be included in the end */
#include "elf32-target.h"

