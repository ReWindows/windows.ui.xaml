#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 10 member(s).
class TextContextMenu {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddToDictionaryClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnAddToDictionaryClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDeleteRepeatedClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnDeleteRepeatedClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIgnoreAllClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnIgnoreAllClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIgnoreOnceClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnIgnoreOnceClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpellingSuggestionClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnSpellingSuggestionClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStopCorrectingClicked@TextContextMenu@@SAJPEAVCDependencyObject@@PEAVCEventArgs@@@Z
    static long OnStopCorrectingClicked(CDependencyObject *, CEventArgs *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseContextMenuOpeningEvent@TextContextMenu@@SAJUEventHandle@@PEAVCUIElement@@UXPOINTF@@IIIIIIW4PopupMenuInputMode@@@Z
    static long RaiseContextMenuOpeningEvent(EventHandle, CUIElement *, XPOINTF, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@TextContextMenu@@SAJPEAVCUIElement@@AEBUXPOINTF@@IIIIIIW4PopupMenuInputMode@@@Z
    static long Show(CUIElement *, XPOINTF const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeProofingMenuItem@TextContextMenu@@CAJQEAVCDependencyObject@@E@Z
    static long InvokeProofingMenuItem(CDependencyObject * const, unsigned char);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Show@TextContextMenu@@CAJPEAVCUIElement@@PEAVTextContextMenuCommandHandler@@AEBUXPOINTF@@IIIIIIW4PopupMenuInputMode@@W4PopupMenuMenuStyle@@@Z
    static long Show(CUIElement *, TextContextMenuCommandHandler *, XPOINTF const &, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
};
