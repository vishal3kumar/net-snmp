/*
 *  pass: pass through extensiblity
 */
#ifndef _MIBGROUP_PASS_PERSIST_H
#define _MIBGROUP_PASS_PERSIST_H

config_require(ucd-snmp/extensible util_funcs)

int setPassPersist __P((int, u_char *, u_char, int, u_char *,oid *, int));
unsigned char *var_extensible_pass_persist __P((struct variable *, oid *, int *, int, int *, int (**write) __P((int, u_char *, u_char, int, u_char *, oid *, int)) ));

/* config file parsing routines */
void pass_persist_free_config __P((void));
void pass_persist_parse_config __P((char *, char *));
int pass_persist_compare __P((void *, void *));

#include "mibdefs.h"

#endif /* _MIBGROUP_PASS_PERSIST_H */



