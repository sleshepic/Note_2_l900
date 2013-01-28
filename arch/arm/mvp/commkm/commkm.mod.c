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
	{ 0x79ee379d, "QP_RegisterListener" },
	{ 0x669d57c5, "QP_UnregisterListener" },
	{ 0x2524fd72, "kmalloc_caches" },
	{ 0xe540fc69, "QP_RegisterDetachCB" },
	{ 0x5d6cfb23, "QP_Attach" },
	{ 0x6cceca79, "kmem_cache_alloc" },
	{ 0x789f40c2, "QP_EnqueueCommit" },
	{ 0xf32e4cd0, "QP_EnqueueSpace" },
	{ 0x2008083d, "QP_EnqueueReset" },
	{ 0x2bfe57a4, "QP_EnqueueSegment" },
	{ 0x7b8e14b0, "QP_DequeueCommit" },
	{ 0x54983252, "QP_DequeueSpace" },
	{ 0x87be76bf, "QP_DequeueReset" },
	{ 0x7b4459bd, "QP_DequeueSegment" },
	{ 0xb6b801b7, "QP_Detach" },
	{ 0x2f103932, "QP_Notify" },
	{ 0x42224298, "sscanf" },
	{ 0x810b3618, "param_ops_string" },
	{ 0x465757c3, "cpu_present_mask" },
	{ 0x9853db53, "queue_delayed_work_on" },
	{ 0x9669e72d, "__alloc_workqueue_key" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x7426f76c, "init_timer_key" },
	{ 0xddc16c88, "flush_delayed_work" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0x1f19905d, "queue_delayed_work" },
	{ 0xe1d61c3a, "cancel_delayed_work_sync" },
	{ 0xb6b493ad, "destroy_workqueue" },
	{ 0xe1c20e49, "flush_workqueue" },
	{ 0x37a0cba, "kfree" },
	{ 0x74183df, "__mutex_init" },
	{ 0x12da5bb2, "__kmalloc" },
	{ 0x41e92619, "__init_waitqueue_head" },
	{ 0x341dbfa3, "__per_cpu_offset" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x7d11c268, "jiffies" },
	{ 0x71c90087, "memcmp" },
	{ 0x103aa7b2, "mutex_trylock" },
	{ 0xc8b57c27, "autoremove_wake_function" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0xf83178bd, "finish_wait" },
	{ 0x32f80ea9, "prepare_to_wait" },
	{ 0xd62c833f, "schedule_timeout" },
	{ 0x3bd1b1f6, "msecs_to_jiffies" },
	{ 0x5f754e5a, "memset" },
	{ 0xc2161e33, "_raw_spin_lock" },
	{ 0x311b7963, "_raw_spin_unlock" },
	{ 0x72542c85, "__wake_up" },
	{ 0xb368ec89, "_raw_spin_unlock_bh" },
	{ 0x8bd94317, "_raw_spin_lock_bh" },
	{ 0xbb8c187d, "module_put" },
	{ 0x1d88f745, "mutex_lock_interruptible" },
	{ 0x6a8a4c61, "mutex_unlock" },
	{ 0x9697871a, "kernel_sendmsg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0x27e1a049, "printk" },
	{ 0xa4b01c6f, "Mvpkm_CommEvRegisterProcessCB" },
	{ 0xf469fe91, "kernel_bind" },
	{ 0x3a688c6d, "sock_create_kern" },
	{ 0xe9bd2346, "sock_release" },
	{ 0x5fe6c44c, "Mvpkm_CommEvUnregisterProcessCB" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mvpkm";


MODULE_INFO(srcversion, "3EDC81FF5DA7227B8828223");
