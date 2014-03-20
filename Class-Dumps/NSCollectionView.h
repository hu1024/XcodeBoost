//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSDraggingDestination.h"
#import "NSDraggingSource.h"

@class NSArray, NSCollectionViewItem, NSIndexSet, NSMutableArray, NSMutableIndexSet, NSNib;

@interface NSCollectionView : NSView <NSDraggingSource, NSDraggingDestination>
{
    NSArray *_content;
    NSMutableIndexSet *_selectionIndexes;
    NSCollectionViewItem *_itemPrototype;
    struct CGSize _minItemSize;
    struct CGSize _maxItemSize;
    unsigned long long _maxGridRows;
    unsigned long long _maxGridColumns;
    NSArray *_backgroundColors;
    NSMutableArray *_displayedItems;
    double _animationDuration;
    struct {
        unsigned int isFirstResponder:1;
        unsigned int invalidateItemViews:1;
        unsigned int selectable:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int avoidsEmptySelection:1;
        unsigned int superviewIsClipView:1;
        unsigned int needsUpdateGrid:1;
        unsigned int needsUpdateBackground:1;
        unsigned int gridSettingsNeedUpdate:1;
        unsigned int guardSetFrameSize:1;
        unsigned int canDisplayItems:1;
        unsigned int animateForDrag:1;
        unsigned int unarchiving:1;
        unsigned int observingScroll:1;
        unsigned int reserved:18;
    } _cvFlags;
    id _delegate;
    NSMutableArray *_backgroundLayers;
    struct CGSize _storedFrameSize;
    NSNib *_cachedNib;
    char *_animTimerCancel;
    NSArray *_removedItems;
    NSArray *_addedItems;
    NSIndexSet *_addedItemIndexes;
    char *_resizeTimerCancel;
    NSIndexSet *_draggedIndexes;
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    long long _currentDropIndex;
    long long _currentDropSpaceIndex;
    long long _shiftRow;
    unsigned long long _currentDragOperation;
    long long _currentDropOperation;
    id _draggingInfo;
    char *_dragTimerCancel;
    id _private;
    void *_reserved[13];
}

+ (unsigned long long)defaultFocusRingType;
- (void)_scrollSelectionToVisible;
- (void)_scrollToVisibleItemAtIndex:(unsigned long long)arg1;
- (void)moveWordLeftAndModifySelection:(id)arg1;
- (void)moveWordRightAndModifySelection:(id)arg1;
- (void)moveToEndOfParagraph:(id)arg1;
- (void)moveToBeginningOfParagraph:(id)arg1;
- (void)moveWordLeft:(id)arg1;
- (void)moveWordRight:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (unsigned long long)_indexForMoveDown;
- (unsigned long long)_indexForMoveUp;
- (unsigned long long)_indexForMoveLeft;
- (unsigned long long)_indexForMoveRight;
- (unsigned long long)_indexForIncrementMove:(unsigned long long)arg1;
- (unsigned long long)_indexForDecrementMove:(unsigned long long)arg1;
- (void)selectAll:(id)arg1;
- (void)_selectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 scrollIndexToVisible:(unsigned long long)arg3;
- (void)_selectIndex:(unsigned long long)arg1 scrollToVisible:(BOOL)arg2;
- (void)_selectObjectsAtIndexes:(id)arg1 avoidsEmptySelection:(BOOL)arg2;
- (void)_selectionStateChanged:(id)arg1;
- (void)_applySelectionIndexes:(id)arg1 toItems:(id)arg2;
- (void)_setBackgroundNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setLayer:(id)arg1;
- (void)_createLayerAndInitialize;
- (void)_setBackgroundNeedsDisplay;
- (BOOL)_needsLayerBackgrounds;
- (void)_updateBackgroundLayers;
- (void)_removeBackgroundLayers;
- (long long)_createGridBackgroundInRect:(struct CGRect)arg1 withSelector:(SEL)arg2;
- (void)_createBackgroundLayerWithProperties:(id)arg1;
- (void)_drawBackgroundGridWithProperties:(id)arg1;
- (struct _NSRange)_contiguousRangeOfItemsForRect:(struct CGRect)arg1;
- (void)_scheduleEndOfAnimationTimer:(double)arg1;
- (void)_displayItems:(id)arg1 withConfiguration:(CDStruct_22276b4c)arg2 animate:(BOOL)arg3;
- (void)_stopObservingViewDidScroll;
- (void)_startObservingViewDidScroll;
- (void)_scrollViewDidChangeBounds:(id)arg1;
- (void)viewWillDraw;
- (void)_ensureVisibleItemsLoaded;
- (void)_addItemViewAsSubview:(id)arg1;
- (void)awakeFromNib;
- (BOOL)_animationFromStartRect:(struct CGRect)arg1 crossesVisibleRectToEndRect:(struct CGRect)arg2;
- (BOOL)_itemIsVisibleAtIndex:(unsigned long long)arg1;
- (struct CGRect)_frameForItemAtIndex:(unsigned long long)arg1 withConfiguration:(CDStruct_22276b4c)arg2 ignoreDropSpace:(BOOL)arg3;
- (id)_getItemsToDisplay;
- (void)_registerNeedsUpdateGrid;
- (void)_updateGridWithCurrentItemsIfNecessary;
- (void)_updateGridWithCurrentItems;
- (BOOL)_configurationIsColumnMajorOrder:(CDStruct_22276b4c)arg1;
- (unsigned long long)_itemIndexAtPoint:(struct CGPoint)arg1;
- (void)_updateGridSettingsWithPrototype;
- (BOOL)_filledViewShouldExtendVertically;
- (CDStruct_22276b4c)_computeGridConfigurationWithSize:(struct CGSize)arg1;
- (CDStruct_22276b4c)_computeGridConfigurationWithSize:(struct CGSize)arg1 count:(unsigned long long)arg2;
- (CDStruct_22276b4c)_computeGridConfiguration;
- (CDStruct_22276b4c)_computeGridConfigurationWithCount:(unsigned long long)arg1;
- (CDStruct_22276b4c)_currentGridConfiguration;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (void)_updateDragAndDropStateWithDraggingInfo:(id)arg1 newDragOperation:(unsigned long long)arg2 newDropIndex:(long long)arg3 newDropOperation:(long long)arg4;
- (long long)_computeRowToShiftWithDropSpaceIndex:(long long)arg1 draggingInfo:(id)arg2;
- (unsigned long long)_validateDragWithInfo:(id)arg1 dropIndex:(long long *)arg2 dropOperation:(long long *)arg3;
- (long long)_dropIndexForDraggingInfo:(id)arg1 proposedDropOperation:(long long *)arg2;
- (BOOL)wantsPeriodicDraggingUpdates;
- (BOOL)ignoreModifierKeysForDraggingSession:(id)arg1;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (void)draggingSession:(id)arg1 willBeginAtPoint:(struct CGPoint)arg2;
- (id)draggingImageForItemsAtIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (void)_startDragWithItemsAtIndexes:(id)arg1 event:(id)arg2 pasteboard:(id)arg3;
- (id)_draggingImageForItemsAtIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (BOOL)_writeItemsAtIndexes:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)_canDragItemsAtIndexes:(id)arg1 withEvent:(id)arg2;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (id)draggingSession:(id)arg1 namesOfPromisedFilesDroppedAtDestination:(id)arg2;
- (id)namesOfPromisedFilesDroppedAtDestination:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)_indexesToSelectForEvent:(id)arg1 initialSelectionIndexes:(id)arg2 startingPoint:(struct CGPoint)arg3 commandKey:(BOOL)arg4 shiftKey:(BOOL)arg5 rubberband:(id)arg6;
- (struct CGPoint)_pointWithinBounds:(struct CGPoint)arg1;
- (void)_setFocusRingNeedsDisplayIfNecessary;
- (void)_drawScrollViewFocusRing:(id)arg1 clipRect:(struct CGRect)arg2 needsFullDisplay:(BOOL)arg3;
- (void)_drawFocusRingAroundRect:(struct CGRect)arg1;
- (BOOL)_willDrawFocusRingAroundEnclosingScrollView;
- (BOOL)_showingFocusRingAroundEnclosingScrollView:(id)arg1;
- (BOOL)_shouldDrawFocus;
- (void)insertBacktab:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_unregisterFirstResponderObservance;
- (void)_registerFirstResponderObservance;
- (void)discardEditing;
- (BOOL)isFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (BOOL)_shouldResizeSubviewsImmediately;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_updateFrame:(id)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)_windowChangedKeyState;
- (id)_recursiveFindDefaultButtonCell;
- (void)viewDidEndLiveResize;
- (void)viewWillStartLiveResize;
- (void)_storeCurrentFrameSize;
- (BOOL)needsPanelToBecomeKey;
- (void)drawBackgroundOverhangInRect:(struct CGRect)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)_drawBackgroundForRect:(struct CGRect)arg1;
- (BOOL)_drawsNothing;
- (void)_doSuperSetFrameSize:(struct CGSize)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)_shouldCopyConnections;
- (void)_finishedMakingConnections;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (id)_cachedNibWithName:(id)arg1 bundle:(id)arg2;
- (double)_animationDuration;
- (void)_setAnimationDuration:(double)arg1;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForItemAtIndex:(unsigned long long)arg1 withNumberOfItems:(unsigned long long)arg2;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)newItemForRepresentedObject:(id)arg1;
- (id)backgroundColors;
- (void)setBackgroundColors:(id)arg1;
- (id)selectionIndexes;
- (void)setSelectionIndexes:(id)arg1;
- (BOOL)avoidsEmptySelection;
- (void)setAvoidsEmptySelection:(BOOL)arg1;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (BOOL)isSelectable;
- (void)setSelectable:(BOOL)arg1;
- (unsigned long long)maxNumberOfColumns;
- (void)setMaxNumberOfColumns:(unsigned long long)arg1;
- (unsigned long long)maxNumberOfRows;
- (void)setMaxNumberOfRows:(unsigned long long)arg1;
- (struct CGSize)maxItemSize;
- (void)setMaxItemSize:(struct CGSize)arg1;
- (struct CGSize)minItemSize;
- (void)setMinItemSize:(struct CGSize)arg1;
- (id)itemPrototype;
- (void)setItemPrototype:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsVisibleChildrenAttributeSettable;
- (id)accessibilityVisibleChildrenAttribute;
- (void)accessibilitySetSelectedChildrenAttribute:(id)arg1;
- (BOOL)accessibilityIsSelectedChildrenAttributeSettable;
- (id)accessibilitySelectedChildrenAttribute;
- (unsigned long long)accessibilityIndexOfChild:(id)arg1;
- (BOOL)accessibilityIsOrderedByRowAttributeSettable;
- (id)accessibilityOrderedByRowAttribute;
- (BOOL)accessibilityIsOrientationAttributeSettable;
- (id)accessibilityOrientationAttribute;
- (unsigned long long)accessibilityIsColumnCountAttributeSettable;
- (id)accessibilityColumnCountAttribute;
- (unsigned long long)accessibilityIsRowCountAttributeSettable;
- (id)accessibilityRowCountAttribute;
- (id)accessibilityChildrenAttribute;
- (id)_accessibilityChildrenAtIndexes:(id)arg1;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (unsigned long long)_accessibilityNumberOfChildren;
- (BOOL)accessibilityIsEnabledAttributeSettable;
- (id)accessibilityEnabledAttribute;
- (id)accessibilityRoleAttribute;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityAttributeNames;

@end

