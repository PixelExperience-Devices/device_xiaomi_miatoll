/*
 * Copyright (C) 2020 The LineageOS Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define LOG_TAG "android.hardware.power@1.3-service.xiaomi_sm6250"

#include "Power.h"

namespace android {
namespace hardware {
namespace power {
namespace V1_3 {
namespace implementation {

// Methods from V1_0::IPower follow.
Return<void> Power::setInteractive(bool) {
    return Void();
}

Return<void> Power::powerHint(PowerHint_1_0, int32_t) {
    return Void();
}

Return<void> Power::setFeature(Feature, bool) {
    return Void();
}

Return<void> Power::getPlatformLowPowerStats(getPlatformLowPowerStats_cb _hidl_cb) {
    ALOGI("getPlatformLowPowerStats not supported, do nothing");
    _hidl_cb({}, Status::SUCCESS);
    return Void();
}

// Methods from V1_1::IPower follow.
Return<void> Power::getSubsystemLowPowerStats(getSubsystemLowPowerStats_cb _hidl_cb) {
    ALOGI("getSubsystemLowPowerStats not supported, do nothing");
    _hidl_cb({}, Status::SUCCESS);
    return Void();
}

Return<void> Power::powerHintAsync(PowerHint_1_0, int32_t) {
    return Void();
}

// Methods from V1_2::IPower follow.
Return<void> Power::powerHintAsync_1_2(PowerHint_1_2, int32_t) {
    return Void();
}

// Methods from V1_3::IPower follow.
Return<void> Power::powerHintAsync_1_3(PowerHint_1_3, int32_t) {
    return Void();
}

}  // namespace implementation
}  // namespace V1_3
}  // namespace power
}  // namespace hardware
}  // namespace android
