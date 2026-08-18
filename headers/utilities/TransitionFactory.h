#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class TransitionFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@TransitionFactory@DirectUI@@UEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUITransition@Animation@Media@Xaml@UI@Windows@@@Z
    virtual long CreateInstance(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Animation::ITransition * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TransitionFactory@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TransitionFactory@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@TransitionFactory@DirectUI@@MEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TransitionFactory@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceImpl@TransitionFactory@DirectUI@@AEAAJPEAUIInspectable@@PEAPEAU3@PEAPEAUITransition@Animation@Media@Xaml@UI@Windows@@@Z
    long CreateInstanceImpl(IInspectable *, IInspectable * *, ::Windows::UI::Xaml::Media::Animation::ITransition * *);
};
} // namespace DirectUI
