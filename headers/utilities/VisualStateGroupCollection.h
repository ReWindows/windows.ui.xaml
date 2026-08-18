#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 3 member(s).
namespace DirectUI {
class VisualStateGroupCollection {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateStoryboard@VisualStateGroupCollection@DirectUI@@UEAA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@II@Z
    virtual WindissectOpaque CreateStoryboard(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesVisualStateGroupHaveTransitions@VisualStateGroupCollection@DirectUI@@UEBA_NI@Z
    virtual bool DoesVisualStateGroupHaveTransitions(unsigned int) const;
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?QueryInterfaceImpl@VisualStateGroupCollection@DirectUI@@MEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterfaceImpl(_GUID const &, void * *);
};
} // namespace DirectUI
