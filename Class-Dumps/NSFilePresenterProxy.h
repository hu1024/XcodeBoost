//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSFileReactorProxy.h>

@class NSFileWatcher;

__attribute__((visibility("hidden")))
@interface NSFilePresenterProxy : NSFileReactorProxy
{
    struct dispatch_queue_s *_queue;
    NSFileWatcher *_watcher;
    unsigned long long _writingRelinquishmentCount;
    id _currentWriterPurposeID;
    BOOL _didObserveMovingByWriter;
    BOOL _didObserveVersionChangingByWriter;
}

+ (id)urlWithItemURL:(id)arg1 subitemPath:(id)arg2;
- (void)forwardObservationMessageWithKind:(id)arg1 parameters:(id)arg2;
- (void)forwardRelinquishmentMessageWithKind:(id)arg1 parameters:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)observeVersionChangeOfKind:(id)arg1 withClientID:(id)arg2 name:(id)arg3 subitemPath:(id)arg4;
- (void)observeUbiquityChangeAtSubitemPath:(id)arg1;
- (void)observeReconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeDisconnectionByWriterWithPurposeID:(id)arg1;
- (void)observeMoveOfSubitemAtURL:(id)arg1 toURL:(id)arg2 byWriterWithPurposeID:(id)arg3;
- (void)observeMoveByWriterWithPurposeID:(id)arg1;
- (void)accommodateDeletionWithSubitemPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemPath:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)startWatchingWithQueue:(struct dispatch_queue_s *)arg1 lastEventID:(id)arg2 unannouncedMoveHandler:(CDUnknownBlockType)arg3;
- (void)forwardUsingMessageSender:(CDUnknownBlockType)arg1;
- (void)setItemLocation:(id)arg1;
- (void)dealloc;

@end

