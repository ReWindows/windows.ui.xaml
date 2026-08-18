#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 21 member(s).
namespace DirectUI {
class HubSectionCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@HubSectionCollection@DirectUI@@UEAAJPEAUIInspectable@@@Z
    virtual long Append(IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@HubSectionCollection@DirectUI@@UEAAJXZ
    virtual long Clear();
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@HubSectionCollection@DirectUI@@UEAAJPEAPEAU?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long First(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@HubSectionCollection@DirectUI@@UEAAJIPEAPEAUIInspectable@@@Z
    virtual long GetAt(unsigned int, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@HubSectionCollection@DirectUI@@UEAAJPEAPEAU?$IVectorView@PEAUIInspectable@@@Collections@Foundation@Windows@@@Z
    virtual long GetView(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@HubSectionCollection@DirectUI@@UEAAJPEAUIInspectable@@PEAIPEAE@Z
    virtual long IndexOf(IInspectable *, unsigned int *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@HubSectionCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long InsertAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@HubSectionCollection@DirectUI@@UEAAJI@Z
    virtual long RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@HubSectionCollection@DirectUI@@UEAAJXZ
    virtual long RemoveAtEnd();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@HubSectionCollection@DirectUI@@UEAAJIPEAUIInspectable@@@Z
    virtual long SetAt(unsigned int, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateItem@HubSectionCollection@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long ValidateItem(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Size@HubSectionCollection@DirectUI@@UEAAJPEAI@Z
    virtual long get_Size(unsigned int *);
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@HubSectionCollection@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@HubSectionCollection@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@HubSectionCollection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
