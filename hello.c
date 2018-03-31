#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
MODULE_LICENSE("GPL");

static char *who = "Sriram";
module_param(who, charp, 0000); 
MODULE_PARM_DESC(who, "The module will say \"hello <who>\" at the start!"); 

static int hello_init(void)
{
printk(KERN_ALERT "Hello, world\n");
printk(KERN_ALERT "hello %s\n", who);
return 0;
}
static void hello_exit(void)
{
printk(KERN_ALERT "Goodbye, cruel world\n");
}
module_init(hello_init);
module_exit(hello_exit);
