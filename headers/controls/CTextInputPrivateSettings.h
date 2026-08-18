#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 18 member(s).
class CTextInputPrivateSettings {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Create@CTextInputPrivateSettings@@SAXPEAVCTextBoxBase@@PEAPEAV1@@Z
    static void Create(CTextBoxBase *, CTextInputPrivateSettings * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@CTextInputPrivateSettings@@QEAAJPEAVITextServices2@@@Z
    long Initialize(ITextServices2*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyFocusEnter@CTextInputPrivateSettings@@QEAAJXZ
    long NotifyFocusEnter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLayoutChanged@CTextInputPrivateSettings@@QEAAJXZ
    long NotifyLayoutChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmbeddedHandwritingViewEnabledSetting@CTextInputPrivateSettings@@QEAAJ_N@Z
    long SetEmbeddedHandwritingViewEnabledSetting(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetEmbeddedHandwritingViewVisibleSetting@CTextInputPrivateSettings@@QEAAJ_N@Z
    long SetEmbeddedHandwritingViewVisibleSetting(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsTelemetryCollectionEnabled@CTextInputPrivateSettings@@QEAAJ_N@Z
    long SetIsTelemetryCollectionEnabled(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetMultiLineSetting@CTextInputPrivateSettings@@QEAAJ_N@Z
    long SetMultiLineSetting(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSIPSettings@CTextInputPrivateSettings@@QEAAJ_N@Z
    long UpdateSIPSettings(bool);
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPrivateEditContext@CTextInputPrivateSettings@@IEAAJPEAPEAUIPrivateEditContext@@@Z
    long GetPrivateEditContext(IPrivateEditContext * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIntelligenceOffByDefaultForIS@CTextInputPrivateSettings@@KAHI@Z
    static int IsIntelligenceOffByDefaultForIS(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPureNumberIS@CTextInputPrivateSettings@@KAHI@Z
    static int IsPureNumberIS(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEditSettings@CTextInputPrivateSettings@@IEAAJXZ
    long UpdateEditSettings();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpellCheckingSettingBits@CTextInputPrivateSettings@@AEAAXH@Z
    void UpdateSpellCheckingSettingBits(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextPredictionSettingBits@CTextInputPrivateSettings@@AEAAXH@Z
    void UpdateTextPredictionSettingBits(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CTextInputPrivateSettings@@EEAA@XZ
    virtual ~CTextInputPrivateSettings();
};
