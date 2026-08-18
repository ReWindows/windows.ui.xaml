#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 26 member(s).
namespace DirectUI {
class TextBoxView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaretChangedImpl@TextBoxView@DirectUI@@QEAAJXZ
    long CaretChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CaretVisibilityChangedImpl@TextBoxView@DirectUI@@QEAAJXZ
    long CaretVisibilityChangedImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateScrollInfo@TextBoxView@DirectUI@@SAJPEAVCDependencyObject@@@Z
    static long InvalidateScrollInfo(CDependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateViewImpl@TextBoxView@DirectUI@@QEAAJXZ
    long InvalidateViewImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeftImpl@TextBoxView@DirectUI@@QEAAJXZ
    long LineLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRightImpl@TextBoxView@DirectUI@@QEAAJXZ
    long LineRightImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeVisibleImpl@TextBoxView@DirectUI@@QEAAJPEAUIUIElement@Xaml@UI@Windows@@URect@Foundation@6@ENNNNPEAU786@PEAN3@Z
    long MakeVisibleImpl(::Windows::UI::Xaml::IUIElement *, WindissectOpaque, unsigned char, double, double, double, double, WindissectOpaque *, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDown@TextBoxView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelDown(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelLeft@TextBoxView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelLeft(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelRight@TextBoxView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelRight(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelUp@TextBoxView@DirectUI@@UEAAJI@Z
    virtual long MouseWheelUp(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOffsetsChanging@TextBoxView@DirectUI@@SAJPEAVCDependencyObject@@NNNN@Z
    static long NotifyOffsetsChanging(CDependencyObject *, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyStateChange@TextBoxView@DirectUI@@UEAAJW4DMManipulationState@2@MMMMMEEE@Z
    virtual long NotifyStateChange(int, float, float, float, float, float, unsigned char, unsigned char, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeftImpl@TextBoxView@DirectUI@@QEAAJXZ
    long PageLeftImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRightImpl@TextBoxView@DirectUI@@QEAAJXZ
    long PageRightImpl();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHorizontalOffsetImpl@TextBoxView@DirectUI@@QEAAJN@Z
    long SetHorizontalOffsetImpl(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetVerticalOffsetImpl@TextBoxView@DirectUI@@QEAAJN@Z
    long SetVerticalOffsetImpl(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalOffsetImpl@TextBoxView@DirectUI@@QEAAJPEAN@Z
    long get_HorizontalOffsetImpl(double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ScrollOwnerImpl@TextBoxView@DirectUI@@QEAAJPEAPEAUIInspectable@@@Z
    long get_ScrollOwnerImpl(IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ScrollOwnerImpl@TextBoxView@DirectUI@@QEAAJPEAUIInspectable@@@Z
    long put_ScrollOwnerImpl(IInspectable *);
protected:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TextBoxView@DirectUI@@MEAA@XZ
    virtual ~TextBoxView();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollOwnerFlowDirection@TextBoxView@DirectUI@@AEAAJPEAW4FlowDirection@Xaml@UI@Windows@@@Z
    long GetScrollOwnerFlowDirection(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PassWheelMessageToScrollOwner@TextBoxView@DirectUI@@AEAAJW4ZoomDirection@2@@Z
    long PassWheelMessageToScrollOwner(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PostDispatcherCallback@TextBoxView@DirectUI@@CAJPEAVCDependencyObject@@P812@EAAJXZ@Z
    static long PostDispatcherCallback(CDependencyObject *, long ( ::TextBoxView::*)(void));
    // Category: Method | Source: PDB Internal
    // Symbol: ?TextBoxViewScroll@TextBoxView@DirectUI@@AEAAJW4Enum@ScrollCommand@CTextBoxView@@IPEAI@Z
    long TextBoxViewScroll(int, unsigned int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ShouldPassWheelMessageToScrollOwner@TextBoxView@DirectUI@@AEAAJAEAE@Z
    long get_ShouldPassWheelMessageToScrollOwner(unsigned char &);
};
} // namespace DirectUI
