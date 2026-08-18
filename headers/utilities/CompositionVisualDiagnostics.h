#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 14 member(s).
class CompositionVisualDiagnostics {
public:
    class VisualTreeWalker;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CompositionVisualDiagnostics@@QEAA@XZ
    CompositionVisualDiagnostics();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionCount@CompositionVisualDiagnostics@@QEAAJ_KPEAI@Z
    long GetCollectionCount(uint64_t, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionElements@CompositionVisualDiagnostics@@QEAAJ_KIPEAIPEAPEAUCollectionElementValue@@@Z
    long GetCollectionElements(uint64_t, unsigned int, unsigned int *, CollectionElementValue * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHandInVisualSet@CompositionVisualDiagnostics@@QEAAJPEBUIUIElement@Xaml@UI@Windows@@_KPEAUIVisual@Composition@45@I@Z
    long OnHandInVisualSet(::Windows::UI::Xaml::IUIElement const *, uint64_t, ::Windows::UI::Composition::IVisual *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualAdded@CompositionVisualDiagnostics@@UEAAJPEAUIVisual@Composition@UI@Windows@@00_NPEAUHSTRING__@@@Z
    virtual long OnVisualAdded(::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *, ::Windows::UI::Composition::IVisual *, bool, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualCommentChanged@CompositionVisualDiagnostics@@UEAAJPEAUIVisual@Composition@UI@Windows@@PEAUHSTRING__@@@Z
    virtual long OnVisualCommentChanged(::Windows::UI::Composition::IVisual *, HSTRING__*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualRemoved@CompositionVisualDiagnostics@@UEAAJPEAUIVisual@Composition@UI@Windows@@@Z
    virtual long OnVisualRemoved(::Windows::UI::Composition::IVisual *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RenderCompositionBitmap@CompositionVisualDiagnostics@@QEAAJ_KIIPEA_NPEAPEAUIBitmapData@@@Z
    long RenderCompositionBitmap(uint64_t, unsigned int, unsigned int, bool *, IBitmapData * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CompositionVisualDiagnostics@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPropertyForVisual@CompositionVisualDiagnostics@@QEAAJ_KPEAUIInspectable@@I@Z
    long SetPropertyForVisual(uint64_t, IInspectable *, unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CompositionVisualDiagnostics@@UEAA@XZ
    virtual ~CompositionVisualDiagnostics();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveVisualSubtree@CompositionVisualDiagnostics@@AEAAJPEAUIVisual@Composition@UI@Windows@@_N@Z
    long RemoveVisualSubtree(::Windows::UI::Composition::IVisual *, bool);
};
