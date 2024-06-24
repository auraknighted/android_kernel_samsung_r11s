/*
 * secgpio_dvs.h -- Samsung GPIO debugging and verification system
 */

#ifndef __SECGPIO_DVS_H
#define __SECGPIO_DVS_H

#include <linux/types.h>

enum gdvs_phone_status {
	PHONE_INIT = 0,
	PHONE_SLEEP,
	GDVS_PHONE_STATUS_MAX
};

struct gpiomap_result_t {
	unsigned char *init;
	unsigned char *sleep;
};

struct gpio_dvs_t {
	struct gpiomap_result_t *result;
	unsigned int count;
	bool check_sleep;
	void (*check_gpio_status)(unsigned char phonestate,
				const char *skip_grps);
	const char *skip_grps;
	int gpio_num;
};

struct secgpio_dvs_data {
	struct gpio_dvs_t *gpio_dvs;
	unsigned int (*get_nr_gpio)(void);
};

/* list of all exported SoC specific data */
extern const struct secgpio_dvs_data s5e9925_secgpio_dvs_data;
extern const struct secgpio_dvs_data s5e8825_secgpio_dvs_data;

#endif /* __SECGPIO_DVS_H */
