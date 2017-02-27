#ifndef __COREDUMP_H
#define __COREDUMP_H

#include <stdint.h>
#include <stdio.h>
#include "elfcore.h"

struct corefile *core_new(uint32_t machine);
void core_add_ph(struct corefile *cf, uint32_t p_type, uint32_t p_vaddr,
                 const void *data, uint32_t p_filesz);
void core_note_add(struct corefile *cf,
                   char *name, uint32_t type, const void *data, size_t len);
void core_note_add_prstatus(struct corefile *cf,
                            uint16_t signal, const uint32_t regs[18]);
void core_note_add_arm_vfp(struct corefile *cf, const struct ARM_vfp *regs);
void core_dump(FILE *f, struct corefile *cf);
void core_free(struct corefile *cf);

#include "general.h"
#include "target.h"
void zynq_amp_core_dump(target *t);

#endif
