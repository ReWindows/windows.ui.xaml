#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace ContentRootInput {
class KeyboardInputProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyEvent@KeyboardInputProcessor@ContentRootInput@@QEAAJPEAUIKeyEventArgs@Core@UI@Windows@@IQEAXPEA_N@Z
    long ProcessKeyEvent(::Windows::UI::Core::IKeyEventArgs *, unsigned int, void * const, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessKeyboardInput@KeyboardInputProcessor@ContentRootInput@@QEAAJW4VirtualKey@System@Windows@@AEBUPhysicalKeyStatus@@W4MessageMap@@QEBVString@Internal@5@_NQEAXPEA_N@Z
    long ProcessKeyboardInput(int, PhysicalKeyStatus const &, int, ::Windows::Internal::String const * const, bool, void * const, bool *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetKeyRoutedSource@KeyboardInputProcessor@ContentRootInput@@AEAAPEAVCDependencyObject@@QEAV3@@Z
    CDependencyObject * GetKeyRoutedSource(CDependencyObject * const);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessXCPKeydown@KeyboardInputProcessor@ContentRootInput@@AEAAJQEAVCDependencyObject@@QEAVCKeyEventArgs@@W4MessageMap@@_NI3QEAXPEA_N@Z
    long ProcessXCPKeydown(CDependencyObject * const, CKeyEventArgs * const, int, bool, unsigned int, bool, void * const, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessXCPKeyup@KeyboardInputProcessor@ContentRootInput@@AEAAJQEAVCDependencyObject@@QEAVCKeyEventArgs@@PEA_N@Z
    long ProcessXCPKeyup(CDependencyObject * const, CKeyEventArgs * const, bool *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCharacterReceivedEvent@KeyboardInputProcessor@ContentRootInput@@AEBAJW4VirtualKey@System@Windows@@AEBUPhysicalKeyStatus@@IW4MessageMap@@PEA_N@Z
    long RaiseCharacterReceivedEvent(int, PhysicalKeyStatus const &, unsigned int, int, bool *) const;
};
} // namespace ContentRootInput
