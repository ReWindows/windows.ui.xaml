#pragma once
#include "../windissect_forwards.h"

// Reconstructed from windows.ui.xaml.dll by Windissect. 17 member(s).
namespace Diagnostics {
class PropertyChainEvaluator {
public:
    class ReportedValue;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Evaluate@PropertyChainEvaluator@Diagnostics@@QEAA?AUEvaluatedValue@2@AEBUPropertyChainData@2@@Z
    WindissectOpaque Evaluate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateBinding@PropertyChainEvaluator@Diagnostics@@QEAA?AUEvaluatedValue@2@AEBUPropertyChainData@2@@Z
    WindissectOpaque EvaluateBinding(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnimatedValue@PropertyChainEvaluator@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$xref_ptr@VCDependencyObject@@@@PEBVCDependencyProperty@@@Z
    static WindissectOpaque GetAnimatedValue(WindissectOpaque const &, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultValue@PropertyChainEvaluator@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$xref_ptr@VCDependencyObject@@@@PEBVCDependencyProperty@@@Z
    static WindissectOpaque GetDefaultValue(WindissectOpaque const &, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveValue@PropertyChainEvaluator@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$xref_ptr@VCDependencyObject@@@@PEBVCPropertyBase@@@Z
    static WindissectOpaque GetEffectiveValue(WindissectOpaque const &, CPropertyBase const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalValue@PropertyChainEvaluator@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$xref_ptr@VCDependencyObject@@@@PEBVCDependencyProperty@@@Z
    static WindissectOpaque GetLocalValue(WindissectOpaque const &, CDependencyProperty const *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceAtIndex@PropertyChainEvaluator@Diagnostics@@QEAA?AV?$ComPtr@UIDependencyObject@Xaml@UI@Windows@@@ctl@@I@Z
    WindissectOpaque GetSourceAtIndex(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStyleValue@PropertyChainEvaluator@Diagnostics@@SA?AV?$ComPtr@UIInspectable@@@ctl@@AEBV?$xref_ptr@VCStyle@@@@PEBVCDependencyProperty@@@Z
    static WindissectOpaque GetStyleValue(WindissectOpaque const &, CDependencyProperty const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PropertyChainEvaluator@Diagnostics@@QEAA@PEAVDependencyObject@DirectUI@@@Z
    PropertyChainEvaluator(::DirectUI::DependencyObject *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?begin@PropertyChainEvaluator@Diagnostics@@QEAA?AVPropertyChainIterator@2@XZ
    WindissectOpaque begin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?end@PropertyChainEvaluator@Diagnostics@@QEAA?AVPropertyChainIterator@2@XZ
    WindissectOpaque end();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PropertyChainEvaluator@Diagnostics@@QEAA@XZ
    ~PropertyChainEvaluator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSourcesVector@PropertyChainEvaluator@Diagnostics@@AEAAXXZ
    void EnsureSourcesVector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateSource@PropertyChainEvaluator@Diagnostics@@AEAAXAEBV?$xref_ptr@VCDependencyObject@@@@W4BaseValueSource@@@Z
    void EvaluateSource(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluateStyleChain@PropertyChainEvaluator@Diagnostics@@AEAAXV?$xref_ptr@VCStyle@@@@W4BaseValueSource@@@Z
    void EvaluateStyleChain(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReportedValue@PropertyChainEvaluator@Diagnostics@@CA?AUReportedValue@12@AEBV?$ComPtr@UIInspectable@@@ctl@@PEBVCPropertyBase@@AEBV?$ComPtr@UIDebugBindingExpression@DebugTool@@@5@AEBV?$ComPtr@VDependencyObject@DirectUI@@@5@@Z
    static WindissectOpaque GetReportedValue(WindissectOpaque const &, CPropertyBase const *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceIndex@PropertyChainEvaluator@Diagnostics@@AEAAIAEBV?$ComPtr@VDependencyObject@DirectUI@@@ctl@@W4BaseValueSource@@@Z
    unsigned int GetSourceIndex(WindissectOpaque const &, int);
};
} // namespace Diagnostics
