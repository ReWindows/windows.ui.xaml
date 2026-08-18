#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 8 member(s).
namespace DirectUI {
class TextPointer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateInstanceWithInternalPointer@TextPointer@DirectUI@@SAJPEAVTextPointerWrapper@2@PEAPEAUITextPointer@Documents@Xaml@UI@Windows@@@Z
    static long CreateInstanceWithInternalPointer(TextPointerWrapper *, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAtOffsetImpl@TextPointer@DirectUI@@QEAAJHW4LogicalDirection@Documents@Xaml@UI@Windows@@PEAPEAUITextPointer@4567@@Z
    long GetPositionAtOffsetImpl(int, int, ::Windows::UI::Xaml::Documents::ITextPointer * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_InternalPointer@TextPointer@DirectUI@@QEAAJPEAPEAVTextPointerWrapper@2@@Z
    long get_InternalPointer(TextPointerWrapper * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_LogicalDirectionImpl@TextPointer@DirectUI@@QEAAJPEAW4LogicalDirection@Documents@Xaml@UI@Windows@@@Z
    long get_LogicalDirectionImpl(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentImpl@TextPointer@DirectUI@@QEAAJPEAPEAUIDependencyObject@Xaml@UI@Windows@@@Z
    long get_ParentImpl(::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VisualParentImpl@TextPointer@DirectUI@@QEAAJPEAPEAUIFrameworkElement@Xaml@UI@Windows@@@Z
    long get_VisualParentImpl(::Windows::UI::Xaml::IFrameworkElement * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_InternalPointer@TextPointer@DirectUI@@QEAAJPEAVTextPointerWrapper@2@@Z
    long put_InternalPointer(TextPointerWrapper *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextPointer@DirectUI@@UEAA@XZ
    virtual ~TextPointer();
};
} // namespace DirectUI
