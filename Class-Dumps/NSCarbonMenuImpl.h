//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMenu, NSMenuItem, NSMutableArray;

@interface NSCarbonMenuImpl : NSObject
{
    NSMenu *_menu;
    void *_initialMenuRef;
    void *_principalMenuRef;
    struct OpaqueEventHandlerRef *_menuEventHandler;
    NSMutableArray *_checkoutTokens;
    long long customTextDrawingClientCount;
    long long customContentDrawingClientCount;
    long long customViewClientCount;
    unsigned long long currentMenuUpdateFlags;
    id customHandlerList;
    NSMenuItem *lastHighlightedItem;
    struct {
        unsigned int menuRefHasEverExisted:1;
        unsigned int menuRefCheckedOutForMainMenu:1;
        unsigned int menuRefCheckedOutAsSubmenu:1;
        unsigned int eventsPopulate:1;
        unsigned int eventsUpdateStatus:1;
        unsigned int eventsCommandProcess:1;
        unsigned int eventsOpen:1;
        unsigned int eventsClosed:1;
        unsigned int eventsDrawText:1;
        unsigned int eventsDrawContent:1;
        unsigned int eventsMatchKey:1;
        unsigned int populateReasonTokens:4;
        unsigned int RESERVED:17;
    } _mFlags;
}

+ (struct _NSCarbonMenuSearchReturn)_menuItemWithKeyEquivalentMatchingEventRef:(struct OpaqueEventRef *)arg1 inMenu:(id)arg2;
+ (id)_currentTrackingInfo;
+ (void)_didChangeHelpMenuFrom:(id)arg1 to:(id)arg2;
+ (int)_globalCarbonCommandProcessEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
+ (int)_globalCarbonBeginOrEndTrackingEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
+ (BOOL)isItemBeingDrawn:(id)arg1 highlightState:(char *)arg2;
+ (void)initialize;
+ (void)setupForNoMenuBar;
+ (void)prepareForCarbonMenuBar;
- (BOOL)_popUpMenuPositioningItem:(id)arg1 atCocoaIndex:(unsigned long long)arg2 atLocation:(struct CGPoint)arg3 inView:(id)arg4;
- (void)_removeCarbonEventHandlerForToken:(id)arg1;
- (id)_handleCarbonEvents:(const struct EventTypeSpec *)arg1 count:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_setCurrentMenuUpdateFlags:(unsigned long long)arg1;
- (unsigned long long)_currentMenuUpdateFlags;
- (id)_trackingInfo;
- (void)highlightItemAtIndex:(long long)arg1;
- (id)targetedItem;
- (void)dealloc;
- (id)_menuRefStatus;
- (BOOL)_menuRefIsCheckedOutWithToken:(id)arg1;
- (void)_returnMenuRefWithToken:(id)arg1;
- (struct OpaqueMenuRef *)_checkoutMenuRefWithToken:(id)arg1 creating:(BOOL)arg2 populating:(BOOL)arg3;
- (BOOL)_menuRefIsCheckedOut;
- (void)_menuItem:(id)arg1 wasAddedToNewIndex:(unsigned long long)arg2;
- (void)_menuDidRemoveAllItems:(id)arg1;
- (void)_menuItem:(id)arg1 wasRemovedFromPreviousIndex:(unsigned long long)arg2;
- (void)_menuLostMainMenuStatus;
- (void)_menuAcquiredMainMenuStatus;
- (BOOL)_isLinkedToShortcut;
- (void)_unlinkShortcut;
- (void)_linkShortcut;
- (long long)_backgroundStyle;
- (struct CGSize)_maximumSizeForScreen:(id)arg1;
- (void)_menuDidChangeFontFrom:(id)arg1 to:(id)arg2;
- (void)_limitedViewMenuItemWantsRedisplay:(long long)arg1 inRect:(struct CGRect)arg2;
- (void)_menuDidChangeWidthFrom:(double)arg1 to:(double)arg2;
- (void)_itemLostMagicAppleMenuStatus:(id)arg1;
- (void)_itemAcquiredMagicAppleMenuStatus:(id)arg1;
- (struct OpaqueMenuRef *)_initialMenuRefCreateIfNecessary;
- (struct OpaqueMenuRef *)_initialMenuRef;
- (struct OpaqueMenuRef *)_principalMenuRefCreateIfNecessary;
- (struct OpaqueMenuRef *)_principalMenuRef;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeRespectsKeyEquivalentWhileHiddenFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeSeparatorStatusFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuDidChangeUserInterfaceLayoutDirectionFrom:(long long)arg1 to:(long long)arg2;
- (void)_menuDidChangeCondensesSeparatorsFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_menuDidChangeAutoenablesFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_menuDidChangeShowsStateColumnFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_menuDidChangeHasBottomPaddingFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_menuDidChangeHasTopPaddingFrom:(BOOL)arg1 to:(BOOL)arg2;
- (void)_menuDidChangeHasSidebandUpdaterWithRoles:(long long)arg1 from:(BOOL)arg2 to:(BOOL)arg3;
- (void)_menuDidChangeDelegateTo:(id)arg1;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeAccessibilityOverriddenAttributesFrom:(id)arg3 to:(id)arg4;
- (void)_menuDidChangePluginInsertionModeFrom:(long long)arg1 to:(long long)arg2;
- (void)_menuDidChangeAccessibilityOverriddenAttribute:(id)arg1 from:(id)arg2 to:(id)arg3;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeAccessibilityOverriddenAttribute:(id)arg3 from:(id)arg4 to:(id)arg5;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeHiddenFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeCustomViewHandlesEventsFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeCustomViewFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeTooltipFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeIndentFrom:(long long)arg3 to:(long long)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeAlternateFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeKeyEquivalentModifierMaskFrom:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeKeyEquivalentVirtualKeyCodeFrom:(unsigned short)arg3 to:(unsigned short)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeKeyEquivalentFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeImageFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeStateImageFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeActionFrom:(SEL)arg3 to:(SEL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeFontFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeAttributedTitleFrom:(id)arg3 to:(id)arg4;
- (void)_menuDidChangeTitleFrom:(id)arg1 to:(id)arg2;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeTitleFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeSubmenuFrom:(id)arg3 to:(id)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeNextItemIsAlternateFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_menuItem:(id)arg1 atIndex:(unsigned long long)arg2 didChangeEnabledStateFrom:(BOOL)arg3 to:(BOOL)arg4;
- (void)_updateEventHandlerClientCounts;
- (void)_changeCustomViewClientCountBy:(long long)arg1;
- (void)_changeCustomTextDrawingCountBy:(long long)arg1 contentCountBy:(long long)arg2;
- (void)_changeFlags:(unsigned int)arg1 forItemAtCocoaIndex:(unsigned long long)arg2 isAddingFlags:(BOOL)arg3;
- (unsigned int)_menuItemCommandID;
- (void)_carbonMenuInsertItem:(id)arg1 atCarbonIndex:(unsigned short)arg2;
- (BOOL)_populatePrivatelyIfNecessary;
- (void)_privatePopulateCarbonMenu;
- (void)_instantiateCarbonMenu;
- (BOOL)_carbonMenuHasBeenInstantiatedAndPopulated;
- (void)_setSupermenuHasMenuRef:(BOOL)arg1;
- (void)_destroyMenuRefIfNotCheckedOut;
- (void)_destroyMenuRef;
- (struct OpaqueMenuRef *)_createMenuRef;
- (void)_applyAccessibilityOverrides:(id)arg1 toCarbonIndex:(unsigned short)arg2;
- (void)_installCarbonMenuEventHandlers;
- (void)_beginOrEndHandling:(BOOL)arg1 events:(const struct EventTypeSpec *)arg2 count:(unsigned long long)arg3;
- (void)_endHandlingEvents:(const struct EventTypeSpec *)arg1 count:(unsigned long long)arg2;
- (void)_beginHandlingEvents:(const struct EventTypeSpec *)arg1 count:(unsigned long long)arg2;
- (unsigned int)_menuRefAttributes;
- (int)_carbonDrawItemTextEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonDrawItemContentEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (void)_carbonDrawAttributedTitleForMenuItem:(id)arg1 withEvent:(struct OpaqueEventRef *)arg2;
- (void)_carbonDrawStateImageForMenuItem:(id)arg1 withEvent:(struct OpaqueEventRef *)arg2;
- (void)_carbonDrawLimitedViewForMenuItem:(id)arg1 withEvent:(struct OpaqueEventRef *)arg2;
- (int)_carbonMeasureItemContentEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2 measuringHeight:(BOOL)arg3;
- (int)_carbonMeasureItemTextEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2 measuringHeight:(BOOL)arg3;
- (int)_carbonCommandProcessEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonMenuItemSelectedEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonUpdateStatusEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonTargetItemEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonCloseEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonOpenEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonMatchKeyEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (int)_carbonPopulateEvent:(struct OpaqueEventRef *)arg1 handlerCallRef:(struct OpaqueEventHandlerCallRef *)arg2;
- (id)_menuItemFromCarbonEventViaParamMenuItemIndexRequiringNonNull:(struct OpaqueEventRef *)arg1;
- (id)_menuItemFromCarbonEventViaParamMenuItemIndex:(struct OpaqueEventRef *)arg1;
- (BOOL)_isMainMenu;
- (void)_carbonUpdateMenuItemKeyEquivalentForItem:(id)arg1 atCarbonIndex:(long long)arg2 withVirtualKeyCode:(unsigned short)arg3 keyEquivalent:(id)arg4;
- (void)_carbonApplyImage:(id)arg1 forItem:(id)arg2 forCarbonIndex:(long long)arg3 withApplicationMask:(unsigned long long)arg4;
- (void)_carbonSetToolTip:(id)arg1 forCarbonIndex:(long long)arg2;
- (void)_dismissMenuBecauseWindowBecameMain:(id)arg1;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3;
- (void)_popUpContextMenu:(id)arg1 withEvent:(id)arg2 forView:(id)arg3 withFont:(id)arg4;
- (void)popUpMenu:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 forView:(id)arg4 withSelectedItem:(long long)arg5 withFont:(id)arg6 withFlags:(unsigned long long)arg7 withOptions:(id)arg8;
- (void)popUpMenu:(id)arg1 atLocation:(struct CGPoint)arg2 width:(double)arg3 forView:(id)arg4 withSelectedItem:(long long)arg5 withFont:(id)arg6;
- (void)clearAsMainCarbonMenuBar;
- (void)setAsMainCarbonMenuBar;
- (void)setupCarbonMenuBar;
- (void)performMenuAction:(SEL)arg1 withTarget:(id)arg2;
- (void)performActionWithHighlightingForItemAtIndex:(long long)arg1;
- (void)_itemRemoved:(long long)arg1;
- (void)_itemAdded:(long long)arg1;
- (void)_itemChanged:(long long)arg1;
- (id)menu;
- (void)setMenu:(id)arg1;

@end

