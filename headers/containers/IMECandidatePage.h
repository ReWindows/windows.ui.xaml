#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class IMECandidatePage {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@IMECandidatePage@DirectUI@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Items@IMECandidatePage@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_Items(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PageIndex@IMECandidatePage@DirectUI@@UEAAJPEAH@Z
    virtual long get_PageIndex(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Width@IMECandidatePage@DirectUI@@UEAAJPEAN@Z
    virtual long get_Width(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Items@IMECandidatePage@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long put_Items(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_PageIndex@IMECandidatePage@DirectUI@@UEAAJH@Z
    virtual long put_PageIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Width@IMECandidatePage@DirectUI@@UEAAJN@Z
    virtual long put_Width(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@IMECandidatePage@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@IMECandidatePage@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@IMECandidatePage@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@IMECandidatePage@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
