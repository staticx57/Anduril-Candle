/*
 * fsm-wdt.h: WDT (Watch Dog Timer) functions for SpaghettiMonster.
 *
 * Copyright (C) 2017 Selene Scriven
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef FSM_WDT_H
#define FSM_WDT_H

#define TICKS_PER_SECOND 62

void WDT_on();
inline void WDT_off();

#ifdef TICK_DURING_STANDBY
volatile uint8_t f_wdt = 0;
#endif

#endif
