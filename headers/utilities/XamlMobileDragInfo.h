#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class XamlMobileDragInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlMobileDragInfo@DirectUI@@QEAA@XZ
    XamlMobileDragInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Data@XamlMobileDragInfo@DirectUI@@UEAAJPEAPEAUIDataPackageView@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Data(::Windows::ApplicationModel::DataTransfer::IDataPackageView * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Modifiers@XamlMobileDragInfo@DirectUI@@UEAAJPEAW4DragDropModifiers@DragDrop@DataTransfer@ApplicationModel@Windows@@@Z
    virtual long get_Modifiers(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Position@XamlMobileDragInfo@DirectUI@@UEAAJPEAUPoint@Foundation@Windows@@@Z
    virtual long get_Position(WindissectOpaque *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlMobileDragInfo@DirectUI@@UEAA@XZ
    virtual ~XamlMobileDragInfo();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyIIDsToArray@XamlMobileDragInfo@DirectUI@@MEAAXHPEAU_GUID@@@Z
    virtual void CopyIIDsToArray(int, _GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImplementedIIDsCount@XamlMobileDragInfo@DirectUI@@MEAAHXZ
    virtual int GetImplementedIIDsCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@XamlMobileDragInfo@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
