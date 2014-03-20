//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

#import "NSNavFileBrowser.h"
#import "NSPathControlDelegate.h"
#import "NSTextFieldDelegate.h"

@class ILMediaBrowserView, NSArray, NSBrowser, NSControl, NSIconView, NSMenu, NSNavAdvancedSearchController, NSNavBannerView, NSNavDataSource, NSNavFilepathInputController, NSNavNewFolderController, NSNavNode, NSNavNodePopUpButton, NSNavScopeView, NSNavSharedServerController, NSNavSidebarController, NSNavSplitViewController, NSNavViewController, NSNavVirtualNode, NSOutlineView, NSPathControl, NSProgressIndicator, NSRuleEditor, NSSavePanel, NSSearchField, NSSegmentedCell, NSSegmentedControl, NSString, NSTextField, NSURL;

@interface NSNavView : NSView <NSPathControlDelegate, NSTextFieldDelegate, NSNavFileBrowser>
{
    NSNavDataSource *_dataSource;
    NSSavePanel *_savePanel;
    NSView *_fileListViewContainer;
    NSBrowser *_browser;
    NSOutlineView *_outline;
    NSIconView *_iconView;
    NSOutlineView *_sidebarOutlineView;
    NSNavSidebarController *_sidebarController;
    NSSegmentedControl *_fileListModeControl;
    NSControl *_historyControl;
    NSNavNodePopUpButton *_pathComponentPicker;
    NSNavSplitViewController *_splitViewController;
    NSMenu *_iconViewMenu;
    NSSearchField *_searchField;
    NSTextField *_searchResultsCountField;
    NSProgressIndicator *_searchProgressIndicator;
    NSNavScopeView *_searchScopeView;
    NSPathControl *_pathLocationControl;
    NSRuleEditor *_sliceRuleEditor;
    NSView *_currentModeView;
    NSNavAdvancedSearchController *_advSearchController;
    NSSegmentedCell *_unused;
    NSNavVirtualNode *_mediaBrowserNode;
    ILMediaBrowserView *_mediaBrowserView;
    unsigned int _isSaveMode:1;
    unsigned int _sidebarLoaded:1;
    unsigned int _userChangedDirectory:1;
    unsigned int _inConfigureForDirectory:1;
    unsigned int _resolvingNodeFromPath:1;
    unsigned int _restoredSavedSettings:1;
    unsigned int _showingSearchParts:1;
    unsigned int _fileListModeControlSetup:1;
    unsigned int _reserved:24;
    NSNavViewController *_navViewController;
    NSNavSharedServerController *_sharedServerBannerController;
    NSNavBannerView *_sharedFolderBannerView;
    NSNavNode *_sharedFolderNode;
    NSString *_filenameToSelectWhenDoneResolving;
    id <NSNavFileBrowserDelegate> _delegate;
    NSNavNewFolderController *_newFolderController;
    NSNavFilepathInputController *_filepathInputController;
    unsigned long long _mediaBrowserShownTypes;
}

+ (id)navView;
@property(readonly, nonatomic) NSNavVirtualNode *mediaBrowserNode; // @synthesize mediaBrowserNode=_mediaBrowserNode;
@property(readonly, nonatomic) NSIconView *iconView; // @synthesize iconView=_iconView;
@property(readonly, nonatomic) NSOutlineView *outlineView; // @synthesize outlineView=_outline;
@property(readonly, nonatomic) NSBrowser *browser; // @synthesize browser=_browser;
- (void)selectFirstKeyView;
- (void)disableHistoryAndDoWork:(CDUnknownBlockType)arg1;
- (void)gotoSheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)_handleGotoFinishedWithResult:(long long)arg1;
- (BOOL)showGotoWithInitialFilename:(id)arg1;
- (id)selectedSeamlessOpenerPreviewItems;
- (id)documentsDirectoryURL;
@property BOOL hidesSharedSection;
- (BOOL)canCreateNewFolder;
- (void)makeNewFolderForSavePanel:(id)arg1;
- (id)_runCreateNewFolderDialog:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)_canShowGoto;
- (BOOL)sidebarContainsURL:(id)arg1;
- (void)refreshContents;
@property(copy) NSArray *selectedURLs; // @dynamic selectedURLs;
@property(retain) NSURL *rootDirectoryURL; // @dynamic rootDirectoryURL;
@property(retain) NSURL *directoryURL; // @dynamic directoryURL;
- (BOOL)_logonOK;
@property id <NSNavFileBrowserDelegate> delegate; // @dynamic delegate;
- (BOOL)showAsPackageForURL:(id)arg1;
- (id)querySearchUTIs;
- (BOOL)canChooseURL:(id)arg1;
- (BOOL)shouldEnableURL:(id)arg1;
- (void)_setUserHasChangedDirectory:(BOOL)arg1;
- (BOOL)_canAsyncChangeRootNode;
- (BOOL)previewPanel:(id)arg1 shouldShowOpenButtonForItem:(id)arg2;
- (BOOL)previewPanel:(id)arg1 shouldOpenURL:(id)arg2 forPreviewItem:(id)arg3;
- (BOOL)previewPanel:(id)arg1 handleEvent:(id)arg2;
- (id)previewPanel:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)previewPanel:(id)arg1 sourceFrameOnScreenForPreviewItem:(id)arg2;
- (id)previewPanel:(id)arg1 previewItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPreviewItemsInPreviewPanel:(id)arg1;
- (id)selectedPreviewNodes;
- (BOOL)showOrHidePreviewPanel;
- (BOOL)hidePreviewPanelIfNecessary;
- (BOOL)_updatePreviewPanelIfRequired;
- (Class)_QLPreviewPanelClass;
- (void)endPreviewPanelControl:(id)arg1;
- (void)beginPreviewPanelControl:(id)arg1;
- (BOOL)acceptsPreviewPanelControl:(id)arg1;
- (BOOL)isEnabledNode:(id)arg1;
- (void)reloadDisplayState;
- (BOOL)worksWhenModal;
- (void)_pathLocationControlDoubleClick:(id)arg1;
- (void)_changeIconViewTextPosition:(id)arg1;
- (void)_changeIconViewIconSize:(id)arg1;
- (void)_changeIconViewTextSize:(id)arg1;
- (void)_saveIconViewImagePosition:(long long)arg1;
- (void)_saveIconViewTextSize:(double)arg1;
- (void)_saveIconViewSize:(double)arg1;
- (void)_loadSavedLayout;
- (BOOL)_saveMode;
- (void)menuNeedsUpdate:(id)arg1;
- (void)_updateMenuItem:(id)arg1;
- (BOOL)searchField:(id)arg1 shouldChangeCancelButtonVisibility:(BOOL)arg2;
- (void)_searchFieldAction:(id)arg1;
- (void)_searchFieldCancelAction:(id)arg1;
- (void)_openSyncPropertyChanged:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_startObservingRootNode:(id)arg1;
- (void)_stopObservingRootNode:(id)arg1;
- (void)_hideQueryProgress;
- (void)_showQueryProgress;
@property BOOL allowsExpandingMultipleDirectories; // @dynamic allowsExpandingMultipleDirectories;
- (void)setCalculatesAllSizes:(BOOL)arg1;
- (BOOL)calculatesAllSizes;
- (void)setTreatsDirectoryAliasesAsDirectories:(BOOL)arg1;
- (BOOL)treatsDirectoryAliasesAsDirectories;
@property BOOL canClickDisabledFiles; // @dynamic canClickDisabledFiles;
@property BOOL treatsFilePackagesAsDirectories; // @dynamic treatsFilePackagesAsDirectories;
@property BOOL allowsMultipleSelection;
@property BOOL showsHiddenFiles; // @dynamic showsHiddenFiles;
@property BOOL resolvesAliases; // @dynamic resolvesAliases;
- (void)setIsFileListOrderedCaseSensitive:(BOOL)arg1;
- (BOOL)isFileListOrderedCaseSensitive;
- (void)setIsFileListOrderedAscending:(BOOL)arg1;
- (BOOL)isFileListOrderedAscending;
- (void)setFileListOrderedByFileProperty:(id)arg1;
- (id)fileListOrderedByFileProperty;
@property int fileListMode; // @dynamic fileListMode;
- (void)_configurePathComponentPicker;
- (id)lazyGetChildrenForNodeWithIdentifier:(id)arg1;
- (id)_recentPlacesNode;
- (void)_directoryPopUpButtonClick:(id)arg1;
- (void)_changeFileListMode:(id)arg1;
- (void)goUpDirectory;
- (BOOL)goBackwardInHistoryIfPossible;
- (BOOL)goForwardInHistoryIfPossible;
- (void)_changeHistory:(id)arg1;
- (void)_handleFauxDisabledNodeClicked:(id)arg1;
- (void)_handleSelectionConfirmed;
- (void)_handleSelectionChanged;
- (void)_updatePathLocationControl;
- (void)_handleFileListModeChanged;
- (void)_handleCurrentBrowsingNodePathChanged;
- (void)handleCurrentDirectoryNodeChanged;
- (void)handleRootChangedFromNode:(id)arg1 toNode:(id)arg2 andNotify:(BOOL)arg3;
- (void)_notifyBothRootAndCurrentDirectoryChanged;
- (void)_notifyCurrentDirectoryChanged;
- (void)_notifyRootChanged;
- (void)_delegateClickedOnDisabledURL:(id)arg1;
- (void)_delegatePerformOpenAction;
- (void)_delegateSelectionDidChange;
- (void)_delegateDidChangeDirectory;
- (void)_delegateFileListModeChanged;
- (void)_commonHandleRootOrCurrentDirectoryChanged;
- (void)_configureSharedServerBannerViewAndTile:(BOOL)arg1;
- (BOOL)_isSharingEnabled;
- (BOOL)canGoIntoSelectedDirectory;
- (BOOL)handleGoIntoSelectedDirectory;
- (void)_changeMediaBrowserTypeTo:(unsigned long long)arg1;
- (void)_handleFileListDidReloadChildrenForNode:(id)arg1;
- (void)_prepareForReloadChildrenForNode:(id)arg1;
- (void)_updateSearchResultsCount:(BOOL)arg1;
- (void)_setSearchResultsCountTo:(int)arg1;
- (void)_configureForShowingInPanel;
- (void)_configureForFileListMode:(int)arg1;
- (void)_configureFileListModeControlForMode:(int)arg1;
- (void)_configureSearching;
- (void)_setPathLocationEmptyTitle:(id)arg1;
- (void)_configureHistoryControl;
- (id)selectedNodesIncludingDirectories;
- (id)selectedNodes;
- (id)currentResolvedDirectoryNode;
- (id)selectedResolvedNodes;
- (void)showNodeInCurrentDirectoryWithDisplayNamePrefix:(id)arg1 selectIfEnabled:(BOOL)arg2;
- (void)showNodeInCurrentDirectoryWithFilename:(id)arg1 selectIfEnabled:(BOOL)arg2;
- (BOOL)_dropNode:(id)arg1;
- (BOOL)setSelectionFromPasteboard:(id)arg1 selectionHelper:(id)arg2;
- (BOOL)setSelectionFromDroppedNode:(id)arg1 selectionHelper:(id)arg2;
@property(retain, nonatomic) NSNavNode *currentDirectoryNode; // @dynamic currentDirectoryNode;
- (id)visualRootNode;
- (void)reloadRootNode;
- (void)setRootPath:(id)arg1;
- (void)performGotoForPath:(id)arg1;
- (void)_delegateConfigureForGotoWithFilename:(id)arg1;
- (void)_setRootNodeAsDocuments;
- (id)_customizedPrefKey:(id)arg1;
- (BOOL)setCurrentDirectoryURL:(id)arg1 logonOK:(BOOL)arg2;
- (BOOL)setCurrentDirectoryPath:(id)arg1 logonOK:(BOOL)arg2;
- (BOOL)setRootPath:(id)arg1 logonOK:(BOOL)arg2;
- (BOOL)setRootURL:(id)arg1 logonOK:(BOOL)arg2;
- (void)_doneResolvingNode:(id)arg1 setAsRoot:(BOOL)arg2;
- (void)_delaySelectFilenameIfNecessary;
- (void)_showNodeWithFilename:(id)arg1 selectIfEnabled:(BOOL)arg2;
@property(retain, nonatomic) NSNavNode *rootNode; // @dynamic rootNode;
- (void)setNavNodeClass:(Class)arg1;
- (Class)navNodeClass;
- (void)setSavePanel:(id)arg1;
- (id)savePanel;
- (id)_dataSource;
- (id)_iconView;
- (void)finalize;
- (void)dealloc;
- (void)loadSidebar;
- (id)sidebarController;
- (void)_positionAndResizeSearchParts;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)tileVertically;
- (BOOL)preservesContentDuringLiveResize;
- (id)_activeFileListViewForResizing;
- (id)_bottomContainerView;
- (id)_topContainerView;
- (BOOL)searchController:(id)arg1 queryShouldSaveWithName:(id)arg2 forAllApps:(BOOL)arg3;
- (id)_duplicateItemReason;
- (void)saveQuery;
- (void)_saveQueryButtonClick:(id)arg1;
- (BOOL)_isAppSmartFolderNode:(id)arg1;
- (id)_queryViewOptions;
- (BOOL)_isAppSmartFolderNameUsed:(id)arg1;
- (void)_saveAppSmartFolderQueryNode:(id)arg1;
- (void)_editQueryButtonClick:(id)arg1;
- (void)_setupRuleEditorForScopeView;
- (void)_slicePlusButtonClick:(id)arg1;
- (void)ruleEditorSizeChangedForSearchController:(id)arg1;
- (void)windowOrderedIn;
- (void)windowOrderedOut;
- (void)queryStringChangedForSearchController:(id)arg1;
- (BOOL)pathControl:(id)arg1 shouldDragPathComponentCell:(id)arg2 withPasteboard:(id)arg3;
- (id)_advancedQueryStringPortion;
- (void)_loadAdvSearchController;
- (void)setSaveMode:(BOOL)arg1;
- (void)configureAndLoadLayout;
- (void)_loadMediaBrowserNodeIfRequired;
- (id)_nodeForBrowserType:(unsigned long long)arg1;
- (id)_templateImageWithName:(id)arg1;
- (void)awakeFromNib;
- (BOOL)shouldShowMediaBrowser;
- (void)setMediaBrowserShownTypes:(unsigned long long)arg1;
@property(readonly, nonatomic) ILMediaBrowserView *mediaBrowserView; // @synthesize mediaBrowserView=_mediaBrowserView;
- (BOOL)_ensureMediaBrowserViewLoaded;
- (id)_mediaBrowserIcon;
- (BOOL)_iLifeMediaBrowserFrameworkInstalled;
- (void)_setupSearchParts;
@property(nonatomic) int lastFileListMode;
- (void)_setupNormalFileListModeControl;
- (void)_setAccessibilityStringsForNormalFileListModeControl;
- (void)_setupHistoryControl;
- (id)_setupSegmentSwitchForControl:(id)arg1 firstImage:(id)arg2 secondImage:(id)arg3 thirdImage:(id)arg4 action:(SEL)arg5 showDropDown:(BOOL)arg6;
- (id)_fileListModeControlCell;
- (id)_historyControlCell;
- (void)clockPreferencesChanged:(id)arg1;
- (id)currentModeView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

