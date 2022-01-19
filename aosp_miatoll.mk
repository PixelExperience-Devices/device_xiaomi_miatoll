#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

# Inherit from those products. Most specific first.
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_64_bit.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base_telephony.mk)

# Inherit some common Pixel Experience stuff.
$(call inherit-product, vendor/aosp/config/common_full_phone.mk)

# Inherit from miatoll device
$(call inherit-product, device/xiaomi/miatoll/device.mk)

TARGET_BOOT_ANIMATION_RES := 1080
TARGET_GAPPS_ARCH := arm64
TARGET_SUPPORTS_QUICK_TAP := true

PRODUCT_NAME := aosp_miatoll
PRODUCT_DEVICE := miatoll
PRODUCT_MANUFACTURER := Xiaomi
PRODUCT_BRAND := Redmi
PRODUCT_MODEL := SM6250

PRODUCT_GMS_CLIENTID_BASE := android-xiaomi

PRODUCT_BUILD_PROP_OVERRIDES += \
    PRIVATE_BUILD_DESC="miatoll_global-user 11 RKQ1.200826.002 V12.5.2.0.RJZMIXM release-keys"

BUILD_FINGERPRINT := Redmi/miatoll_global/miatoll:11/RKQ1.200826.002/V12.5.2.0.RJZMIXM:user/release-keys
