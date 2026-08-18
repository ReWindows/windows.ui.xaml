#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 42 member(s).
namespace DirectUI::ModernCollectionBasePanel {
class ContainerManager {
public:
    class PinnedElementInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearPinAndFocus@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAXXZ
    void ClearPinAndFocus();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAA@PEAV12@@Z
    ContainerManager(::DirectUI::ModernCollectionBasePanel *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAtDataIndex@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetElementAtDataIndex(int, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAtValidIndex@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetElementAtValidIndex(int, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromPinnedElements@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetElementFromPinnedElements(int, int, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFocusedContainer@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBAJPEAHPEAV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long GetFocusedContainer(int *, WindissectOpaque *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsElementPinned@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NW4ElementType@Controls@Xaml@UI@Windows@@AEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@PEAH@Z
    bool GetIsElementPinned(int, WindissectOpaque const &, int *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsIndexPinned@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    bool GetIsIndexPinned(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HoldForPrepare@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAXV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@W4ElementType@Controls@Xaml@UI@Windows@@H@Z
    void HoldForPrepare(WindissectOpaque, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertSentinelElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    long InsertSentinelElement(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interface_DataItemFromElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@PEAUIDependencyObject@678@PEAPEAUIInspectable@@@Z
    long Interface_DataItemFromElement(int, ::Windows::UI::Xaml::IDependencyObject *, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interface_ElementFromDataIndex@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAPEAUIDependencyObject@678@@Z
    long Interface_ElementFromDataIndex(int, int, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interface_ElementFromDataItem@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@PEAUIInspectable@@PEAPEAUIDependencyObject@678@@Z
    long Interface_ElementFromDataItem(int, IInspectable *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interface_GroupHeaderContainerFromItemContainerImpl@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJPEAUIDependencyObject@Xaml@UI@Windows@@PEAPEAU4567@@Z
    long Interface_GroupHeaderContainerFromItemContainerImpl(::Windows::UI::Xaml::IDependencyObject *, ::Windows::UI::Xaml::IDependencyObject * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Interface_IndexFromElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@PEAUIDependencyObject@678@EPEAH@Z
    long Interface_IndexFromElement(int, ::Windows::UI::Xaml::IDependencyObject *, unsigned char, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupHeaderConnected@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NII@Z
    bool IsGroupHeaderConnected(unsigned int, unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsGroupHeaderRealized@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NI@Z
    bool IsGroupHeaderRealized(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsItemConnected@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NI@Z
    bool IsItemConnected(unsigned int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidElementIndexWithinBounds@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBA_NW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    bool IsValidElementIndexWithinBounds(int, int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataItemAdded@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    long OnDataItemAdded(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataItemRemoved@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    long OnDataItemRemoved(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataItemReplaced@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HPEAUIUIElement@678@@Z
    long OnDataItemReplaced(int, int, ::Windows::UI::Xaml::IUIElement *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceInGarbageRegionIfNotInChildren@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long PlaceInGarbageRegionIfNotInChildren(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceInValidElements@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long PlaceInValidElements(int, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Refresh@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long Refresh();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterPinnedElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long RegisterPinnedElement(int, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAllValidElements@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@@Z
    long RemoveAllValidElements(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromValidElements@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@HEH@Z
    long RemoveFromValidElements(int, int, unsigned char, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Reset@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJXZ
    long Reset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFocusedContainer@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJE@Z
    long ResetFocusedContainer(unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetFocusedHeaderContainer@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJE@Z
    long ResetFocusedHeaderContainer(unsigned char);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedContainer@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJHAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long SetFocusedContainer(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFocusedHeaderContainer@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJHAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long SetFocusedHeaderContainer(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartOfVisualSection@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEBAHW4ElementType@Controls@Xaml@UI@Windows@@@Z
    int StartOfVisualSection(int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimEdgeSentinels@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAXXZ
    void TrimEdgeSentinels();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterPinnedElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAJW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    long UnregisterPinnedElement(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDataIndexForFirstValidElement@ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAAXW4ElementType@Controls@Xaml@UI@Windows@@H@Z
    void UpdateDataIndexForFirstValidElement(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ContainerManager@ModernCollectionBasePanel@DirectUI@@QEAA@XZ
    ~ContainerManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToVisualChildren@ContainerManager@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@HAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@@Z
    long AddToVisualChildren(int, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ElementUnpinned@ContainerManager@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@HAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@E@Z
    long ElementUnpinned(int, int, WindissectOpaque const &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromVisualChildren@ContainerManager@ModernCollectionBasePanel@DirectUI@@AEAAJW4ElementType@Controls@Xaml@UI@Windows@@HAEBV?$ComPtr@UIUIElement@Xaml@UI@Windows@@@ctl@@E@Z
    long RemoveFromVisualChildren(int, int, WindissectOpaque const &, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrimEdgeSentinels@ContainerManager@ModernCollectionBasePanel@DirectUI@@AEAAXW4ElementType@Controls@Xaml@UI@Windows@@@Z
    void TrimEdgeSentinels(int);
};
} // namespace DirectUI::ModernCollectionBasePanel
