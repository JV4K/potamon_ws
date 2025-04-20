bool bus_comms_fault          # True if bus communication failed
bool usb_comms_fault          # True if USB communication failed
bool[4] bridge_faults         # Fault flags for each motor bridge (index 0-3)
bool[4] overcurrent_faults    # Overcurrent flags for each motor (index 0-3)