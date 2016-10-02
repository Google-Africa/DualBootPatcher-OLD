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

    // Tecno Camon C8 (MT6735)
    device = new Device();
    device->setId("TECNO-C8");
    device->setCodenames({ "h532", "h532_a1", "h532_a2", "h532_a1_sd", "h532_a2_sd", "h532_a1_l", "h532_a1_m", "h532_a2_l", "h532_a2_m", "c8", "TECNO C8", "TECNO-C8", "rlk6735"});
    device->setName("Tecno Camon C8");
    device->setBlockDevBaseDirs({ MTK_BASE_DIR });
    device->setSystemBlockDevs({ MTK_SYSTEM, "/dev/block/mmcblk0p20" });
    device->setCacheBlockDevs({ MTK_CACHE, "/dev/block/mmcblk0p21" });
    device->setDataBlockDevs({ MTK_USERDATA, "/dev/block/mmcblk0p22" });
    device->setBootBlockDevs({ MTK_BOOT, "/dev/block/mmcblk0p7" });
    device->setRecoveryBlockDevs({ MTK_RECOVERY, "/dev/block/mmcblk0p8" });
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
