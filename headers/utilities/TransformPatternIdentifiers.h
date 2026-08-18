#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class TransformPatternIdentifiers {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanMoveProperty@TransformPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_CanMoveProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanResizeProperty@TransformPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_CanResizeProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_CanRotateProperty@TransformPatternIdentifiers@DirectUI@@UEAAJPEAPEAUIAutomationProperty@Automation@Xaml@UI@Windows@@@Z
    virtual long get_CanRotateProperty(::Windows::UI::Xaml::Automation::IAutomationProperty * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TransformPatternIdentifiers@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TransformPatternIdentifiers@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TransformPatternIdentifiers@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TransformPatternIdentifiers@DirectUI@@MEAA@XZ
    virtual ~TransformPatternIdentifiers();
};
} // namespace DirectUI
