//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DVTInvalidation.h"

@class DVTStackBacktrace, NSMutableString, NSString, NSTimer;

@interface DVTTypeCompletionHandler : NSObject <DVTInvalidation>
{
    NSMutableString *_completionString;
    NSTimer *_completionWillExpireTimer;
    NSTimer *_completionDisplayShouldExpireTimer;
    struct {
        unsigned int delegateImplementsTypeCompletionStringForObject:1;
        unsigned int delegateImplementsCompletionWillExpire:1;
        unsigned int delegateImplementsCompletionDisplayShouldExpire:1;
        unsigned int _reserved:5;
    } _flags;
    id <DVTTypeCompletionHandlerDelegate> _delegate;
    NSString *_runLoopMode;
}

+ (id)typeCompletionHandlerWithDelegate:(id)arg1;
+ (id)typeCompletionHandlerWithDelegate:(id)arg1 runLoopMode:(id)arg2;
+ (void)initialize;
@property(readonly) NSString *runLoopMode; // @synthesize runLoopMode=_runLoopMode;
@property(retain, nonatomic) id <DVTTypeCompletionHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3 startingAtObject:(id)arg4;
- (id)processTypeSelectionInput:(id)arg1 objects:(id)arg2 index:(unsigned long long *)arg3;
- (void)primitiveInvalidate;
- (void)expireCompletionDisplay:(id)arg1;
- (void)expireCompletion:(id)arg1;
- (void)clearAndRenewCompletionString;
- (void)clearAndRenewCompletionDisplayShouldExpireTimer;
- (void)clearCompletionDisplayShouldExpireTimer;
- (void)clearAndRenewCompletionWillExpireTimer;
- (void)clearCompletionWillExpireTimer;
@property(readonly) NSString *currentTypeCompletionString;
- (id)initWithDelegate:(id)arg1 runLoopMode:(id)arg2;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end

