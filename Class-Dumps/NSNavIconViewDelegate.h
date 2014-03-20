//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSNavFileListDelegate.h>

#import "NSIconViewDelegate.h"

@class NSArray, NSIconView, NSNavNode;

@interface NSNavIconViewDelegate : NSNavFileListDelegate <NSIconViewDelegate>
{
    NSIconView *_iconView;
    NSNavNode *_currentDirectoryNode;
    NSArray *_previouslyHighlightedNodes;
}

- (id)view;
- (id)transitionImageForNavNode:(id)arg1;
- (struct CGRect)sourceFrameOnScreenForNavNode:(id)arg1;
- (BOOL)lightweightHandleChildChanged:(id)arg1 parent:(id)arg2 property:(id)arg3;
- (BOOL)_reloadChildNode:(id)arg1;
- (void)_iconViewDoubleAction:(id)arg1;
- (void)_iconViewAction:(id)arg1;
- (id)selectedNodes;
- (id)selectedNodesIncludingDirectories;
- (id)_selectedNodesWithEntireSelection:(BOOL)arg1;
- (id)showNode:(id)arg1 inDirectory:(id)arg2 selectIfEnabled:(BOOL)arg3;
- (void)setCurrentBrowsingNodePath:(id)arg1;
- (void)setCurrentDirectoryNode:(id)arg1;
- (void)_setCurrentDirectoryNode:(id)arg1;
- (id)_cachedChildrenForNode:(id)arg1 allowInteraction:(BOOL)arg2;
- (id)currentDirectoryNode;
- (id)visualRootNode;
- (void)reloadDisplayState;
- (void)reloadChildrenForNode:(id)arg1;
- (void)_sendSelectionChangedNotification;
- (void)prepareForReloadChildrenForNode:(id)arg1;
- (void)loadAndRestoreCurrentBrowsingNodePath:(id)arg1 selectedNodes:(id)arg2;
- (BOOL)iconView:(id)arg1 writeIndexes:(id)arg2 toPasteboard:(id)arg3;
- (void)iconView:(id)arg1 didClickOnDisabledCell:(id)arg2;
- (BOOL)iconView:(id)arg1 performKeyEquivalent:(id)arg2;
- (id)currentTypeSelectSearchString;
- (BOOL)iconView:(id)arg1 shouldTypeSelectForEvent:(id)arg2 withCurrentSearchString:(id)arg3;
- (long long)iconView:(id)arg1 nextTypeSelectMatchFromIndex:(long long)arg2 toIndex:(long long)arg3 forString:(id)arg4;
- (id)iconView:(id)arg1 selectionIndexesForProposedSelection:(id)arg2;
- (void)iconView:(id)arg1 loadCell:(id)arg2 forIndex:(long long)arg3;
- (long long)numberOfItemsInIconView:(id)arg1;
- (void)configureForAllowsMultipleSelection:(BOOL)arg1;
- (void)configureForCanChooseFiles:(BOOL)arg1;
- (void)configureForCanChooseDirectories:(BOOL)arg1;
- (void)_deselectAnySelectedDirectories;
- (void)configureForInactiveState;
- (void)configureForActiveState;
- (void)setIconView:(id)arg1;
- (id)iconView;
- (void)dealloc;

@end

