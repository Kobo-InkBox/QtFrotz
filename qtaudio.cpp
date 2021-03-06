/*
 * ux_audio_oss.c - Sound support using the OSS drivers
 *
 * This code is mostly verbatim from the file x_sample.c in Daniel
 * Schepler's xfrotz-2.32.1.
 *
 * This file is part of Frotz.
 *
 * Frotz is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Frotz is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#include "frotz/frotz.h"
#include "qtfrotz.h"



/*
 * os_beep
 *
 * Play a beep sound. Ideally, the sound should be high- (number == 1)
 * or low-pitched (number == 2).
 *
 */
void os_beep (int)
{
}/* os_beep */



/*
 * os_prepare_sample
 *
 * Load the sample from the disk.
 *
 */
void os_prepare_sample (int)
{
}/* os_prepare_sample */



/*
 * os_start_sample
 *
 * Play the given sample at the given volume (ranging from 1 to 8 and
 * 255 meaning a default volume). The sound is played once or several
 * times in the background (255 meaning forever). In Z-code 3 the
 * repeats value is always 0 and the number of repeats is taken from
 * the sound file itself. The end_of_sound function is called as soon
 * as the sound finishes.
 *
 */
void os_start_sample (int, int, int, zword)
{
}/* os_start_sample */



/*
 * os_stop_sample
 *
 * Turn off the current sample.
 *
 */
void os_stop_sample(int)
{
}/* os_stop_sample */



/*
 * os_finish_with_sample
 *
 * Remove the current sample from memory (if any).
 *
 */
void os_finish_with_sample(int)
{
}/* os_finish_with_sample */



/*
 * os_wait_sample
 *
 * Stop repeating the current sample and wait until it finishes.
 *
 */
void os_wait_sample(void)
{
}/* os_wait_sample */
