#ifndef _GSC_SQLITE_HPP_
#define _GSC_SQLITE_HPP_

/* gsc functions */
#include "gsc.hpp"

void gsc_sqlite_open();
void gsc_sqlite_query();
void gsc_sqlite_close();

void gsc_async_sqlite_initialize();
void gsc_async_sqlite_create_query();
void gsc_async_sqlite_create_query_nosave();
void gsc_async_sqlite_checkdone();

void gsc_async_sqlite_create_entity_query(scr_entref_t entid);
void gsc_async_sqlite_create_entity_query_nosave(scr_entref_t entid);

void free_sqlite_db_stores_and_tasks();

#endif
