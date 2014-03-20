//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSTimer;

@interface ABNetworkController : NSObject
{
    const struct __SCDynamicStore *_store;
    NSString *_domainName;
    unsigned int _waitingForDialToFinish:1;
    unsigned int _checkedNetwork:1;
    unsigned int _isNetworkUp:1;
    NSTimer *_notificationTimer;
}

+ (id)sharedNetworkController;
- (BOOL)canReachAddress:(id)arg1;
- (id)domainName;
- (BOOL)isNetworkUp;
- (id)init;
- (void)listenForNetworkChanges;
- (void)finalize;
- (void)dealloc;
- (void)_triggerDialForHostname:(id)arg1;
- (void)_postNetworkChangeNotification:(id)arg1;
- (void)_postNotification:(id)arg1;

@end

