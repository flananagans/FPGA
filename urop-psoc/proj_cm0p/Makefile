################################################################################
# \file Makefile
# \version 1.0
#
# \brief
# Makefile for configurating the Cortex-M0p core project
#
################################################################################
# \copyright
# Copyright 2020-2024, Cypress Semiconductor Corporation (an Infineon company)
# SPDX-License-Identifier: Apache-2.0
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#     http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
################################################################################

include ../common.mk

################################################################################
# Basic Configuration
###############################################################################

# Name of application (used to derive name of final linked file).
#
# If APPNAME is edited, ensure to update or regenerate launch
# configurations for your IDE.
APPNAME=proj_cm0p

# If set to "true" or "1", display full command-lines when building.
VERBOSE=


################################################################################
# Advanced Configuration
################################################################################

# Enable optional code that is ordinarily disabled by default.
#
# Available components depend on the specific targeted hardware and firmware
# in use. In general, if you have
#
#    COMPONENTS=foo bar
#
# ... then code in directories named COMPONENT_foo and COMPONENT_bar will be
# added to the build

# Chose desired RTOS environment. Available options - FREERTOS, THREADX
COMPONENTS=FREERTOS

# Include additional components based on the selected environment
ifeq ($(findstring FREERTOS, $(COMPONENTS)), FREERTOS)
    COMPONENTS+=LWIP MBEDTLS SECURE_SOCKETS
    $(info RTOS is FreeRTOS)
else ifeq ($(findstring THREADX, $(COMPONENTS)), THREADX)
    COMPONENTS+=NETXDUO SECURE_SOCKETS NETXSECURE
    $(info RTOS is ThreadX)
endif

# Like COMPONENTS, but disable optional code that was enabled by default.
DISABLE_COMPONENTS=

# By default the build system automatically looks in the Makefile's directory
# tree for source code and builds it. The SOURCES variable can be used to
# manually add source code to the build process from a location not searched
# by default, or otherwise not found by the build system.
SOURCES=

# Like SOURCES, but for include directories. Value should be paths to
# directories (without a leading -I).
INCLUDES=

ifeq ($(findstring FREERTOS, $(COMPONENTS)), FREERTOS)
# Custom configuration of mbedtls library.
MBEDTLSFLAGS=MBEDTLS_USER_CONFIG_FILE='"mbedtls_user_config.h"'
DEFINES+=$(MBEDTLSFLAGS)
endif

# Add additional defines to the build process (without a leading -D).
DEFINES+= CYBSP_WIFI_CAPABLE CY_RETARGET_IO_CONVERT_LF_TO_CRLF CY_RTOS_AWARE

ifeq ($(findstring THREADX, $(COMPONENTS)), THREADX)

# Conditionally include the NetX Duo and NetX Secure user configuraion files.
DEFINES+=NX_INCLUDE_USER_DEFINE_FILE
DEFINES+=NX_SECURE_INCLUDE_USER_DEFINE_FILE

# PSoC6 uses 7 priority levels with 7 being the lowest priority. 
# The PendSV interrupt used for scheduling runs at priority 7.
# If there are no runnable tasks the system will stay in the PendSV
# handler until there is a runnable thread. Other priority 7 interrupts
# will be held off during this time so we need to make sure the default
# HAL interrupt priority is higher that 7.
DEFINES+=CYHAL_ISR_PRIORITY_DEFAULT=6

endif

################################################################################
# Advanced Configuration
################################################################################

# Enable optional code that is ordinarily disabled by default.
#
# Available components depend on the specific targeted hardware and firmware
# in use. In general, if you have
#
#    COMPONENTS=foo bar
#
# ... then code in directories named COMPONENT_foo and COMPONENT_bar will be
# added to the build
#
COMPONENTS+=

# Like COMPONENTS, but disable optional code that was enabled by default.
DISABLE_COMPONENTS=#CM0P_SLEEP CM0P_SECURE CM0P_CRYPTO CM0P_BLESS

# Set this application to run at the CM0+
CORE=CM0P
CORE_NAME=CM0P_0

# By default the build system automatically looks in the Makefile's directory
# tree for source code and builds it. The SOURCES variable can be used to
# manually add source code to the build process from a location not searched
# by default, or otherwise not found by the build system.
SOURCES=$(wildcard ../shared/source/COMPONENT_CM0P/*.c)

# Like SOURCES, but for include directories. Value should be paths to
# directories (without a leading -I).
INCLUDES=../shared/include

# Add additional defines to the build process (without a leading -D).
DEFINES+=CY_CORTEX_M4_APPL_ADDR=0x10140000 CY_IPC_DEFAULT_CFG_DISABLE=1 CYBSP_CUSTOM_SYSCLK_PM_CALLBACK=1 CY_WIFI_HOST_WAKE_SW_FORCE=0 CYHAL_ISR_PRIORITY_DEFAULT=3

# Select softfp or hardfp floating point. Default is softfp.
VFP_SELECT=

CFLAGS=
CXXFLAGS=
LDFLAGS=

# Additional / custom assembler flags.
#
# NOTE: Includes and defines should use the INCLUDES and DEFINES variable
# above.
ASFLAGS=

# Additional / custom linker flags.


# Additional / custom libraries to link in to the application.
LDLIBS=

# Path to the linker script to use (if empty, use the default linker script).
LINKER_SCRIPT=

# Custom pre-build commands to run.
PREBUILD=

# Custom post-build commands to run.
POSTBUILD=


################################################################################
# Paths
################################################################################

# Relative path to the project directory (default is the Makefile's directory).
#
# This controls where automatic source code discovery looks for code.
CY_APP_PATH=

# Relative path to the shared repo location.
#
# All .mtb files have the format, <URI>#<COMMIT>#<LOCATION>. If the <LOCATION> field 
# begins with $$ASSET_REPO$$, then the repo is deposited in the path specified by 
# the CY_GETLIBS_SHARED_PATH variable. The default location is one directory level 
# above the current app directory.
# This is used with CY_GETLIBS_SHARED_NAME variable, which specifies the directory name.
CY_GETLIBS_SHARED_PATH=../..

# Directory name of the shared repo location.
#
CY_GETLIBS_SHARED_NAME=mtb_shared

# Absolute path to the compiler's "bin" directory. The variable name depends on the 
# toolchain used for the build. Refer to the ModusToolbox user guide to get the correct
# variable name for the toolchain used in your build.
# 
# The default depends on the selected TOOLCHAIN (GCC_ARM uses the ModusToolbox
# software provided compiler by default).
CY_COMPILER_GCC_ARM_DIR=

include $(CY_TOOLS_DIR)/make/start.mk