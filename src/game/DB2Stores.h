/*
 * This code is part of MaNGOS. Contributor & Copyright details are in AUTHORS/THANKS.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef MANGOS_DB2STORES_H
#define MANGOS_DB2STORES_H

#include "Common.h"
#include "Database/DB2Store.h"
#include "DB2Structure.h"

#include <list>

extern DB2Storage <ItemEntry>                    sItemStore;
extern DB2Storage <ItemCurrencyCostEntry>        sItemCurrencyCostStore;
extern DB2Storage <ItemExtendedCostEntry>        sItemExtendedCostStore;
extern DB2Storage <SpellReagentsEntry>           sSpellReagentsStore;

void LoadDB2Stores(const std::string& dataPath);

DB2Storage <ItemEntry> const* GetItemDisplayStore();

#endif
