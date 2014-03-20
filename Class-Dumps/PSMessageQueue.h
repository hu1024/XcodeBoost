//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@class NSDictionary, NSString, NSURL, PSGetOperation, PSPutOperation;

__attribute__((visibility("hidden")))
@interface PSMessageQueue : NSObject <NSCopying>
{
    NSString *_base;
    NSString *_userAgent;
    NSString *_curETag;
    unsigned int _curFile;
    unsigned int _curEOF;
    BOOL _curIncomplete;
    double _lastFetchTime;
    id <PSMessageQueueDelegate> _delegate;
    PSGetOperation *_pendingGet;
    PSPutOperation *_pendingPut;
}

@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property id <PSMessageQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)createParentDirectory:(id *)arg1;
- (BOOL)sendMessage:(id)arg1 error:(id *)arg2;
- (BOOL)sendMessages:(id)arg1 error:(id *)arg2;
- (id)fetchNewMessages:(id *)arg1;
- (id)_doModalAction:(SEL)arg1 withObject:(id)arg2 error:(id *)arg3;
- (void)stop;
- (BOOL)sendMessages:(id)arg1;
- (void)_finishedPUT:(id)arg1 error:(id)arg2;
- (BOOL)_sendMessages:(id)arg1;
- (long long)_parseChunks:(id)arg1 position:(unsigned long long)arg2 into:(id)arg3;
- (void)_finishedGET:(id)arg1 error:(id)arg2;
- (BOOL)fetchNewMessages;
- (id)credential;
@property(readonly) BOOL isSendingMessages;
@property(readonly) BOOL isFetchingMessages;
@property(readonly) BOOL isBusy;
- (void)addedMessages:(id)arg1;
- (void)addedData:(id)arg1 fromFile:(unsigned int)arg2 atOffset:(unsigned int)arg3;
- (void)stateChanged;
- (id)_currentURL;
- (id)_urlForFileNumber:(unsigned int)arg1;
- (void)_setCurFile:(unsigned int)arg1 eof:(unsigned int)arg2 eTag:(id)arg3 incomplete:(BOOL)arg4;
@property(readonly) NSDictionary *state;
@property(readonly) BOOL isEmpty;
- (BOOL)isOnDotMac;
@property(readonly) NSURL *baseURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithState:(id)arg1;
- (id)initWithDotMacMember:(id)arg1 basePath:(id)arg2 state:(id)arg3;
- (id)initWithBaseURL:(id)arg1 state:(id)arg2;

@end

