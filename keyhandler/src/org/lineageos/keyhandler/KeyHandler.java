/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

package org.lineageos.keyhandler;

import android.content.Context;
import android.util.Log;
import android.view.KeyEvent;

import com.android.internal.os.DeviceKeyHandler;

public class KeyHandler implements DeviceKeyHandler {
    private static final String TAG = "KeyHandler";
    private static final int KEYCODE_SIDE_FP = 96;

    public KeyHandler(Context context) {
        Log.i(TAG, "KeyHandler constructor called");
    }

    public KeyEvent handleKeyEvent(KeyEvent event) {
        int scanCode = event.getScanCode();
        Log.i(TAG, "handleKeyEvent=" + scanCode);
        switch (scanCode) {
            case KEYCODE_SIDE_FP:
                return null;
            default:
                return event;
        }
    }
}
