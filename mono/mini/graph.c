/**
 * \file
 * Helper routines to graph various internal states of the code generator
 *
 * Author:
 *   Dietmar Maurer (dietmar@ximian.com)
 *
 * (C) 2003 Ximian, Inc.
 */

#include <config.h>
#include <mono/utils/mono-compiler.h>

#ifndef DISABLE_JIT

#include <string.h>
#include <mono/metadata/debug-helpers.h>

#include "mini.h"

static void
dtree_emit_one_loop_level (MonoCompile *cfg, FILE *fp, MonoBasicBlock *h)
{
}

static void
cfg_emit_one_loop_level (MonoCompile *cfg, FILE *fp, MonoBasicBlock *h)
{
}

static void
mono_draw_dtree (MonoCompile *cfg, FILE *fp)
{
}

static void
mono_draw_cfg (MonoCompile *cfg, FILE *fp)
{
}

static void
mono_draw_code_cfg (MonoCompile *cfg, FILE *fp)
{
}

void
mono_draw_graph (MonoCompile *cfg, MonoGraphOptions draw_options)
{
}

#else /* !DISABLE_JIT */

MONO_EMPTY_SOURCE_FILE (graph);

#endif /* !DISABLE_JIT */

