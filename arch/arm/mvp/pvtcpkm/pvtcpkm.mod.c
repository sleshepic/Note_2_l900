#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xb6a59b7b, "module_layout" },
	{ 0xbb8c187d, "module_put" },
	{ 0x777f747d, "CommSvc_Unlock" },
	{ 0x2eb3c64f, "CommSvc_Lock" },
	{ 0xb86e4ab9, "random32" },
	{ 0x7d11c268, "jiffies" },
	{ 0x2514f0, "CommSvc_Alloc" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x9853db53, "queue_delayed_work_on" },
	{ 0x9669e72d, "__alloc_workqueue_key" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xddc16c88, "flush_delayed_work" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1f19905d, "queue_delayed_work" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xb6b493ad, "destroy_workqueue" },
	{ 0xe1c20e49, "flush_workqueue" },
	{ 0xd5dfa32a, "kernel_connect" },
	{ 0xf469fe91, "kernel_bind" },
	{ 0xe33c331e, "kernel_getsockopt" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0xb9951781, "kernel_listen" },
	{ 0x67504908, "kernel_accept" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x62d0c081, "kernel_getsockname" },
	{ 0xc2b0de98, "kernel_getpeername" },
	{ 0xa6c5fbea, "CommSvc_GetState" },
	{ 0x2524fd72, "kmalloc_caches" },
	{ 0x7eed8d81, "kobject_init_and_add" },
	{ 0x6cceca79, "kmem_cache_alloc" },
	{ 0x163347b0, "Mvpkm_FindVMNamedKSet" },
	{ 0xf32a06cf, "put_pid" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xae4a7e4c, "pid_task" },
	{ 0xb994211b, "find_get_pid" },
	{ 0x9d669763, "memcpy" },
	{ 0x97255bdf, "strlen" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x42d7688a, "kernel_setsockopt" },
	{ 0x6e04b501, "CommSvc_GetTranspInitArgs" },
	{ 0x5f754e5a, "memset" },
	{ 0x42224298, "sscanf" },
	{ 0xb76cde1e, "__put_net" },
	{ 0x202c73d0, "kobject_put" },
	{ 0xe84dd843, "kobject_del" },
	{ 0x8fc550bb, "CommSvc_RegisterImpl" },
	{ 0x216a4a6f, "nf_register_hooks" },
	{ 0x4dc42ffd, "nf_unregister_hooks" },
	{ 0x4922055e, "CommSvc_UnregisterImpl" },
	{ 0x6d3cbfdd, "kernel_sock_ioctl" },
	{ 0x3a688c6d, "sock_create_kern" },
	{ 0x1d88f745, "mutex_lock_interruptible" },
	{ 0xe9bd2346, "sock_release" },
	{ 0x701d0ebd, "snprintf" },
	{ 0x14c5a62e, "init_net" },
	{ 0x71c90087, "memcmp" },
	{ 0x7b1010cc, "Mvpkm_vmwareUid" },
	{ 0x74183df, "__mutex_init" },
	{ 0x103aa7b2, "mutex_trylock" },
	{ 0xdfd4df13, "CommSvc_Zombify" },
	{ 0x922260b3, "CommSvc_DispatchUnlock" },
	{ 0xc23662ec, "kernel_sock_shutdown" },
	{ 0x9697871a, "kernel_sendmsg" },
	{ 0x37a0cba, "kfree" },
	{ 0x27e1a049, "printk" },
	{ 0x7a380cd0, "sk_free" },
	{ 0xf77ea1e4, "CommSvc_ScheduleAIOWork" },
	{ 0x26477c07, "__vmalloc" },
	{ 0x38e8378d, "pgprot_kernel" },
	{ 0xaf514d38, "mutex_lock" },
	{ 0x999e8297, "vfree" },
	{ 0x6a8a4c61, "mutex_unlock" },
	{ 0x419c4694, "CommSvc_WriteVec" },
	{ 0x7764e4d, "kernel_recvmsg" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0xf412c9ca, "CommSvc_Write" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=commkm,mvpkm";


MODULE_INFO(srcversion, "606EE0797294E45A3318567");
