/* SPDX-License-Identifier: GPL-2.0-only */

#ifndef __BOOTSPLASH_H__
#define __BOOTSPLASH_H__

#include <types.h>

/**
 * Sets up the framebuffer with the bootsplash.jpg from cbfs.
 * Returns 0 on success
 * CB_ERR on cbfs errors
 * and >0 on jpeg errors.
 */
void set_bootsplash(unsigned char *framebuffer, unsigned int x_resolution,
		    unsigned int y_resolution, unsigned int bytes_per_line,
		    unsigned int fb_resolution);

/*
 * Allow platform-specific BMP logo overrides via HAVE_CUSTOM_BMP_LOGO config.
 * For example: Introduce configurable BMP logo for customization on platforms like ChromeOS
 */
const char *bmp_logo_filename(void);
void *bmp_load_logo(size_t *logo_size);
void bmp_release_logo(void);

#endif
