/*
 * Notification function
 *
 * Copyright (C) 2011, Google Inc.
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#if !defined( _LIBBDE_NOTIFY_H )
#define _LIBBDE_NOTIFY_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#include <stdio.h>

#include "libbde_extern.h"

#if defined( __cplusplus )
extern "C" {
#endif

#if !defined( HAVE_LOCAL_LIBBDE )

LIBBDE_EXTERN \
void libbde_notify_set_verbose(
      int verbose );

LIBBDE_EXTERN \
int libbde_notify_set_stream(
     FILE *stream,
     liberror_error_t **error );

LIBBDE_EXTERN \
int libbde_notify_stream_open(
     const char *filename,
     liberror_error_t **error );

LIBBDE_EXTERN \
int libbde_notify_stream_close(
     liberror_error_t **error );

#endif

#if defined( __cplusplus )
}
#endif

#endif

