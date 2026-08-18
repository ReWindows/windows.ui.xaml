#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 13 member(s).
namespace DirectUI {
class SelectorItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualState@SelectorItem@DirectUI@@UEAAJ_N@Z
    virtual long ChangeVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeVisualStateWithContext@SelectorItem@DirectUI@@UEAAJPEAVVisualStateManagerBatchContext@2@_N@Z
    virtual long ChangeVisualStateWithContext(::DirectUI::VisualStateManagerBatchContext *, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusSelfOrChild@SelectorItem@DirectUI@@UEAAJW4FocusState@Xaml@UI@Windows@@EPEAEW4FocusNavigationDirection@Input@456@@Z
    virtual long FocusSelfOrChild(int, unsigned char, unsigned char *, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentSelector@SelectorItem@DirectUI@@QEAAJPEAPEAVSelector@2@@Z
    long GetParentSelector(::DirectUI::Selector * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPlainText@SelectorItem@DirectUI@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetPlainText(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@SelectorItem@DirectUI@@UEAAJPEBVCDependencyProperty@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(CDependencyProperty const *, IInspectable * *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectorItem@DirectUI@@QEAA@XZ
    SelectorItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSelectedImpl@SelectorItem@DirectUI@@QEAAJPEAE@Z
    long get_IsSelectedImpl(unsigned char *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectorItem@DirectUI@@UEAA@XZ
    virtual ~SelectorItem();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@SelectorItem@DirectUI@@MEAAJPEAUIInspectable@@0@Z
    virtual long OnContentChanged(IInspectable *, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectedChanged@SelectorItem@DirectUI@@MEAAJE@Z
    virtual long OnIsSelectedChanged(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged2@SelectorItem@DirectUI@@MEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged2(PropertyChangedParams const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentSelector@SelectorItem@DirectUI@@MEAAJPEAVSelector@2@@Z
    virtual long SetParentSelector(::DirectUI::Selector *);
};
} // namespace DirectUI
