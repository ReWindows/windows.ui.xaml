#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI {
class PropertyPathStep {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DebugGetPropertyName@PropertyPathStep@DirectUI@@UEAAPEAGXZ
    virtual unsigned short * DebugGetPropertyName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@PropertyPathStep@DirectUI@@QEAAJPEAVPropertyPathListener@2@@Z
    long Initialize(::DirectUI::PropertyPathListener *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyPathStep@DirectUI@@QEAA@XZ
    PropertyPathStep();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyPathStep@DirectUI@@UEAA@XZ
    virtual ~PropertyPathStep();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddCurrentChangedEventHandler@PropertyPathStep@DirectUI@@IEAAJXZ
    long AddCurrentChangedEventHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionViewCurrentChanged@PropertyPathStep@DirectUI@@MEAAJXZ
    virtual long CollectionViewCurrentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Disconnect@PropertyPathStep@DirectUI@@MEAAXXZ
    virtual void Disconnect();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisconnectCurrentItem@PropertyPathStep@DirectUI@@MEAAXXZ
    virtual void DisconnectCurrentItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSourceChanged@PropertyPathStep@DirectUI@@IEAAJXZ
    long RaiseSourceChanged();
};
} // namespace DirectUI
