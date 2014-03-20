//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface WebPanelAuthenticationHandler : NSObject
{
    NSMapTable *windowToPanel;
    NSMapTable *challengeToWindow;
    NSMapTable *windowToChallengeQueue;
}

+ (id)sharedHandler;
- (void)_authenticationDoneWithChallenge:(id)arg1 result:(id)arg2;
- (void)cancelAuthentication:(id)arg1;
- (void)startAuthentication:(id)arg1 window:(id)arg2;
- (void)tryNextChallengeForWindow:(id)arg1;
- (void)enqueueChallenge:(id)arg1 forWindow:(id)arg2;
- (void)dealloc;
- (id)init;

@end

