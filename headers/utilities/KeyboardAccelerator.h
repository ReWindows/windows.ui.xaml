#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 5 member(s).
namespace DirectUI {
class KeyboardAccelerator {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentation@KeyboardAccelerator@DirectUI@@QEAAJPEAPEAUHSTRING__@@@Z
    long GetStringRepresentation(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringRepresentationForUIElement@KeyboardAccelerator@DirectUI@@SAJPEAVUIElement@2@PEAPEAUHSTRING__@@@Z
    static long GetStringRepresentationForUIElement(::DirectUI::UIElement *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseKeyboardAcceleratorInvoked@KeyboardAccelerator@DirectUI@@SAJPEAVCKeyboardAccelerator@@PEAVCDependencyObject@@PEAE@Z
    static long RaiseKeyboardAcceleratorInvoked(CKeyboardAccelerator *, CDependencyObject *, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetToolTip@KeyboardAccelerator@DirectUI@@SAJPEAVCKeyboardAccelerator@@PEAVCDependencyObject@@@Z
    static long SetToolTip(CKeyboardAccelerator *, CDependencyObject *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConcatVirtualKey@KeyboardAccelerator@DirectUI@@AEAAJW4VirtualKey@System@Windows@@AEAVString@Internal@5@@Z
    long ConcatVirtualKey(int, ::Windows::Internal::String &);
};
} // namespace DirectUI
