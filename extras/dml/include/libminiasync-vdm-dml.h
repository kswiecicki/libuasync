/* SPDX-License-Identifier: BSD-3-Clause */
/* Copyright 2021-2022, Intel Corporation */

/*
 * libminiasync-vdm-dml.h -- definition of miniasync dml data mover
 *                           implementation
 */

#ifndef MINIASYNC_VDM_DML_H
#define MINIASYNC_VDM_DML_H 1

#include <stddef.h>
#include <stdio.h>

#include "libminiasync-vdm-dml/data_mover_dml.h"

#ifdef __cplusplus
extern "C" {
#endif

/* MINIASYNC_DML flags */
/* XXX: these flags need to be unified across all vdms */

#define MINIASYNC_DML_F_MEM_DURABLE		(1U << 0)
#define MINIASYNC_DML_F_VALID_FLAGS	(MINIASYNC_DML_F_MEM_DURABLE)

#ifdef __cplusplus
}
#endif

#endif /* MINIASYNC_VDM_DML_H */
