#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 7 member(s).
namespace InputUtility {
class Keyboard {
public /*unspecified*/:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRepeatCount@Keyboard@InputUtility@@YAII_K_J@Z
    unsigned int GetRepeatCount(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualKeyForETWLogging@Keyboard@InputUtility@@YA?AW4VirtualKey@System@Windows@@I_K_J@Z
    int GetVirtualKeyForETWLogging(unsigned int, uint64_t, int64_t);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualKeyFromPacketInput@Keyboard@InputUtility@@YA_KH@Z
    uint64_t GetVirtualKeyFromPacketInput(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PackIntoWin32StyleKeyArgs@Keyboard@InputUtility@@YAJQEAUIKeyEventArgs@Core@UI@Windows@@IPEAI1@Z
    long PackIntoWin32StyleKeyArgs(::Windows::UI::Core::IKeyEventArgs * const, unsigned int, unsigned int *, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldForwardToDirectManipulation@Keyboard@InputUtility@@YA_NW4VirtualKey@System@Windows@@0@Z
    bool ShouldForwardToDirectManipulation(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldLogVirtualKeyForKeyEvent@Keyboard@InputUtility@@YA_NW4VirtualKey@System@Windows@@@Z
    bool ShouldLogVirtualKeyForKeyEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TranslateEditKey@Keyboard@InputUtility@@YA?AW4XEDITKEY@@IW4VirtualKey@System@Windows@@@Z
    int TranslateEditKey(unsigned int, int);
};
} // namespace InputUtility
