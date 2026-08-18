#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
class CoreWindowIslandAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CoreWindowIslandAdapter@@QEAA@QEAUICoreWindow@Core@UI@Windows@@QEAUICompositor@Composition@34@@Z
    CoreWindowIslandAdapter(::Windows::UI::Core::ICoreWindow * const, ::Windows::UI::Composition::ICompositor * const);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CoreWindowIslandAdapter@@QEAA@XZ
    ~CoreWindowIslandAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCompositionIsland@CoreWindowIslandAdapter@@AEAAXQEAUICompositor@Composition@UI@Windows@@@Z
    void CreateCompositionIsland(::Windows::UI::Composition::ICompositor * const);
};
