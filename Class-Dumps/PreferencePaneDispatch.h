//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PreferencePaneProtocol.h"

@class NSPreferencePane, NSXPCConnection;

@interface PreferencePaneDispatch : NSObject <PreferencePaneProtocol>
{
    NSPreferencePane *_prefPaneObject;
    CDUnknownBlockType _replyToShouldUnselectBlock;
    NSXPCConnection *_connection;
}

+ (id)sharedDispatch;
@property(retain) NSPreferencePane *prefPaneObject; // @synthesize prefPaneObject=_prefPaneObject;
- (void)authorizationViewDidDismissAgent;
- (void)authorizationViewWillShowAgent;
- (oneway void)handleOpenAEData:(id)arg1;
- (oneway void)openDocumentAtPath:(id)arg1;
- (oneway void)revealElementForKey:(id)arg1;
- (oneway void)getHelpMenuItems:(CDUnknownBlockType)arg1;
- (oneway void)didResignActive;
- (oneway void)willResignActive;
- (oneway void)didBecomeActive;
- (oneway void)willBecomeActive;
- (oneway void)didUnhide;
- (oneway void)willUnhide;
- (oneway void)didHide;
- (oneway void)willHide;
- (oneway void)replyToShouldUnselect:(CDUnknownBlockType)arg1;
- (oneway void)shouldUnselect:(CDUnknownBlockType)arg1;
- (oneway void)didUnselect;
- (oneway void)willUnselect;
- (oneway void)didSelect;
- (oneway void)willSelectWithReply:(CDUnknownBlockType)arg1;
- (oneway void)willSelect;
@property(retain) NSXPCConnection *connection; // @dynamic connection;
- (id)init;
- (void)_suddenTerminationStateShouldChangeNotification:(id)arg1;
- (void)_switchToPaneNotification:(id)arg1;
- (void)_cancelPaneSwitchNotification:(id)arg1;
- (void)_finishPaneSwitchNotification:(id)arg1;

@end

