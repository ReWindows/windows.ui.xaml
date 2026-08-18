#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace DirectUI {
class BringIntoViewOptionsGenerated {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AnimationDesired@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAE@Z
    virtual long get_AnimationDesired(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalAlignmentRatio@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalAlignmentRatio(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffset@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_HorizontalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_TargetRect@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long get_TargetRect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalAlignmentRatio@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalAlignmentRatio(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalOffset@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAN@Z
    virtual long get_VerticalOffset(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_AnimationDesired@BringIntoViewOptionsGenerated@DirectUI@@UEAAJE@Z
    virtual long put_AnimationDesired(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalAlignmentRatio@BringIntoViewOptionsGenerated@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalAlignmentRatio(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_HorizontalOffset@BringIntoViewOptionsGenerated@DirectUI@@UEAAJN@Z
    virtual long put_HorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_TargetRect@BringIntoViewOptionsGenerated@DirectUI@@UEAAJPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long put_TargetRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalAlignmentRatio@BringIntoViewOptionsGenerated@DirectUI@@UEAAJN@Z
    virtual long put_VerticalAlignmentRatio(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_VerticalOffset@BringIntoViewOptionsGenerated@DirectUI@@UEAAJN@Z
    virtual long put_VerticalOffset(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BringIntoViewOptionsGenerated@DirectUI@@UEAA@XZ
    virtual ~BringIntoViewOptionsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@BringIntoViewOptionsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@BringIntoViewOptionsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@BringIntoViewOptionsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@BringIntoViewOptionsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
