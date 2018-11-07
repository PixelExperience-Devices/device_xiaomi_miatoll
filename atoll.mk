#
# Copyright (C) 2021 The LineageOS Project
#
# SPDX-License-Identifier: Apache-2.0
#

PRODUCT_BUILD_SUPER_PARTITION := false
PRODUCT_USE_DYNAMIC_PARTITIONS := true

# Overlays
PRODUCT_ENFORCE_RRO_TARGETS := *

# Inherit proprietary targets
$(call inherit-product, vendor/xiaomi/sm6250-common/sm6250-common-vendor.mk)
