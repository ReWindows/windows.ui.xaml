#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
namespace DirectUI {
class FlyoutShowOptionsGenerated {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlyoutShowOptionsGenerated@DirectUI@@QEAA@XZ
    FlyoutShowOptionsGenerated();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ExclusionRect@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    long get_ExclusionRect(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Placement@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long get_Placement(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    long get_Position(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShowMode@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAW4FlyoutShowMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long get_ShowMode(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ExclusionRect@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAU?$IReference@URect@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_ExclusionRect(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Placement@FlyoutShowOptionsGenerated@DirectUI@@QEAAJW4FlyoutPlacementMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long put_Placement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Position@FlyoutShowOptionsGenerated@DirectUI@@QEAAJPEAU?$IReference@UPoint@Foundation@Windows@@@Foundation@Windows@@@Z
    long put_Position(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ShowMode@FlyoutShowOptionsGenerated@DirectUI@@QEAAJW4FlyoutShowMode@Primitives@Controls@Xaml@UI@Windows@@@Z
    long put_ShowMode(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1FlyoutShowOptionsGenerated@DirectUI@@UEAA@XZ
    virtual ~FlyoutShowOptionsGenerated();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@FlyoutShowOptionsGenerated@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@FlyoutShowOptionsGenerated@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassNameImpl@FlyoutShowOptionsGenerated@DirectUI@@MEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassNameImpl(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@FlyoutShowOptionsGenerated@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
