struct cpu_inform pmucal_cpuinform_list[] = {
	PMUCAL_CPU_INFORM(0, 0x15860000, 0x0860),
	PMUCAL_CPU_INFORM(1, 0x15860000, 0x0864),
	PMUCAL_CPU_INFORM(2, 0x15860000, 0x0868),
	PMUCAL_CPU_INFORM(3, 0x15860000, 0x086c),
	PMUCAL_CPU_INFORM(4, 0x15860000, 0x0870),
	PMUCAL_CPU_INFORM(5, 0x15860000, 0x0874),
	PMUCAL_CPU_INFORM(6, 0x15860000, 0x0878),
	PMUCAL_CPU_INFORM(7, 0x15860000, 0x087c),
};
unsigned int cpu_inform_list_size = ARRAY_SIZE(pmucal_cpuinform_list);
