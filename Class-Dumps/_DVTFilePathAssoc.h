//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DVTWeakInterposer, NSOperationQueue, NSString;

@interface _DVTFilePathAssoc : NSObject
{
    _DVTFilePathAssoc *next;
    NSString *role;
    DVTWeakInterposer *_object_dvtWeakInterposer;
    BOOL recursiveObserver;
    CDUnknownBlockType block;
    struct dispatch_queue_s *dispatchQueue;
    NSOperationQueue *operationQueue;
}

- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onOperationQueue:(id)arg4 block:(CDUnknownBlockType)arg5;
- (id)initWithRole:(id)arg1 object:(id)arg2 observingDidChangeRecursively:(BOOL)arg3 onDispatchQueue:(struct dispatch_queue_s *)arg4 block:(CDUnknownBlockType)arg5;
@property __weak id object;

@end

