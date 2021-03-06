
/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. 
 *
 *
 * WARNING: This file has been autogenerated by yang/pyang_plugin/OpenCPE.py
 *
 *            !!! DO NOT MODIFY MANUALLY !!!
*/ 


#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "dm_token.h"
#include "dm_action.h"
#include "dm_action_table.h"


/* a first try on the new action table */
static struct dm_action dm_ntp = {
    .sel_len = 2,

    .pre = NULL,
    .action = NULL,
    .post = NULL,

    .chain_cnt = 0,
};

/* a first try on the new action table */
static struct dm_action dm_if_ip = {
    .sel_len = 2,

    .pre = NULL,
    .action = NULL,
    .post = NULL,

    .chain_cnt = 0,
};

/* a first try on the new action table */
static struct dm_action dm_dns = {
    .sel_len = 2,

    .pre = NULL,
    .action = NULL,
    .post = NULL,

    .chain_cnt = 0,
};

/* a first try on the new action table */
static struct dm_action dm_if_neigh = {
    .sel_len = 2,

    .pre = NULL,
    .action = NULL,
    .post = NULL,

    .chain_cnt = 0,
};

const struct dm_action *dm_actions[] = {
    [DM_NTP] = &dm_ntp,
    [DM_IF_IP] = &dm_if_ip,
    [DM_DNS] = &dm_dns,
    [DM_IF_NEIGH] = &dm_if_neigh,
};
