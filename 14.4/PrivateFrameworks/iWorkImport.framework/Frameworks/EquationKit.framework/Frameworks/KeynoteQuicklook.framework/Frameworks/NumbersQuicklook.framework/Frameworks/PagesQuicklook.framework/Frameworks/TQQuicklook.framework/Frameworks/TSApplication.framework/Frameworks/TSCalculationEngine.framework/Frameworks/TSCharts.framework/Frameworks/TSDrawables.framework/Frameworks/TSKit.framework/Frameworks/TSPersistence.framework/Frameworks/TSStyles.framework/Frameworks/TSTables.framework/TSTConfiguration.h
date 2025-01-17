//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSTConfiguration : NSObject
{
    _Bool _supportsContainedTextEditing;
    _Bool _showsCellEditingToolbar;
    _Bool _supportsAutomaticNumberKeyboard;
    _Bool _supportsMergedCells;
    _Bool _supportsHiddenCells;
    _Bool _returnWhileEditingNavigates;
    _Bool _tabWhileEditingNavigates;
    _Bool _continuesEditingAfterNavigation;
    _Bool _arrowKeyAtEdgeWhileEditingNavigates;
    _Bool _arrowKeysWrap;
    _Bool _arrowKeysNavigateWhenEditingBeganByTyping;
    _Bool _backTabWraps;
    _Bool _tabAtEdgeAddsRow;
    _Bool _tabAtEdgeAddsColumn;
    _Bool _pastesTile;
    _Bool _allowHorizontalAutoresize;
    _Bool _selectsCellOnInitialTap;
    _Bool _dragByHandleOnly;
    _Bool _cornersCanDragResize;
    _Bool _supportsControlCells;
    _Bool _controlCellUIAlwaysVisible;
    _Bool _supportsActionMenu;
    _Bool _hasLargerFonts;
    _Bool _supportsFrozenHeaders;
    _Bool _supportsAutoResizedTables;
    _Bool _supportsCreateChartFromSelection;
    _Bool _selectionUsesBezierPath;
    _Bool _usesSelectionChromeResizer;
    _Bool _showsChromeWhileEditingCell;
    _Bool _showsSelectionKnobsWhileEditingCell;
    _Bool _showsCellWarningIndicator;
    _Bool _supportsCanvasReferenceEditing;
    _Bool _usesLimitedAutomaticFormatParsing;
    _Bool _supportsFormulaEditing;
    _Bool _supportsImplicitEditing;
    _Bool _allowFreeformFormulaText;
    _Bool _allowWhitespaceInFormulas;
    _Bool _showsHideUnhideUI;
    _Bool _exportPermanentHidingState;
    _Bool _showsCellOverflowIndicator;
    _Bool _supportsAutofill;
    _Bool _usesLimitedNumberFormatInspector;
    _Bool _headersFrozenByDefault;
    _Bool _createLargeDefaultTables;
    _Bool _tableNameEnabledInNewTables;
    _Bool _supportsRowColumnAdderKnob;
    _Bool _supportsDragDropMoveMode;
    _Bool _supportsDynamicallyHidingRowColumnForDragDrop;
    _Bool _formulaEditorEvaluatesFormulas;
    _Bool _showReferenceHighlightsOnFormulaCellSelection;
    _Bool _tokenizeFormulaStringLiterals;
    _Bool _exportsCellComments;
    _Bool _exportsCellAnnotations;
    _Bool _supportsCellCommentsActivityLines;
    _Bool _cellEditorsCanScrollToNonLocalTableSelection;
    _Bool _supportsRepeatHeaderRowsOnEachPage;
    _Bool _supportsTableTranspose;
    _Bool _supportsRowMovesInPaginatedTables;
    _Bool _disableImplicitNaming;
    _Bool _supportsComplexReorganizeUI;
    _Bool _supportsQuickFilterUI;
    _Bool _pasteFilterHidingAsUserHiding;
    _Bool _allowsFullyFilteredTables;
    _Bool _supportsTableColumnAutocomplete;
    _Bool _supportsInlineAttachments;
    _Bool _followsLinksOnFirstTap;
    _Bool _supportsBidiTablesUI;
    _Bool _supportsPlaceholderGeometry;
    _Bool _supportsStockUI;
    _Bool _shouldZoomOutOnEndEditing;
    _Bool _forceZoomInOnBeginEditing;
    _Bool _supportsCategorization;
    _Bool _allowsBlackDragDropBackground;
    _Bool _supportsAddBodyRowAtBottomSiriKitIntent;
    unsigned int _maxNumberOfRows;
    unsigned int _maxNumberOfColumns;
    unsigned int _maxNumberOfPopulatedCells;
    double _structuredTextImportConfidenceThreshold;
    double _structuredTextImportConfidenceThresholdForCanvas;
    unsigned long long _structuredTextImportSizeLimit;
}

+ (void)resetSharedTableConfiguration;
+ (id)sharedTableConfiguration;
@property(nonatomic) _Bool supportsAddBodyRowAtBottomSiriKitIntent; // @synthesize supportsAddBodyRowAtBottomSiriKitIntent=_supportsAddBodyRowAtBottomSiriKitIntent;
@property(nonatomic) _Bool allowsBlackDragDropBackground; // @synthesize allowsBlackDragDropBackground=_allowsBlackDragDropBackground;
@property(nonatomic) unsigned long long structuredTextImportSizeLimit; // @synthesize structuredTextImportSizeLimit=_structuredTextImportSizeLimit;
@property(nonatomic) double structuredTextImportConfidenceThresholdForCanvas; // @synthesize structuredTextImportConfidenceThresholdForCanvas=_structuredTextImportConfidenceThresholdForCanvas;
@property(nonatomic) double structuredTextImportConfidenceThreshold; // @synthesize structuredTextImportConfidenceThreshold=_structuredTextImportConfidenceThreshold;
@property(nonatomic) _Bool supportsCategorization; // @synthesize supportsCategorization=_supportsCategorization;
@property(nonatomic) _Bool forceZoomInOnBeginEditing; // @synthesize forceZoomInOnBeginEditing=_forceZoomInOnBeginEditing;
@property(nonatomic) _Bool shouldZoomOutOnEndEditing; // @synthesize shouldZoomOutOnEndEditing=_shouldZoomOutOnEndEditing;
@property(nonatomic) _Bool supportsStockUI; // @synthesize supportsStockUI=_supportsStockUI;
@property(nonatomic) _Bool supportsPlaceholderGeometry; // @synthesize supportsPlaceholderGeometry=_supportsPlaceholderGeometry;
@property(nonatomic) _Bool supportsBidiTablesUI; // @synthesize supportsBidiTablesUI=_supportsBidiTablesUI;
@property(nonatomic) _Bool followsLinksOnFirstTap; // @synthesize followsLinksOnFirstTap=_followsLinksOnFirstTap;
@property(nonatomic) _Bool supportsInlineAttachments; // @synthesize supportsInlineAttachments=_supportsInlineAttachments;
@property(nonatomic) _Bool supportsTableColumnAutocomplete; // @synthesize supportsTableColumnAutocomplete=_supportsTableColumnAutocomplete;
@property(nonatomic) _Bool allowsFullyFilteredTables; // @synthesize allowsFullyFilteredTables=_allowsFullyFilteredTables;
@property(nonatomic) _Bool pasteFilterHidingAsUserHiding; // @synthesize pasteFilterHidingAsUserHiding=_pasteFilterHidingAsUserHiding;
@property(nonatomic) _Bool supportsQuickFilterUI; // @synthesize supportsQuickFilterUI=_supportsQuickFilterUI;
@property(nonatomic) _Bool supportsComplexReorganizeUI; // @synthesize supportsComplexReorganizeUI=_supportsComplexReorganizeUI;
@property(nonatomic) _Bool disableImplicitNaming; // @synthesize disableImplicitNaming=_disableImplicitNaming;
@property(nonatomic) _Bool supportsRowMovesInPaginatedTables; // @synthesize supportsRowMovesInPaginatedTables=_supportsRowMovesInPaginatedTables;
@property(nonatomic) _Bool supportsTableTranspose; // @synthesize supportsTableTranspose=_supportsTableTranspose;
@property(nonatomic) _Bool supportsRepeatHeaderRowsOnEachPage; // @synthesize supportsRepeatHeaderRowsOnEachPage=_supportsRepeatHeaderRowsOnEachPage;
@property(nonatomic) _Bool cellEditorsCanScrollToNonLocalTableSelection; // @synthesize cellEditorsCanScrollToNonLocalTableSelection=_cellEditorsCanScrollToNonLocalTableSelection;
@property(nonatomic) _Bool supportsCellCommentsActivityLines; // @synthesize supportsCellCommentsActivityLines=_supportsCellCommentsActivityLines;
@property(nonatomic) _Bool exportsCellAnnotations; // @synthesize exportsCellAnnotations=_exportsCellAnnotations;
@property(nonatomic) _Bool exportsCellComments; // @synthesize exportsCellComments=_exportsCellComments;
@property(nonatomic) _Bool tokenizeFormulaStringLiterals; // @synthesize tokenizeFormulaStringLiterals=_tokenizeFormulaStringLiterals;
@property(nonatomic) _Bool showReferenceHighlightsOnFormulaCellSelection; // @synthesize showReferenceHighlightsOnFormulaCellSelection=_showReferenceHighlightsOnFormulaCellSelection;
@property(nonatomic) _Bool formulaEditorEvaluatesFormulas; // @synthesize formulaEditorEvaluatesFormulas=_formulaEditorEvaluatesFormulas;
@property(nonatomic) _Bool supportsDynamicallyHidingRowColumnForDragDrop; // @synthesize supportsDynamicallyHidingRowColumnForDragDrop=_supportsDynamicallyHidingRowColumnForDragDrop;
@property(nonatomic) _Bool supportsDragDropMoveMode; // @synthesize supportsDragDropMoveMode=_supportsDragDropMoveMode;
@property(nonatomic) _Bool supportsRowColumnAdderKnob; // @synthesize supportsRowColumnAdderKnob=_supportsRowColumnAdderKnob;
@property(nonatomic) _Bool tableNameEnabledInNewTables; // @synthesize tableNameEnabledInNewTables=_tableNameEnabledInNewTables;
@property(nonatomic) _Bool createLargeDefaultTables; // @synthesize createLargeDefaultTables=_createLargeDefaultTables;
@property(nonatomic) _Bool headersFrozenByDefault; // @synthesize headersFrozenByDefault=_headersFrozenByDefault;
@property(nonatomic) _Bool usesLimitedNumberFormatInspector; // @synthesize usesLimitedNumberFormatInspector=_usesLimitedNumberFormatInspector;
@property(nonatomic) _Bool supportsAutofill; // @synthesize supportsAutofill=_supportsAutofill;
@property(nonatomic) _Bool showsCellOverflowIndicator; // @synthesize showsCellOverflowIndicator=_showsCellOverflowIndicator;
@property(nonatomic) _Bool exportPermanentHidingState; // @synthesize exportPermanentHidingState=_exportPermanentHidingState;
@property(nonatomic) _Bool showsHideUnhideUI; // @synthesize showsHideUnhideUI=_showsHideUnhideUI;
@property(nonatomic) _Bool allowWhitespaceInFormulas; // @synthesize allowWhitespaceInFormulas=_allowWhitespaceInFormulas;
@property(nonatomic) _Bool allowFreeformFormulaText; // @synthesize allowFreeformFormulaText=_allowFreeformFormulaText;
@property(nonatomic) _Bool supportsImplicitEditing; // @synthesize supportsImplicitEditing=_supportsImplicitEditing;
@property(nonatomic) _Bool supportsFormulaEditing; // @synthesize supportsFormulaEditing=_supportsFormulaEditing;
@property(nonatomic) _Bool usesLimitedAutomaticFormatParsing; // @synthesize usesLimitedAutomaticFormatParsing=_usesLimitedAutomaticFormatParsing;
@property(nonatomic) _Bool supportsCanvasReferenceEditing; // @synthesize supportsCanvasReferenceEditing=_supportsCanvasReferenceEditing;
@property(nonatomic) _Bool showsCellWarningIndicator; // @synthesize showsCellWarningIndicator=_showsCellWarningIndicator;
@property(nonatomic) _Bool showsSelectionKnobsWhileEditingCell; // @synthesize showsSelectionKnobsWhileEditingCell=_showsSelectionKnobsWhileEditingCell;
@property(nonatomic) _Bool showsChromeWhileEditingCell; // @synthesize showsChromeWhileEditingCell=_showsChromeWhileEditingCell;
@property(nonatomic) _Bool usesSelectionChromeResizer; // @synthesize usesSelectionChromeResizer=_usesSelectionChromeResizer;
@property(nonatomic) _Bool selectionUsesBezierPath; // @synthesize selectionUsesBezierPath=_selectionUsesBezierPath;
@property(nonatomic) _Bool supportsCreateChartFromSelection; // @synthesize supportsCreateChartFromSelection=_supportsCreateChartFromSelection;
@property(nonatomic) _Bool supportsAutoResizedTables; // @synthesize supportsAutoResizedTables=_supportsAutoResizedTables;
@property(nonatomic) _Bool supportsFrozenHeaders; // @synthesize supportsFrozenHeaders=_supportsFrozenHeaders;
@property(nonatomic) _Bool hasLargerFonts; // @synthesize hasLargerFonts=_hasLargerFonts;
@property(nonatomic) _Bool supportsActionMenu; // @synthesize supportsActionMenu=_supportsActionMenu;
@property(nonatomic) _Bool controlCellUIAlwaysVisible; // @synthesize controlCellUIAlwaysVisible=_controlCellUIAlwaysVisible;
@property(nonatomic) _Bool supportsControlCells; // @synthesize supportsControlCells=_supportsControlCells;
@property(nonatomic) _Bool cornersCanDragResize; // @synthesize cornersCanDragResize=_cornersCanDragResize;
@property(nonatomic) _Bool dragByHandleOnly; // @synthesize dragByHandleOnly=_dragByHandleOnly;
@property(nonatomic) _Bool selectsCellOnInitialTap; // @synthesize selectsCellOnInitialTap=_selectsCellOnInitialTap;
@property(nonatomic) _Bool allowHorizontalAutoresize; // @synthesize allowHorizontalAutoresize=_allowHorizontalAutoresize;
@property(nonatomic) _Bool pastesTile; // @synthesize pastesTile=_pastesTile;
@property(nonatomic) _Bool tabAtEdgeAddsColumn; // @synthesize tabAtEdgeAddsColumn=_tabAtEdgeAddsColumn;
@property(nonatomic) _Bool tabAtEdgeAddsRow; // @synthesize tabAtEdgeAddsRow=_tabAtEdgeAddsRow;
@property(nonatomic) _Bool backTabWraps; // @synthesize backTabWraps=_backTabWraps;
@property(nonatomic) _Bool arrowKeysNavigateWhenEditingBeganByTyping; // @synthesize arrowKeysNavigateWhenEditingBeganByTyping=_arrowKeysNavigateWhenEditingBeganByTyping;
@property(nonatomic) _Bool arrowKeysWrap; // @synthesize arrowKeysWrap=_arrowKeysWrap;
@property(nonatomic) _Bool arrowKeyAtEdgeWhileEditingNavigates; // @synthesize arrowKeyAtEdgeWhileEditingNavigates=_arrowKeyAtEdgeWhileEditingNavigates;
@property(nonatomic) _Bool continuesEditingAfterNavigation; // @synthesize continuesEditingAfterNavigation=_continuesEditingAfterNavigation;
@property(nonatomic) _Bool tabWhileEditingNavigates; // @synthesize tabWhileEditingNavigates=_tabWhileEditingNavigates;
@property(nonatomic) _Bool returnWhileEditingNavigates; // @synthesize returnWhileEditingNavigates=_returnWhileEditingNavigates;
@property(nonatomic) _Bool supportsHiddenCells; // @synthesize supportsHiddenCells=_supportsHiddenCells;
@property(nonatomic) _Bool supportsMergedCells; // @synthesize supportsMergedCells=_supportsMergedCells;
@property(nonatomic) _Bool supportsAutomaticNumberKeyboard; // @synthesize supportsAutomaticNumberKeyboard=_supportsAutomaticNumberKeyboard;
@property(nonatomic) _Bool showsCellEditingToolbar; // @synthesize showsCellEditingToolbar=_showsCellEditingToolbar;
@property(nonatomic) _Bool supportsContainedTextEditing; // @synthesize supportsContainedTextEditing=_supportsContainedTextEditing;
@property(nonatomic) unsigned int maxNumberOfPopulatedCells; // @synthesize maxNumberOfPopulatedCells=_maxNumberOfPopulatedCells;
@property(nonatomic) unsigned int maxNumberOfColumns; // @synthesize maxNumberOfColumns=_maxNumberOfColumns;
@property(nonatomic) unsigned int maxNumberOfRows; // @synthesize maxNumberOfRows=_maxNumberOfRows;
@property(readonly, nonatomic) _Bool supportsExpandedTables;
- (id)init;

@end

