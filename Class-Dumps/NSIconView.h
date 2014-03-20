//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSMatrix.h>

#import "NSAnimationDelegate.h"

@class NSAnimation, NSMutableArray, _NSIconViewDragContext, _NSRubberBand, _NSTypeSelectData;

@interface NSIconView : NSMatrix <NSAnimationDelegate>
{
    struct {
        unsigned int unused:29;
        unsigned int allowsTypeSelect:1;
        unsigned int allowsMultipleSelection:1;
        unsigned int needsLayoutUpdate:1;
    } _flags;
    NSMutableArray *_items;
    long long _itemCount;
    double _iconSize;
    unsigned long long _imagePosition;
    _NSRubberBand *_rubberBand;
    NSAnimation *_animation;
    unsigned long long _draggingSourceOperationMaskForLocal;
    unsigned long long _draggingSourceOperationMaskForNonLocal;
    _NSIconViewDragContext *_dragContext;
    _NSTypeSelectData *_typeSelectData;
    id _extra;
}

- (void)setAllowsTypeSelect:(BOOL)arg1;
- (BOOL)allowsTypeSelect;
- (BOOL)ignoreModifierKeysWhileDragging;
- (void)draggedImage:(id)arg1 endedAt:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (void)draggedImage:(id)arg1 beganAt:(struct CGPoint)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)setDraggingSourceOperationMask:(unsigned long long)arg1 forLocal:(BOOL)arg2;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)_validateDropForDragInfo:(id)arg1;
- (BOOL)_hoverAreaIsSameAsLast:(id)arg1;
- (long long)_determineDropIndexForDragInfo:(id)arg1;
- (void)_setNeedsDisplayForDropIndex:(long long)arg1;
- (void)setDropTargetIndex:(long long)arg1;
- (BOOL)_performDragFromMouseDown:(id)arg1;
- (void)_dragIndexes:(id)arg1 withEvent:(id)arg2 pasteboard:(id)arg3 source:(id)arg4 slideBack:(BOOL)arg5;
- (id)dragImageForIndexes:(id)arg1 withEvent:(id)arg2 offset:(struct CGPoint *)arg3;
- (BOOL)_dragShouldBeginFromMouseDown:(id)arg1;
- (BOOL)_sendDelegateWriteIndexes:(id)arg1 toPasteboard:(id)arg2;
- (BOOL)_delegateRespondsToWriteIndexes;
- (BOOL)allowsMultipleSelection;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)keyDown:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)_handleArrowMovementForChar:(unsigned short)arg1;
- (long long)_findFirstNonSelectedIndexFrom:(long long)arg1 to:(long long)arg2 selectedIndexes:(id)arg3;
- (BOOL)_typeSelectInterpretKeyEvent:(id)arg1;
- (BOOL)_typeSelectUndoLastSearch;
- (void)_typeSelectEndCurrentSearch;
- (BOOL)_performTypeSelect:(id)arg1;
- (long long)_internalNextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (long long)_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (id)_internalTypeSelectStringForIndex:(long long)arg1;
- (id)_typeSelectStringForIndex:(long long)arg1;
- (BOOL)_shouldTypeSelectForEvent:(id)arg1;
- (id)currentTypeSelectSearchString;
- (BOOL)_delegate_shouldTypeSelectForEvent:(id)arg1 withCurrentSearchString:(id)arg2;
- (BOOL)_delegateRespondsTo_shouldTypeSelectForEvent;
- (id)_delegateTypeSelectStringForIndex:(long long)arg1;
- (BOOL)_delegateRespondsTo_typeSelectStringForIndex;
- (long long)_delegate_nextTypeSelectMatchFromIndex:(long long)arg1 toIndex:(long long)arg2 forString:(id)arg3;
- (BOOL)_delegateRespondsTo_nextTypeSelectMatchFromIndex;
- (void)setKeyCell:(id)arg1;
- (void)_setFocusRingNeedsDisplay;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)becomeFirstResponder;
- (BOOL)resignFirstResponder;
- (BOOL)_hasKeyboardFocus;
- (BOOL)acceptsFirstResponder;
- (BOOL)getRow:(long long *)arg1 column:(long long *)arg2 forPoint:(struct CGPoint)arg3;
- (void)setFont:(id)arg1;
- (void)superviewFrameChanged:(id)arg1;
- (BOOL)needsLayout;
- (void)setNeedsLayout;
- (void)rubberBand:(id)arg1 rectangleFrom:(struct CGRect)arg2 to:(struct CGRect)arg3 withEvent:(id)arg4;
- (void)mouseDown:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)_trackMouseForHitCell:(id)arg1 withEvent:(id)arg2;
- (BOOL)_userSetStateOfCellsInSet:(id)arg1 toState:(long long)arg2;
- (BOOL)_flipStateOfCellsInIndexSet:(id)arg1 toState:(long long)arg2;
- (BOOL)_userCanSelectCell:(id)arg1;
- (BOOL)_userCanSelectIndex:(long long)arg1;
- (BOOL)_userCanSelectIndex:(long long)arg1 withNewSelectedIndexes:(id)arg2;
- (void)selectAll:(id)arg1;
- (id)_userSelectionIndexesForProposedSelection:(id)arg1;
- (id)_cellThatHasContentAtPoint:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)cellAtPoint:(struct CGPoint)arg1;
- (long long)cellIndexAtPoint:(struct CGPoint)arg1;
- (id)_firstSelectedCell;
- (id)selectedIndexes;
- (void)setSelectedIndexes:(id)arg1;
- (void)_flipStateForCell:(id)arg1;
- (void)deselectIndex:(long long)arg1;
- (void)deselectCell:(id)arg1;
- (void)_setState:(long long)arg1 ofCell:(id)arg2;
- (struct CGRect)cellFrameForCell:(id)arg1;
- (BOOL)_isCellSelected:(id)arg1;
- (void)_setNeedsDisplayInRow:(long long)arg1 column:(long long)arg2;
- (void)_setNeedsDisplayForIndex:(long long)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (BOOL)preservesContentDuringLiveResize;
- (void)setImagePosition:(unsigned long long)arg1;
- (unsigned long long)imagePosition;
- (void)animation:(id)arg1 didReachProgressMark:(float)arg2;
- (void)animationDidStop:(id)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animateSetIconSize:(double)arg1;
- (void)setIconSize:(double)arg1;
- (double)iconSize;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (id)_dropHighlightEdgeColor;
- (void)updateCell:(id)arg1;
- (void)_createMatrixRowsAndColumns;
- (void)_putCellNoUpdate:(id)arg1 atRow:(long long)arg2 column:(long long)arg3;
- (void)updateCellSize;
- (void)selectCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)selectIndex:(long long)arg1;
- (id)makeCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)drawCellAtRow:(long long)arg1 column:(long long)arg2;
- (void)loadCell:(id)arg1;
- (void)reloadCellAtIndex:(long long)arg1;
- (void)_delegateLoadCell:(id)arg1 forIndex:(long long)arg2;
- (void)scrollCellToVisible:(id)arg1;
- (id)cellAtIndex:(long long)arg1;
- (long long)itemCount;
- (void)_checkLoaded;
- (void)deselectAllCells;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)_getRowRange:(struct _NSRange *)arg1 columnRange:(struct _NSRange *)arg2 inRect:(struct CGRect)arg3;
- (BOOL)getRow:(long long *)arg1 column:(long long *)arg2 ofCell:(id)arg3;
- (void)_performLayoutIfNeeded;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;
- (void)_setDefaultPrototypeCell;

@end

