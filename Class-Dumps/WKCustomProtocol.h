//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSURLProtocol.h>

__attribute__((visibility("hidden")))
@interface WKCustomProtocol : NSURLProtocol
{
    unsigned long long _customProtocolID;
}

+ (BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (BOOL)canInitWithRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long customProtocolID; // @synthesize customProtocolID=_customProtocolID;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

