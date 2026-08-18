#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
namespace DirectUI {
class TextPointerGenerated {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCharacterRect@TextPointerGenerated@DirectUI@@UEAAJW4LogicalDirection@Documents@Xaml@UI@Windows@@PEAURect@Foundation@7@@Z
    virtual long GetCharacterRect(int, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAtOffset@TextPointerGenerated@DirectUI@@UEAAJHW4LogicalDirection@Documents@Xaml@UI@Windows@@PEAPEAUITextPointer@4567@@Z
    virtual long GetPositionAtOffset(int, int, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalDirection@TextPointerGenerated@DirectUI@@UEAAJPEAW4LogicalDirection@Documents@Xaml@UI@Windows@@@Z
    virtual long get_LogicalDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Offset@TextPointerGenerated@DirectUI@@UEAAJPEAH@Z
    virtual long get_Offset(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Parent@TextPointerGenerated@DirectUI@@UEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_Parent(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualParent@TextPointerGenerated@DirectUI@@UEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    virtual long get_VisualParent(::Windows::UI::Xaml::IFrameworkElement * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@TextPointerGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@TextPointerGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@TextPointerGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@TextPointerGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
