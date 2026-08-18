#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 12 member(s).
namespace DirectUI::ItemContainerGenerator {
class RealizedItemBlock {
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AsRealizedBlock@RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAAPEAV123@XZ
    virtual WindissectOpaque * AsRealizedBlock();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMoveAllowed@RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAAEE@Z
    virtual unsigned char IsMoveAllowed(unsigned char);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RealizedItemBlock@ItemContainerGenerator@DirectUI@@IEAA@XZ
    RealizedItemBlock();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerAt@RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAAJIPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    virtual long get_ContainerAt(unsigned int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ContainerCount@RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAAHXZ
    virtual int get_ContainerCount();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ItemAt@RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAAJIPEAPEAUIInspectable@@@Z
    virtual long get_ItemAt(unsigned int, IInspectable * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RealizedItemBlock@ItemContainerGenerator@DirectUI@@MEAA@XZ
    virtual ~RealizedItemBlock();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEntries@RealizedItemBlock@ItemContainerGenerator@DirectUI@@AEAAXHH@Z
    void ClearEntries(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CopyEntries@RealizedItemBlock@ItemContainerGenerator@DirectUI@@AEAAXPEAV123@HHH@Z
    void CopyEntries(WindissectOpaque *, int, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizeItem@RealizedItemBlock@ItemContainerGenerator@DirectUI@@AEAAXHPEAUIInspectable@@PEAUIDependencyObject@Xaml@UI@Windows@@@Z
    void RealizeItem(int, IInspectable *, ::Windows::UI::Xaml::IDependencyObject *);
};
} // namespace DirectUI::ItemContainerGenerator
