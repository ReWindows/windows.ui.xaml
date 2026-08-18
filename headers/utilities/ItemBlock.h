#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 11 member(s).
namespace DirectUI::ItemContainerGenerator {
class ItemBlock {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsRealizedBlock@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAPEAVRealizedItemBlock@23@XZ
    virtual WindissectOpaque * AsRealizedBlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsUnrealizedBlock@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAPEAVUnrealizedItemBlock@23@XZ
    virtual WindissectOpaque * AsUnrealizedBlock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoveAllowed@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAEE@Z
    virtual unsigned char IsMoveAllowed(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerAt@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAJIPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_ContainerAt(unsigned int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerCount@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAHXZ
    virtual int get_ContainerCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemAt@ItemBlock@ItemContainerGenerator@DirectUI@@MEAAJIPEAPEAUIInspectable@@@Z
    virtual long get_ItemAt(unsigned int, IInspectable * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToBackward@ItemBlock@ItemContainerGenerator@DirectUI@@AEAAXAEAUGeneratorState@23@AEAHE@Z
    void MoveToBackward(WindissectOpaque &, int &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveToForward@ItemBlock@ItemContainerGenerator@DirectUI@@AEAAXAEAUGeneratorState@23@AEAHE@Z
    void MoveToForward(WindissectOpaque &, int &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@ItemBlock@ItemContainerGenerator@DirectUI@@AEAAXXZ
    void Remove();
};
} // namespace DirectUI::ItemContainerGenerator
