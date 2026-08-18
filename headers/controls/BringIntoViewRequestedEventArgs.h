#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
namespace DirectUI {
class BringIntoViewRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnimationDesired@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_AnimationDesired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Handled@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAE@Z
    virtual long get_Handled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignmentRatio@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalAlignmentRatio(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetElement@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long get_TargetElement(::Windows::UI::Xaml::IUIElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetRect@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAURect@Foundation@Windows@@@Z
    virtual long get_TargetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignmentRatio@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalAlignmentRatio(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnimationDesired@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_AnimationDesired(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Handled@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJE@Z
    virtual long put_Handled(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetElement@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJPEAUIUIElement@Xaml@UI@Windows@@@Z
    virtual long put_TargetElement(::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetRect@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJURect@Foundation@Windows@@@Z
    virtual long put_TargetRect(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@BringIntoViewRequestedEventArgs@DirectUI@@UEAAJN@Z
    virtual long put_VerticalOffset(double);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BringIntoViewRequestedEventArgs@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BringIntoViewRequestedEventArgs@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BringIntoViewRequestedEventArgs@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BringIntoViewRequestedEventArgs@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
