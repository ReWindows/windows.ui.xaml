#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class DragDropVisual {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstance@DragDropVisual@DirectUI@@SAJPEAUIUIElement@Xaml@UI@Windows@@UPoint@Foundation@6@PEAPEAV12@@Z
    static long CreateInstance(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, DragDropVisual * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopLeftPosition@DragDropVisual@DirectUI@@QEAAJPEAUPoint@Foundation@Windows@@@Z
    long GetTopLeftPosition(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Hide@DragDropVisual@DirectUI@@QEAAJXZ
    long Hide();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOpacity@DragDropVisual@DirectUI@@QEAAJM@Z
    long SetOpacity(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPosition@DragDropVisual@DirectUI@@QEAAJUPoint@Foundation@Windows@@@Z
    long SetPosition(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@DragDropVisual@DirectUI@@QEAAJXZ
    long Show();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Init@DragDropVisual@DirectUI@@MEAAJPEAUIUIElement@Xaml@UI@Windows@@UPoint@Foundation@6@@Z
    virtual long Init(::Windows::UI::Xaml::IUIElement *, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DragDropVisual@DirectUI@@MEAA@XZ
    virtual ~DragDropVisual();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideCore@DragDropVisual@DirectUI@@AEAAJPEAUIUIElement@Xaml@UI@Windows@@0@Z
    long HideCore(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsShowingCore@DragDropVisual@DirectUI@@AEAA_NPEAUIUIElement@Xaml@UI@Windows@@0@Z
    bool IsShowingCore(::Windows::UI::Xaml::IUIElement *, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@DragDropVisual@DirectUI@@AEAAJXZ
    long UpdateTransform();
};
} // namespace DirectUI
