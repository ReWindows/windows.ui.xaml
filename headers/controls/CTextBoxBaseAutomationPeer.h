#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class CTextBoxBaseAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPreventKeyboardDisplayOnProgrammaticFocus@CTextBoxBaseAutomationPeer@@UEAAIXZ
    virtual unsigned int GetPreventKeyboardDisplayOnProgrammaticFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextBoxBaseAutomationPeer@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUnwrappedPattern@CTextBoxBaseAutomationPeer@@UEAAPEAXH@Z
    virtual void * GetUnwrappedPattern(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWindowlessRawElementProviderSimple@CTextBoxBaseAutomationPeer@@UEAAPEAXXZ
    virtual void * GetWindowlessRawElementProviderSimple();
    // Category: Accessor | Source: PE Export
    // Symbol: ?IsHostedWindowlessElementProvider@CTextBoxBaseAutomationPeer@@UEAAIXZ
    virtual unsigned int IsHostedWindowlessElementProvider();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusHelper@CTextBoxBaseAutomationPeer@@UEAAJXZ
    virtual long SetFocusHelper();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextBoxBaseAutomationPeer@@UEAA@XZ
    virtual ~CTextBoxBaseAutomationPeer();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CTextBoxBaseAutomationPeer@@IEAA@PEAVCCoreServices@@AEAVCValue@@@Z
    CTextBoxBaseAutomationPeer(CCoreServices *, CValue &);
};
