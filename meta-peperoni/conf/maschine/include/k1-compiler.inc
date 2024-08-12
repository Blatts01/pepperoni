# Custom compiler options for RISC-V 64GCVB architecture with RVA22 standard
# and 256-bit wide vector support

TARGET_CFLAGS += "-march=rv64gcvb -mabi=lp64d -mvector-width=256"
TARGET_CXXFLAGS += "-march=rv64gcvb -mabi=lp64d -mvector-width=256"
TARGET_LDFLAGS += "-march=rv64gcvb -mabi=lp64d"