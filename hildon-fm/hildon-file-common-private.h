/*
 * This file is part of hildon-fm package
 *
 * Copyright (C) 2006 Nokia Corporation.  All rights reserved.
 *
 * Contact: Marius Vollmer <marius.vollmer@nokia.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * version 2.1 as published by the Free Software Foundation.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */
/*
  hildon-file-common-private.h
*/

#ifndef HILDON_FILE_COMMON_PRIVATE_H__
#define HILDON_FILE_COMMON_PRIVATE_H__

G_BEGIN_DECLS

#include <libintl.h>

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "hildon-file-selection.h"

#define _(String) dgettext("hildon-fm", String)
#define N_(String) String
#define HCS(String) dgettext("hildon-common-strings", String)
#define KE(String) dgettext("ke-recv", String)
#define FM(String) dgettext("osso-filemanager", String)

/* If environment doesn't define, use this */
#define MAX_FILENAME_LENGTH_DEFAULT 255

/* Default weights for sorting operation. Negative weight informs
   that only single sorting criteria (=name) is used. */
#define SORT_WEIGHT_FILE   10
#define SORT_WEIGHT_FOLDER -10

#define SORT_WEIGHT_DEVICE        -20
#define SORT_WEIGHT_INTERNAL_MMC  -19
#define SORT_WEIGHT_EXTERNAL_MMC  -18
#define SORT_WEIGHT_USB           -17
#define SORT_WEIGHT_REMOTE_DEVICE -16
#define SORT_WEIGHT_OBEX          -15
#define SORT_WEIGHT_SMB           -14
#define SORT_WEIGHT_UPNP          -13

enum HildonFileSystemModelPrivateColumns {
	PRIV_COLUMN_DISPLAY_TEXT = HILDON_FILE_SYSTEM_MODEL_NUM_COLUMNS,
	PRIV_COLUMN_DISPLAY_ATTRS,
	NUM_COLUMNS,
};

/* In hildon-file-selection.c
 */

gboolean _hildon_file_selection_select_path (HildonFileSelection *self,
					     const GtkFilePath *path,
					     GError ** error);
void _hildon_file_selection_unselect_path (HildonFileSelection *self,
					   const GtkFilePath *path);

gboolean
_hildon_file_selection_set_current_folder_path (HildonFileSelection *self,
						const GtkFilePath *folder,
						GError ** error);
GtkFilePath *
_hildon_file_selection_get_current_folder_path (HildonFileSelection *self);

GSList *_hildon_file_selection_get_selected_files (HildonFileSelection
						   *self);
void _hildon_file_selection_realize_help (HildonFileSelection *self);


G_END_DECLS

#endif
