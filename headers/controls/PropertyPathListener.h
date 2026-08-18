#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI {
class PropertyPathListener {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FullPathExists@PropertyPathListener@DirectUI@@QEBA_NXZ
    bool FullPathExists() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTraceString@PropertyPathListener@DirectUI@@QEAAJPEAPEBG@Z
    long GetTraceString(unsigned short const * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@PropertyPathListener@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long GetValue(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PropertyPathListener@DirectUI@@QEAAJPEAUIPropertyPathListenerHost@2@PEAVPropertyPathParser@2@II@Z
    long Initialize(::DirectUI::IPropertyPathListenerHost *, ::DirectUI::PropertyPathParser *, unsigned int, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyPathListener@DirectUI@@QEAA@XZ
    PropertyPathListener();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSource@PropertyPathListener@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long SetSource(IInspectable *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyPathListener@DirectUI@@UEAA@XZ
    virtual ~PropertyPathListener();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@PropertyPathListener@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConnectPathStep@PropertyPathListener@DirectUI@@AEAAJPEAVPropertyPathStep@2@PEAUIInspectable@@@Z
    long ConnectPathStep(::DirectUI::PropertyPathStep *, IInspectable *);
};
} // namespace DirectUI
