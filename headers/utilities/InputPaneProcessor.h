#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace ContentRootInput {
class InputPaneProcessor {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdjustBringIntoViewRecHeight@InputPaneProcessor@ContentRootInput@@QEAAXMMAEAM@Z
    void AdjustBringIntoViewRecHeight(float, float, float &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInputPaneHandler@InputPaneProcessor@ContentRootInput@@QEAAXXZ
    void CreateInputPaneHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPaneShowing@InputPaneProcessor@ContentRootInput@@QEBA_NXZ
    bool IsInputPaneShowing() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputPaneShowingBringIntoViewNotHandled@InputPaneProcessor@ContentRootInput@@QEBA_NXZ
    bool IsInputPaneShowingBringIntoViewNotHandled() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSipOpen@InputPaneProcessor@ContentRootInput@@QEBA_NXZ
    bool IsSipOpen() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFocusChanged@InputPaneProcessor@ContentRootInput@@QEAAJPEAVCDependencyObject@@_N1@Z
    long NotifyFocusChanged(CDependencyObject *, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterFrameworkInputView@InputPaneProcessor@ContentRootInput@@QEAAJXZ
    long RegisterFrameworkInputView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterInputPaneHandler@InputPaneProcessor@ContentRootInput@@QEAAJPEAX@Z
    long RegisterInputPaneHandler(void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterInputPaneHandler@InputPaneProcessor@ContentRootInput@@QEAAXXZ
    void UnregisterInputPaneHandler();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InputPaneProcessor@ContentRootInput@@QEAA@XZ
    ~InputPaneProcessor();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanUseInputPane@InputPaneProcessor@ContentRootInput@@CA_NPEAVCDependencyObject@@@Z
    static bool CanUseInputPane(CDependencyObject *);
};
} // namespace ContentRootInput
