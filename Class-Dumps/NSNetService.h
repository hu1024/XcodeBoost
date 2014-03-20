//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NSNetService : NSObject
{
    id _netService;
    id _delegate;
    id _reserved;
    BOOL _includesPeerToPeer;
}

+ (id)dataFromTXTRecordDictionary:(id)arg1;
+ (id)dictionaryFromTXTRecordData:(id)arg1;
@property BOOL includesPeerToPeer; // @synthesize includesPeerToPeer=_includesPeerToPeer;
- (id)TXTRecordData;
- (BOOL)setTXTRecordData:(id)arg1;
- (void)stopMonitoring;
- (void)startMonitoring;
- (id)_monitors;
- (void)resolve;
- (void)resolveWithTimeout:(double)arg1;
- (BOOL)getInputStream:(out id *)arg1 outputStream:(out id *)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct __CFNetService *)_internalNetService;
- (void)finalize;
- (void)dealloc;
- (void)_dispatchCallBackWithError:(CDStruct_87dc826d)arg1;
- (void)stop;
- (void)publish;
- (void)publishWithOptions:(unsigned long long)arg1;
- (void)publishWithServer:(unsigned long long)arg1;
- (id)normalizedType;
- (void)_internal_publishWithOptions:(unsigned long long)arg1;
@property(readonly) long long port;
@property(readonly) NSArray *addresses;
@property(readonly) NSString *hostName;
@property(readonly) NSString *name;
@property(readonly) NSString *type;
@property(readonly) NSString *domain;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)_scheduleInDefaultRunLoopForMode:(id)arg1;
@property id <NSNetServiceDelegate> delegate;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3;
- (id)initWithDomain:(id)arg1 type:(id)arg2 name:(id)arg3 port:(int)arg4;
- (id)initWithCFNetService:(struct __CFNetService *)arg1;
- (void)setProtocolSpecificInformation:(id)arg1;
- (id)protocolSpecificInformation;

@end

