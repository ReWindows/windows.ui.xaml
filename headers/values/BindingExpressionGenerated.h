#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 6 member(s).
namespace DirectUI {
class BindingExpressionGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSource@BindingExpressionGenerated@DirectUI@@UEAAJXZ
    virtual long UpdateSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DataItem@BindingExpressionGenerated@DirectUI@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long get_DataItem(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentBinding@BindingExpressionGenerated@DirectUI@@UEAAJPEAPEAUIBinding@Data@Xaml@UI@Windows@@@Z
    virtual long get_ParentBinding(::Windows::UI::Xaml::Data::IBinding * *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BindingExpressionGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BindingExpressionGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BindingExpressionGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
};
} // namespace DirectUI
