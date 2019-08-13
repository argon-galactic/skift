#pragma once

/* Copyright © 2018-2019 N. Van Bossuyt.                                      */
/* This code is licensed under the MIT License.                               */
/* See: LICENSE.md                                                            */

#include <libsystem/runtime.h>
#include <libsystem/messaging.h>
#include <libsystem/error.h>

#define HIDEO_PROTOCOL "hideo"

typedef enum
{
    // The window cannot be moved
    HIDEO_WFLAG_STATIC = FLAG(0),
} hideo_window_flags_t;

typedef int hideo_window_handle_t;