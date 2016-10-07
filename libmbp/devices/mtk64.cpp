/*
 * Copyright (C) 2016  Andrew Gunnerson <andrewgunnerson@gmail.com>
 *
 * This file is part of MultiBootPatcher
 *
 * MultiBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MultiBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "devices/mtk64.h"

#include "devices/paths.h"

namespace mbp
{

void addMtk64Devices(std::vector<Device *> *devices)
{
    Device *device;

// Tecno Camon C8
    device = new Device();
    device->setId("h352");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "h352", "h353", "h352_a1", "h352_a2", "TECNO-C8", "c8"});
    device->setName("Tecno C8");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ MTK_METADATA, MTK_11230000_METADATA,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_LK, MTK_11230000_LK,
        MTK_LOGO, MTK_11230000_LOGO,
        MTK_PARA, MTK_11230000_PARA,
        MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2 });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);

// Tecno J8 BOOM
    device = new Device();
    device->setId("h354");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "h354", "h354c1", "h354_c1", "TECNO-J8", "J8"});
    device->setName("Tecno J8");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ MTK_METADATA, MTK_11230000_METADATA,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_LK, MTK_11230000_LK,
        MTK_LOGO, MTK_11230000_LOGO,
        MTK_PARA, MTK_11230000_PARA,
        MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2 });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);
    
    // Quantum GO 4G
    device = new Device();
    device->setId("Q2");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "Q2"});
    device->setName("Quantum GO 4G");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ "/dev/block/mmcblk0boot0", MTK_PROINFO, MTK_11230000_PROINFO,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_PROTECT1, MTK_11230000_PROTECT1,
        MTK_PROTECT2, MTK_11230000_PROTECT2,
        MTK_LK, MTK_11230000_LK,
        MTK_PARA, MTK_11230000_PARA,
        MTK_LOGO, MTK_11230000_LOGO,
		MTK_EXPDB, MTK_11230000_EXPDB,
        MTK_SECCFG, MTK_11230000_SECCFG,
        MTK_OEMKEYSTORE, MTK_11230000_OEMKEYSTORE,
        MTK_SECRO, MTK_11230000_SECRO,
        MTK_KEYSTORE, MTK_11230000_KEYSTORE,
		MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2,
        MTK_FRP, MTK_11230000_FRP,
        MTK_NVDATA, MTK_11230000_NVDATA,
        MTK_METADATA, MTK_11230000_METADATA });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);
    
    // Allview V2 Viper X (MT6753)
    device = new Device();
    device->setId("V2_Viper_X");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "V2_Viper_X", "v2_viper_x", "v2_viperx", "V2VIPERX", "v2viperx"});
    device->setName("Allview Viper X");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ MTK_METADATA, MTK_11230000_METADATA,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_LK, MTK_11230000_LK,
        MTK_LOGO, MTK_11230000_LOGO,
        MTK_PARA, MTK_11230000_PARA,
        MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2 });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);

    // GiONEE Elife SPlus
    device = new Device();
    device->setId("Splus");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "Splus", "S_plus", "SPlus", "S_Plus"});
    device->setName("GiONEE SPlus");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ MTK_METADATA, MTK_11230000_METADATA,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_LK, MTK_11230000_LK,
        MTK_LOGO, MTK_11230000_LOGO,
        MTK_PARA, MTK_11230000_PARA,
        MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2 });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);
 
    // ZTE Blade V6
    device = new Device();
    device->setId("Blade_V6");
    device->setArchitecture(ARCH_ARM64_V8A);
    device->setCodenames({ "Blade_V6", "aeon6735_65u_nj_l", "P635A20"});
    device->setName("ZTE Blade V6");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR, MTK_11230000_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, MTK_11230000_SYSTEM,
        "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, MTK_11230000_CACHE,
        "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, MTK_11230000_USERDATA,
        "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, MTK_11230000_BOOT,
        "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, MTK_11230000_RECOVERY,
        "/dev/block/mmcblk0p8" });
    device->setExtraBlockDevs({ MTK_METADATA, MTK_11230000_METADATA,
        MTK_NVRAM, MTK_11230000_NVRAM,
        MTK_LK, MTK_11230000_LK,
        MTK_LOGO, MTK_11230000_LOGO,
        MTK_PARA, MTK_11230000_PARA,
        MTK_TEE1, MTK_11230000_TEE1,
        MTK_TEE2, MTK_11230000_TEE2 });
    device->twOptions()->supported = true;
    device->twOptions()->graphicsBackends = { "fbdev" };
    device->twOptions()->flags = Device::FLAG_TW_GRAPHICS_FORCE_USE_LINELENGTH;
    device->twOptions()->pixelFormat = Device::TwPixelFormat::RGBX_8888;
    device->twOptions()->maxBrightness = 255;
    device->twOptions()->defaultBrightness = 162;
    device->twOptions()->cpuTempPath = "/sys/class/thermal/thermal_zone1/temp";
    devices->push_back(device);
}

}
