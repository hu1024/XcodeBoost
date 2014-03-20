//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSControl.h>

@class NSMutableArray, NSScroller, NSString;

@interface NSBrowser : NSControl
{
    id _target;
    SEL _action;
    id _delegate;
    SEL _doubleAction;
    Class _matrixClass;
    id _cellPrototype;
    struct CGSize _columnSize;
    short _numberOfVisibleColumns;
    short _minColumnWidth;
    short _firstVisibleColumn;
    short _maxVisibleColumns;
    NSMutableArray *_titles;
    NSString *_pathSeparator;
    NSMutableArray *_columns;
    id _brAuxiliaryStorage;
    NSString *_firstColumnTitle;
    NSScroller *_scroller;
    struct __Brflags {
        unsigned int firstVisibleCalculationDisabled:1;
        unsigned int prefersAllColumnUserResizing:1;
        unsigned int usesSmallScrollers:1;
        unsigned int usesSmallSizeTitleFont:1;
        unsigned int actionNeedsToBeSent:1;
        unsigned int acceptsFirstMouse:1;
        unsigned int refusesFirstResponder:1;
        unsigned int disableCompositing:6;
        unsigned int delegateSelectsCellsByRow:1;
        unsigned int allowsIncrementalSearching:1;
        unsigned int time:1;
        unsigned int hasHorizontalScroller:1;
        unsigned int prohibitEmptySel:1;
        unsigned int sendActionOnArrowKeys:1;
        unsigned int dontDrawTitles:1;
        unsigned int acceptArrowKeys:1;
        unsigned int delegateValidatesColumns:1;
        unsigned int delegateDoesNotCreateRowsInMatrix:1;
        unsigned int delegateSelectsCellsByString:1;
        unsigned int delegateSetsTitles:1;
        unsigned int delegateImplementsWillDisplayCell:1;
        unsigned int separateColumns:1;
        unsigned int titleFromPrevious:1;
        unsigned int isTitled:1;
        unsigned int reuseColumns:1;
        unsigned int allowsBranchSelection:1;
        unsigned int allowsMultipleSelection:1;
    } _brflags;
}

+ (void)removeSavedColumnsWithAutosaveName:(id)arg1;
+ (Class)browserTableColumnClass;
+ (Class)browserTableViewClass;
+ (Class)matrixColumnViewControllerClass;
+ (Class)tableColumnViewControllerClass;
+ (Class)previewColumnViewControllerClass;
+ (Class)browserColumnViewClass;
+ (Class)cellClass;
+ (void)initialize;
+ (BOOL)accessibilityIsSingleCelled;
- (BOOL)_hasLeafViewControllerForItem:(id)arg1;
- (void)_clearLeafControllers;
- (id)_gdbLeafItemViewControllerByItem;
- (void)editItemAtIndexPath:(id)arg1 withEvent:(id)arg2 select:(BOOL)arg3;
- (void)_autoscrollForDraggingInfo:(id)arg1 timeDelta:(double)arg2;
- (BOOL)_shouldAutoscrollForDraggingInfo:(id)arg1;
- (id)_hitTest:(struct CGPoint *)arg1 dragTypes:(id)arg2;
- (BOOL)_shouldAutoScrollForPoint:(struct CGPoint)arg1;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (BOOL)_delegateRespondsToNamesOfPromisedFilesDroppedAtDestination;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)_sendDelegateAcceptDropForDragInfo:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)_scheduleCollapsingAutoExpandedItems;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_validateDropForDragInfo:(id)arg1;
- (void)_sendDelegateValidateDropForDragInfo:(id)arg1;
- (BOOL)_delegateRepondsToValidateDrop;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (BOOL)_determineIsSameTargetForDragInfo:(id)arg1;
- (void)_setNeedsDisplayForTargetRow:(long long)arg1 column:(long long)arg2 operation:(unsigned long long)arg3;
- (void)_recursiveDisplayAllDirtyWithLockFocus:(BOOL)arg1 visRect:(struct CGRect)arg2;
- (void)viewWillDraw;
- (void)_recursiveDisplayRectIfNeededIgnoringOpacity:(struct CGRect)arg1 isVisibleRect:(BOOL)arg2 rectIsVisibleRectForView:(id)arg3 topView:(BOOL)arg4;
- (void)_drawDropHighlight;
- (void)_drawDropHighlightAroundColumnWithRect:(struct CGRect)arg1;
- (void)_endColumnDragging;
- (void)_commitAutoExpandedItems;
- (void)_collapseAutoExpandedItems;
- (void)_releaseAutoExpandingItemsCache;
- (void)_restoreLastSelectedItemsBeforeAutoExpand;
- (id)_uncachedLastSelectedIndexSetForItem:(id)arg1;
- (void)_markAutoExpandedItemWithDragInfo:(id)arg1;
- (void)_setDropTargetColumn:(long long)arg1 targetRow:(long long)arg2 targetDropOperation:(unsigned long long)arg3 dragOperation:(unsigned long long)arg4;
- (void)_beginColumnDragging;
- (void)_drawDropHighlightAboveRect:(struct CGRect)arg1;
- (void)_drawDropHighlightAroundRect:(struct CGRect)arg1 isSelected:(BOOL)arg2 rounded:(BOOL)arg3;
- (void)_beforeDrawCell:(id)arg1 atRow:(long long)arg2 col:(long long)arg3 clipRect:(struct CGRect)arg4;
- (void)_drawDropHighlightBackgroundAroundRect:(struct CGRect)arg1;
- (void)_setDropHighilightColorIfSelected:(BOOL)arg1;
- (id)_dropHighlightColorForEntireTableView;
- (id)_dropHighlightBackgroundColor;
- (id)_dropHighlightColor;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (void)unregisterDraggedTypes;
- (void)registerForDraggedTypes:(id)arg1;
- (void)_cancelAutoExpandItemUnderCursor;
- (BOOL)_autoExpandItemUnderCursor;
- (BOOL)_shouldAutoExpandItemAtRow:(long long)arg1 inColumn:(long long)arg2;
- (id)draggingImageForRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)canDragRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3;
- (BOOL)_performDragFromMouseDown:(id)arg1 inColumn:(long long)arg2;
- (void)_concludeDragRows:(id)arg1 inColumn:(long long)arg2;
- (void)_prepareToDragRows:(id)arg1 inColumn:(long long)arg2;
- (BOOL)_canDragRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3;
- (void)_dragRowIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 pasteboard:(id)arg4 source:(id)arg5 slideBack:(BOOL)arg6;
- (id)_draggingImageForRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 withEvent:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (BOOL)_sendDelegateWriteRowsWithIndexes:(id)arg1 inColumn:(long long)arg2 toPasteboard:(id)arg3;
- (BOOL)_delegateRespondsToWriteRows;
- (CDStruct_d2b197d1)alignmentRectInsets;
- (void)_sizeToFitColumnMenuAction:(id)arg1;
- (void)_sizeToFitColumn:(id)arg1 withEvent:(id)arg2;
- (void)_sizeToFitColumn:(id)arg1 withSizeToFitType:(long long)arg2;
- (long long)_calculateSizeToFitWidthOfColumn:(long long)arg1 testLoadedOnly:(BOOL)arg2;
- (void)_resizeColumn:(id)arg1 withEvent:(id)arg2;
- (void)_enableAutosavingAndColumnResizingNotifications;
- (void)_disableAutosavingAndColumnResizingNotificationsAndMark:(BOOL)arg1;
- (void)_resizeColumnByDelta:(double)arg1 resizeInfo:(struct _NSBrowserColumnResizeInfo *)arg2;
- (void)_equalyResizeColumnsByDelta:(double)arg1 resizeInfo:(struct _NSBrowserColumnResizeInfo *)arg2;
- (void)_zeroPinnedResizeColumnsBySharingDelta:(double)arg1 lastSharingColumn:(id)arg2 resizeInfo:(struct _NSBrowserColumnResizeInfo *)arg3;
- (void)_setWidth:(double)arg1 ofColumn:(long long)arg2 stretchWindow:(BOOL)arg3;
- (void)_alignColumnForStretchedWindowWithInfo:(struct _NSBrowserColumnResizeInfo *)arg1;
- (BOOL)_stretchWindowIfNecessaryToFitResizedColumnWithInfo:(struct _NSBrowserColumnResizeInfo *)arg1 resizeColumnDelta:(double *)arg2;
- (BOOL)_shouldStretchWindowIfNecessaryForUserColumnResize;
- (BOOL)userColumnResizingAutoresizesWindow;
- (void)setUserColumnResizingAutoresizesWindow:(BOOL)arg1;
- (void)_columnResizeChangeFrameOfColumn:(id)arg1 toFrame:(struct CGRect)arg2 constrainWidth:(BOOL)arg3 resizeInfo:(struct _NSBrowserColumnResizeInfo *)arg4;
- (double)_preferedColumnWidth;
- (void)_setNewPreferedColumnWidth:(double)arg1;
- (void)_clearVisitedColumnContentWidths;
- (void)_setNeedsDisplayBeginingAtColumn:(long long)arg1;
- (BOOL)_continuousResizeNotifications;
- (void)_setContinuousResizeNotifications:(BOOL)arg1;
- (id)columnsAutosaveName;
- (void)setColumnsAutosaveName:(id)arg1;
- (void)_autosaveColumnsIfNecessary;
- (void)_readPersistentBrowserColumns;
- (void)_writePersistentBrowserColumns;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1 inColumn:(long long)arg2;
- (double)rowHeight;
- (void)setRowHeight:(double)arg1;
- (void)_sizeMatrixOfColumnToFit:(id)arg1;
- (double)widthOfColumn:(long long)arg1;
- (double)defaultColumnWidth;
- (void)setDefaultColumnWidth:(double)arg1;
- (void)setWidth:(double)arg1 ofColumn:(long long)arg2;
- (double)_validateNewWidthOfColumn:(id)arg1 width:(double)arg2;
- (double)columnWidthForColumnContentWidth:(double)arg1;
- (double)columnContentWidthForColumnWidth:(double)arg1;
- (BOOL)prefersAllColumnUserResizing;
- (void)setPrefersAllColumnUserResizing:(BOOL)arg1;
- (unsigned long long)columnResizingType;
- (void)setColumnResizingType:(unsigned long long)arg1;
- (id)_lastDraggedOrUpEventFollowing:(id)arg1;
- (id)_lastDraggedEventFollowing:(id)arg1;
- (BOOL)_typeSelectInterpretKeyEvent:(id)arg1;
- (BOOL)_typeSelectUndoLastSearch;
- (void)_typeSelectEndCurrentSearch;
- (void)_restoreTypeSelectCellValue;
- (BOOL)_performTypeSelect:(id)arg1;
- (void)_typeSelectScheduleEndOfSearch;
- (long long)_internalNextTypeSelectMatchFromRow:(long long)arg1 toRow:(long long)arg2 inColumn:(long long)arg3 forString:(id)arg4;
- (long long)_nextTypeSelectMatchFromRow:(long long)arg1 toRow:(long long)arg2 inColumn:(long long)arg3 forString:(id)arg4;
- (id)_internalTypeSelectStringForColumn:(long long)arg1 row:(long long)arg2;
- (id)_typeSelectStringForColumn:(long long)arg1 row:(long long)arg2;
- (BOOL)_shouldTypeSelectForEvent:(id)arg1;
- (id)currentTypeSelectSearchString;
- (void)encodeWithCoder:(id)arg1;
- (void)_old_encodeWithCoder_NSBrowser:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_old_initWithCoder_NSBrowser:(id)arg1;
- (struct CGSize)_calcVisibleColumnAreaAvailable;
- (BOOL)sendAction;
- (void)doDoubleClick:(id)arg1;
- (void)_willStartTrackingMouseInMatrix:(id)arg1 withEvent:(id)arg2;
- (void)_doClickAndQueueSendingOfAction:(id)arg1 removeAndAddColumnsIfNecessary:(BOOL)arg2 movingBack:(BOOL)arg3;
- (void)_doClickAndQueueSendingOfAction:(id)arg1;
- (BOOL)_matrixShouldAddColumnForColumn:(long long)arg1 matrix:(id)arg2;
- (void)_sendQueuedAction;
- (void)doClick:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)_scrollColumnToLastVisible:(long long)arg1;
- (BOOL)acceptsFirstResponder;
- (BOOL)refusesFirstResponder;
- (void)setRefusesFirstResponder:(BOOL)arg1;
- (BOOL)needsPanelToBecomeKey;
- (BOOL)becomeFirstResponder;
- (id)_viewThatShouldBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (void)keyDown:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_actOnKeyDown:(id)arg1;
- (void)moveLeft:(id)arg1;
- (BOOL)_doMoveLeft;
- (void)moveRight:(id)arg1;
- (BOOL)_doMoveRight;
- (void)performClick:(id)arg1;
- (long long)_keyRowOrSelectedRowOfMatrix:(id)arg1 inColumn:(long long)arg2;
- (long long)_selectedOrFirstValidRowInColumn:(long long)arg1;
- (long long)_firstSelectableRowInMatrix:(id)arg1 inColumn:(long long)arg2;
- (void)_bumpSelectedItem:(id)arg1;
- (BOOL)_selectItemBestMatching:(id)arg1;
- (BOOL)_getMatchingRow:(long long *)arg1 forString:(id)arg2 inMatrix:(id)arg3 startingAtRow:(long long)arg4 prefixMatch:(BOOL)arg5 caseSensitive:(BOOL)arg6;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (void)_drawTitlesForView:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_drawEmptyColumnsForView:(id)arg1 inRect:(struct CGRect)arg2;
- (void)_slowPathDrawEmptyColumnsForView:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_imageForEmptyColumnOfSize:(struct CGSize)arg1;
- (void)_fastPathDrawEmptyColumnsForView:(id)arg1 inRect:(struct CGRect)arg2;
- (id)_imageForEmptyVerticalScroller;
- (BOOL)_drawRectIfEmptyWhenSubviewsCoverDirtyRect:(struct CGRect)arg1;
- (struct CGRect)_focusRingRect;
- (void)updateCellInside:(id)arg1;
- (void)updateCell:(id)arg1;
- (void)tile;
- (void)_tileContinuousScrollingBrowser;
- (unsigned long long)_borderType;
- (void)setBorderType:(unsigned long long)arg1;
- (void)_setBorderType:(unsigned long long)arg1;
- (void)_setLineBorderColor:(id)arg1;
- (void)_scrollViewForColumnsDidTrackHorizontalScroller:(id)arg1;
- (BOOL)_forceSynchronizedScrollingAnimation;
- (void)_scrollViewForColumnsWillTrackHorizontalScroller:(id)arg1;
- (void)_scrollViewForColumnsDocumentViewVisibilityChange:(id)arg1;
- (void)_scrollViewForColumnsDocumentViewFrameDidChange:(id)arg1;
- (void)_synchronizeTitlesAndColumnsViewWidth;
- (void)_synchronizeTitlesAndColumnsViewVisibleRect;
- (void)_postDidScrollNotification;
- (void)_postWillScrollNotification;
- (void)_sizeDocumentViewToColumnsAndAlignIfNecessary:(BOOL)arg1;
- (void)_sizeDocumentViewToColumnsAndAlign;
- (void)_sizeDocumentViewToColumns;
- (void)_calcNumVisibleColumnsAndColumnSize;
- (double)titleHeight;
- (void)drawTitleOfColumn:(long long)arg1 inRect:(struct CGRect)arg2;
- (struct CGRect)_containerRelativeFrameOfInsideOfColumn:(long long)arg1;
- (struct CGRect)_containerRelativeFrameOfColumn:(long long)arg1;
- (struct CGRect)_containerRelativeTitleFrameOfColumn:(long long)arg1;
- (struct CGRect)titleFrameOfColumn:(long long)arg1;
- (BOOL)getRow:(long long *)arg1 column:(long long *)arg2 forPoint:(struct CGPoint)arg3;
- (struct CGRect)frameOfRow:(long long)arg1 inColumn:(long long)arg2;
- (struct CGRect)frameOfInsideOfColumn:(long long)arg1;
- (struct CGRect)frameOfColumn:(long long)arg1;
- (id)_containerViewOfColumns;
- (id)_containerViewOfTitles;
- (id)_columnControllerInColumn:(long long)arg1;
- (id)matrixInColumn:(long long)arg1;
- (id)_viewInColumn:(long long)arg1;
- (long long)columnOfMatrix:(id)arg1;
- (long long)_columnOfView:(id)arg1;
- (BOOL)isLoaded;
- (id)selectedCells;
- (id)selectedCellInColumn:(long long)arg1;
- (id)_selectedCellsInColumn:(long long)arg1;
- (id)selectedCell;
- (long long)selectedColumn;
- (long long)clickedRow;
- (long long)clickedColumn;
- (void)_setClickedColumn:(long long)arg1 clickedRow:(long long)arg2;
- (long long)lastColumn;
- (long long)lastVisibleColumn;
- (long long)firstVisibleColumn;
- (long long)maxVisibleColumns;
- (void)setMaxVisibleColumns:(long long)arg1;
- (double)minColumnWidth;
- (void)setMinColumnWidth:(double)arg1;
- (void)_setWantsRevealovers:(BOOL)arg1;
- (BOOL)_shouldShowCellExpansionForRow:(long long)arg1 column:(long long)arg2;
- (void)addColumn;
- (id)_rootItem;
- (id)_visitedColumnContentWidths;
- (void)_setScrollViewForColumns:(id)arg1;
- (id)_scrollViewForColumns;
- (BOOL)_addingOrAnimatingNewColumn;
- (void)_setInitialColumnContentSizeOfColumn:(id)arg1;
- (void)_animateLastAddedColumnToVisible;
- (void)_addColumnSubviewAndAnimateIfNecessary:(id)arg1;
- (void)_addColumnWithoutChangingVisibleColumn;
- (BOOL)_userClickOrKeyInColumnShouldMaintainColumnPosition;
- (BOOL)_shouldAnimateColumnScrolling;
- (void)_setShouldAnimateColumnScrolling:(BOOL)arg1;
- (void)_enableColumnAnimation;
- (void)_disableColumnAnimation;
- (void)_addAnimatedColumn;
- (void)_scrollLastColumnMaxXEdgeToVisible;
- (void)_computeAndAlignFirstClosestVisibleColumn;
- (void)_setVisibleRectOfColumns:(struct CGRect)arg1;
- (struct CGRect)_visibleRectOfColumns;
- (void)_postColumnConfigurationDidChangeNotification;
- (void)_doPostColumnConfigurationDidChangeNotification:(id)arg1;
- (void)didFinishColumnScrollWithHelper:(id)arg1;
- (void)_alignFirstVisibleColumnToDocumentViewEdge:(BOOL)arg1;
- (void)_computeFirstMostlyVisibleColumn;
- (void)_computeFirstCompletelyVisibleColumn;
- (void)_computeFirstVisibleColumnRequireCompletelyVisible:(BOOL)arg1;
- (void)_ensureValidSelection;
- (void)setLastColumn:(long long)arg1;
- (void)_didChangeLastColumn:(long long)arg1 toColumn:(long long)arg2;
- (void)scrollRowToVisible:(long long)arg1 inColumn:(long long)arg2;
- (void)_scrollOptimizingLastColumnPlacement;
- (void)scrollColumnToVisible:(long long)arg1;
- (void)_scrollRectToVisible:(struct CGRect)arg1;
- (BOOL)_shouldScrollStartOfColumnToVisible;
- (BOOL)_useSnowLeopardBehavior;
- (void)_scrollFirstVisibleColumnIntoView;
- (void)_scrollColumnToVisible:(long long)arg1 private:(BOOL)arg2;
- (void)scrollColumnsLeftBy:(long long)arg1;
- (void)scrollColumnsRightBy:(long long)arg1;
- (void)_scrollColumnsRightBy:(long long)arg1;
- (void)setNextKeyView:(id)arg1;
- (id)_recursiveSetDefaultKeyViewLoop;
- (id)_createColumn:(struct CGRect)arg1 empty:(BOOL)arg2;
- (void)_setScrollerSize:(unsigned long long)arg1;
- (void)_syncScrollerSizeOfColumn:(id)arg1;
- (unsigned long long)_controlSizeForScrollers;
- (void)_fixKeyViewForView:(id)arg1;
- (void)_reattachColumnSubviews:(id)arg1;
- (id)_unhookColumnSubviews;
- (void)reloadColumn:(long long)arg1;
- (void)_matrixBasedReloadColumn:(long long)arg1;
- (void)_itemBasedReloadColumn:(long long)arg1;
- (id)_newSelectionIndexesFromOldSelectedItems:(id)arg1 parentItem:(id)arg2;
- (void)displayAllColumns;
- (void)displayColumn:(long long)arg1;
- (void)_setNeedsDisplayInColumn:(long long)arg1;
- (void)validateVisibleColumns;
- (BOOL)takesTitleFromPreviousColumn;
- (void)setTakesTitleFromPreviousColumn:(BOOL)arg1;
- (id)path;
- (id)pathToColumn:(long long)arg1;
- (BOOL)setPath:(id)arg1;
- (id)pathSeparator;
- (void)setPathSeparator:(id)arg1;
- (void)setSelectionIndexPaths:(id)arg1;
- (id)selectionIndexPaths;
- (void)setSelectionIndexPath:(id)arg1;
- (id)selectionIndexPath;
- (long long)selectedRowInColumn:(long long)arg1;
- (void)selectRow:(long long)arg1 inColumn:(long long)arg2;
- (void)selectRowIndexes:(id)arg1 inColumn:(long long)arg2;
- (id)selectedRowIndexesInColumn:(long long)arg1;
- (void)_selectRowIndexes:(id)arg1 inColumn:(long long)arg2;
- (BOOL)_selectCell:(id)arg1 inColumn:(long long)arg2;
- (void)loadColumnZero;
- (BOOL)_shouldMaintainFirstResponder;
- (void)_windowChangedKeyState;
- (void)_viewWillResignFirstResponder:(id)arg1;
- (void)beforeDraw;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
- (void)_setFocusRingNeedsDisplay;
- (BOOL)_hasKeyboardFocus;
- (BOOL)_shouldDrawFocus;
- (void)_setUsesSmallTitleFont:(BOOL)arg1;
- (void)setTitle:(id)arg1 ofColumn:(long long)arg2;
- (void)_setTitle:(id)arg1 ofColumn:(long long)arg2;
- (id)titleOfColumn:(long long)arg1;
- (id)_titleCellOfColumn:(long long)arg1;
- (void)setTitled:(BOOL)arg1;
- (BOOL)isTitled;
- (BOOL)_shouldClipViewForTitlesCopyOnScroll;
- (void)_updateNumberOfTitleCellsIfNecessary;
- (void)_updateNumberOfTitleCellsIfNecessary:(long long)arg1;
- (id)loadedCellAtRow:(long long)arg1 column:(long long)arg2;
- (id)_loadedCellAtRow:(long long)arg1 column:(long long)arg2 inMatrix:(id)arg3;
- (id)_typeSelectString;
- (BOOL)_isTypeSelectRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_delegateDoesNotCreateRowsInMatrix;
- (BOOL)_delegateRespondsToWillDisplayCell;
- (BOOL)_delegateRespondsToSelectCellsByRow;
- (void)_sendDelegateCreateRowsForColumn:(long long)arg1 inMatrix:(id)arg2;
- (void)_sendDelegateWillDisplayCell:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (id)_loadCell:(id)arg1 atRow:(long long)arg2 col:(long long)arg3 inMatrix:(id)arg4;
- (BOOL)_sendDelegateSelectRow:(long long)arg1 inColumn:(long long)arg2;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)reloadDataForRowIndexes:(id)arg1 inColumn:(long long)arg2;
- (void)_reloadRow:(long long)arg1 column:(long long)arg2;
- (BOOL)_findRow:(long long *)arg1 column:(long long *)arg2 forItem:(id)arg3;
- (id)_gdbColumnControllers;
- (id)_lastNonLeafColumnController;
- (BOOL)isLeafItem:(id)arg1;
- (BOOL)_isExpandableRow:(long long)arg1 withParentItem:(id)arg2;
- (BOOL)_isExpandableItem:(id)arg1;
- (BOOL)_isLeafRow:(long long)arg1 withParentItem:(id)arg2;
- (id)parentForItem:(id)arg1;
- (id)indexPathForColumn:(long long)arg1;
- (id)indexPathForItem:(id)arg1;
- (long long)_indexOfItem:(id)arg1 inColumn:(long long)arg2;
- (long long)_indexOfItem:(id)arg1 inParent:(id)arg2;
- (id)_child:(long long)arg1 ofItem:(id)arg2;
- (long long)_numberOfChildrenOfItem:(id)arg1;
- (id)itemAtRow:(long long)arg1 inColumn:(long long)arg2;
- (id)itemAtRow:(long long)arg1 column:(long long)arg2;
- (id)_itemAtRow:(long long)arg1 parentItem:(id)arg2;
- (id)parentForItemsInColumn:(long long)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)_setShouldForwardTypeSelectionToNextColumn:(BOOL)arg1;
- (BOOL)_shouldForwardTypeSelectionToNextColumn;
- (BOOL)abortEditing;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)sendsActionOnArrowKeys;
- (void)setSendsActionOnArrowKeys:(BOOL)arg1;
- (void)_setAcceptsFirstMouse:(BOOL)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)acceptsArrowKeys;
- (void)setAcceptsArrowKeys:(BOOL)arg1;
- (BOOL)separatesColumns;
- (void)setSeparatesColumns:(BOOL)arg1;
- (BOOL)autohidesScroller;
- (void)setAutohidesScroller:(BOOL)arg1;
- (BOOL)hasHorizontalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (id)_horizontalScroller;
- (void)_setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)reusesColumns;
- (void)setReusesColumns:(BOOL)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (void)setAllowsTypeSelect:(BOOL)arg1;
- (BOOL)allowsTypeSelect;
- (BOOL)allowsIncrementalSearching;
- (void)setAllowsIncrementalSearching:(BOOL)arg1;
- (BOOL)allowsEmptySelection;
- (void)setAllowsEmptySelection:(BOOL)arg1;
- (BOOL)allowsBranchSelection;
- (void)setAllowsBranchSelection:(BOOL)arg1;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setCellClass:(Class)arg1;
- (void)setCellPrototype:(id)arg1;
- (id)cellPrototype;
- (Class)matrixClass;
- (void)setMenu:(id)arg1;
- (void)setMatrixClass:(Class)arg1;
- (void)setDoubleAction:(SEL)arg1;
- (SEL)doubleAction;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)setAction:(SEL)arg1;
- (SEL)action;
- (BOOL)isOpaque;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)scrollViaScroller:(id)arg1;
- (BOOL)_scrollColumnsForScrollerIncrementOrDecrementUsingPart:(long long)arg1;
- (void)_scrollColumnToVisible:(long long)arg1 requireCompletelyVisible:(BOOL)arg2;
- (void)updateScroller;
- (void)_doTiming;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (void)_setFirstColumnTitle:(id)arg1;
- (void)_setNumVisibleColumns:(long long)arg1;
- (long long)numberOfVisibleColumns;
- (id)_browserIBMetrics;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsColumnsAttributeSettable;
- (id)accessibilityColumnsAttribute;
- (BOOL)accessibilityIsColumnTitlesAttributeSettable;
- (id)accessibilityColumnTitlesAttribute;
- (BOOL)accessibilityIsHorizontalScrollBarAttributeSettable;
- (id)accessibilityHorizontalScrollBarAttribute;
- (BOOL)accessibilityIsVisibleColumnsAttributeSettable;
- (id)accessibilityVisibleColumnsAttribute;
- (id)accessibilityRoleAttribute;
- (id)accessibilityAttributeNames;
- (id)ns_widgetType;

@end

