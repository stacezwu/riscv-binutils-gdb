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


#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

const bfd_arch_info_type bfd_straight_arch = 
{
    /* word size in bits  */
    32,

    /* address size in bits  */
    32, 

    /* byte size in bits  */
    8,

    /* architecture enum  */
    bfd_arch_straight,

    /* machine number */
    bfd_mach_straight,
    
    /* architecture name */
    "straight",
    
    /* printable name */
    "straight",

    /* alignment */
    4,

    /* is default ? */
    true,

    /* default checker for architecture compatibility */
    bfd_default_compatible,

    /* if a particular bfd_arch_info_type matches 
        "this" bfd_arch_info_type */
    bfd_default_scan, 

    /* memory allocateor around bfd_malloc */
    bfd_arch_default_fill, 

    NULL
};