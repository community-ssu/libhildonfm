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

#ifndef __HILDON_FILE_SYSTEM_OBEX_H__
#define __HILDON_FILE_SYSTEM_OBEX_H__ 

#include "hildon-file-system-remote-device.h"

G_BEGIN_DECLS

#define HILDON_TYPE_FILE_SYSTEM_OBEX            (hildon_file_system_obex_get_type ())
#define HILDON_FILE_SYSTEM_OBEX(obj)            (G_TYPE_CHECK_INSTANCE_CAST ((obj), \
                                                HILDON_TYPE_FILE_SYSTEM_OBEX, \
                                                HildonFileSystemObex))
#define HILDON_FILE_SYSTEM_OBEX_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST ((klass), \
                                                HILDON_TYPE_FILE_SYSTEM_OBEX, \
                                                HildonFileSystemObexClass))
#define HILDON_IS_FILE_SYSTEM_OBEX(obj)         (G_TYPE_CHECK_INSTANCE_TYPE ((obj), \
                                                HILDON_TYPE_FILE_SYSTEM_OBEX))
#define HILDON_IS_FILE_SYSTEM_OBEX_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), \
                                                HILDON_TYPE_FILE_SYSTEM_OBEX))
#define HILDON_FILE_SYSTEM_OBEX_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS ((obj), \
                                                HILDON_TYPE_FILE_SYSTEM_OBEX, \
                                                HildonFileSystemObexClass))


typedef struct _HildonFileSystemObex HildonFileSystemObex;
typedef struct _HildonFileSystemObexClass HildonFileSystemObexClass;


struct _HildonFileSystemObex
{
    HildonFileSystemRemoteDevice parent_instance;
    gint bonding_handler_id;
};

struct _HildonFileSystemObexClass
{
    HildonFileSystemRemoteDeviceClass parent_class;
};

GType hildon_file_system_obex_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif
