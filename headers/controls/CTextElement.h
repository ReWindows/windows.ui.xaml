#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 23 member(s).
class CTextElement {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingElement@CTextElement@@UEAAJIPEAPEAV1@@Z
    virtual long GetContainingElement(unsigned int, CTextElement * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainingFrameworkElement@CTextElement@@QEAAPEAVCFrameworkElement@@XZ
    CFrameworkElement * GetContainingFrameworkElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInlineCollection@CTextElement@@UEAAPEAVCInlineCollection@@XZ
    virtual CInlineCollection * GetInlineCollection();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionCount@CTextElement@@UEAAXPEAI@Z
    virtual void GetPositionCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextFormattingMember@CTextElement@@UEAAPEAPEAVTextFormatting@@XZ
    virtual TextFormatting * * GetTextFormattingMember();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTextPointer@CTextElement@@QEAAJW4ElementEdge@@PEAPEAVCTextPointerWrapper@@@Z
    long GetTextPointer(int, CTextPointerWrapper * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTypeIndex@CTextElement@@UEBA?AW4KnownTypeIndex@@XZ
    virtual int GetTypeIndex() const;
    // Category: Accessor | Source: PE Export
    // Symbol: ?HasInheritedProperties@CTextElement@@UEAAHXZ
    virtual int HasInheritedProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkDirty@CTextElement@@QEAAJPEBVCDependencyProperty@@@Z
    long MarkDirty(CDependencyProperty const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@CTextElement@@UEAAJAEBUPropertyChangedParams@@@Z
    virtual long OnPropertyChanged(PropertyChangedParams const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullInheritedTextFormatting@CTextElement@@UEAAJXZ
    virtual long PullInheritedTextFormatting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyHidden@CTextElement@@QEAAXXZ
    void RaiseAccessKeyHidden();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyInvoked@CTextElement@@QEAA_NXZ
    bool RaiseAccessKeyInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAccessKeyShown@CTextElement@@QEAAXPEBG@Z
    void RaiseAccessKeyShown(unsigned short const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CTextElement@@UEAAJAEBUSetValueParams@@@Z
    virtual long SetValue(SetValueParams const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextElement@@UEAA@XZ
    virtual ~CTextElement();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnterImpl@CTextElement@@MEAAJPEAVCDependencyObject@@UEnterParams@@@Z
    virtual long EnterImpl(CDependencyObject *, EnterParams);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetForEdge@CTextElement@@IEAAJW4ElementEdge@@PEAI@Z
    long GetOffsetForEdge(int, unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MarkInheritedPropertyDirty@CTextElement@@MEAAJPEBVCDependencyProperty@@PEBVCValue@@@Z
    virtual long MarkInheritedPropertyDirty(CDependencyProperty const *, CValue const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeerInternal@CTextElement@@IEAAPEAVCAutomationPeer@@XZ
    CAutomationPeer * OnCreateAutomationPeerInternal();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementEdgePositionFromTextContainer@CTextElement@@AEAAJW4ElementEdge@@PEAUITextContainer@@PEAVCPlainTextPosition@@@Z
    long GetElementEdgePositionFromTextContainer(int, ITextContainer *, CPlainTextPosition *);
};
