//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface PFUbiquityEventLogging : NSObject
{
    NSMutableSet *_logEvents;
    long long _logLevel;
}

+ (id)sharedEventLogger;
+ (void)initialize;
@property long long logLevel; // @synthesize logLevel=_logLevel;
- (id)incompleteEvents;
- (void)endEvent:(id)arg1;
- (void)fatal:(id)arg1 message:(id)arg2;
- (void)error:(id)arg1 message:(id)arg2;
- (void)warning:(id)arg1 message:(id)arg2;
- (void)info:(id)arg1 message:(id)arg2;
- (void)debug:(id)arg1 message:(id)arg2;
- (void)diagnostic:(id)arg1 message:(id)arg2;
- (void)logEventData:(id)arg1 message:(id)arg2;
- (void)beginEvent:(id)arg1;
- (id)createCustomEventTrackingID:(id)arg1;
- (id)createEventTrackingID:(int)arg1;
- (void)logEvent:(id)arg1 ID:(id)arg2 message:(id)arg3;
- (void)dealloc;
- (id)init;

@end

