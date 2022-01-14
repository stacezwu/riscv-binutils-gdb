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

/* assembler minimal setup,
    things required to exisit TODO */

#include "as.h"
#include "bfd.h"

const char *md_shortopts = "";
struct option md_longopts[] = {};
size_t md_longopts_size = sizeof(md_longopts);

/* comment characters and separators */
const char comment_chars[] = "";
const char line_comment_chars[] = "//";
const char line_separator_chars[] = ";";

/* no floating points */
const char EXP_CHARS[] = "";
const char FLT_CHARS[] = "";

/* no pseudo ops yet */
const pseudo_typeS md_pseudo_table[] = 
{
    { (char*)0, (void(*)(int))0, 0 }
};

/* cant parse if there are no opts */
int md_parse_option(int c, const char *args)
{
    return 0;
}

/* command line usage */
void md_show_usage(FILE *stream)
{
    fprintf(stream, "\n Straight options: none available yet\n");
}

/* custom initializer hook, called once per assembler invokation */
void md_begin(void)
{
    return;
}

/* main assembler hook, called once for each "instruction string" */
void md_assemble(char *insn_str)
{
    return;
}

/* this gets invoked in case 'md_parse_name' has failed */
symbolS *md_undefined_symbol(char *name)
{
    return 0;
}

/* again, no floating point expressions available */
const char *md_atof(int type, char *lit, int *size)
{
    return 0;
}

/* cant round up sections yet */
valueT md_section_align(asection *seg, valueT val)
{
    return 0;
}

/* also, generally no support for frag conversion */
void md_convert_frag(bfd *abfd, asection *seg, fragS *fragp)
{
    as_fatal(_("unexpected call"));
    return;
}

/* not possible, instead convert to relocs and write them */
void md_apply_fix(fixS *fixp, valueT *val, segT seg)
{
    return;
}

/* if not applied/resolved, turn a fixup into a relocation entry */
arelent *tc_gen_reloc(asection *seg, fixS *fixp)
{
    return 0;
}

/* no pc_relative reolocations yet, might provide one later for 
    experiments */
long md_pcrel_from(fixS *fixp)
{
    as_fatal(_("unexpected call"));
    return 0;
}

/* all instructions and immediates are fixed in size, therefore
    no relaxation required */
int md_estimate_size_before_relax(fragS *fragp, asection *seg)
{
    as_fatal(_("unexpected call"));
    return 0;
}
