#include <vmem/vmem_ram.h>
#include <param/param_commands.h>
#include <param/param_scheduler.h>

VMEM_DEFINE_STATIC_RAM(config, "config", 5000);
VMEM_DEFINE_STATIC_RAM(commands, "commands", 5000);
VMEM_DEFINE_STATIC_RAM(schedule, "schedule", 5000);
