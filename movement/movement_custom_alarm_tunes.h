/*
 * MIT License
 *
 * Copyright (c) 2023 Jeremy O'Brien
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MOVEMENT_CUSTOM_ALARM_TUNES_H_
#define MOVEMENT_CUSTOM_ALARM_TUNES_H_

const int8_t *alarm_tunes[] = {
    default_beep_long,
    fur_elise_tune,
    bach_tune,
    minuet_tune,
    mario_long,
    rick_astley_tune,
    imperial_march_tune,
    mortal_kombat_tune,
    ussr_tune,
    birthday_tune,
    wake_me_up,
    rudolf_tune,
    rich_man_tune,
    blue_tune,
    rapdure_tune,
    vannessamae_tune,
    strangers_tune,
    birdy_tune,
    popcorn_tune,
    fiddler_tune,
    looney_tunes_tune,
    spiderman_tune,
    barbie_tune,
    animaniacs_tune,
    tubular_bells_tune,
    island_tune,
    aha_tune,
    funky_tune,
    tetris_tune,
    flute_tune,
    pink_panther_tune,
    ipanema_tune,
    simpsons_tune,
    colinelb_tune,
    knightrider_tune,
    valkyries_tune,
    steam_tune,
    pacman_tune,
    adams_family_tune,
    riddle_tune,
    indiana_tune,
    beverly_hills_tune,
    figaro_tune,
    doraemon_tune,
    flintstones_tune,
    countdown_tune,
    frogger_tune,
    sabrewulf_tune,
    itchy_scratchy_tune,
};

const uint8_t movement_custom_alarm_count = (uint8_t)(sizeof(alarm_tunes)/sizeof(alarm_tunes[0]));

#endif // MOVEMENT_CUSTOM_SIGNAL_TUNES_H_
