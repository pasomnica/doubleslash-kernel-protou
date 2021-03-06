#ifndef __LINUX_PL_SENSOR_H
#define __LINUX_PL_SENSOR_H

#include <linux/notifier.h>

extern struct blocking_notifier_head psensor_notifier_list;

extern int register_notifier_by_psensor(struct notifier_block *nb);
extern int unregister_notifier_by_psensor(struct notifier_block *nb);
int psensor_enable_by_touch_driver(int on);
int power_key_check_in_pocket(void);
int pocket_detection_check(void);
#endif

