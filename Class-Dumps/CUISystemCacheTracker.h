//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface CUISystemCacheTracker : NSObject
{
    unsigned long long initialCacheSize;
    unsigned long long cacheSize;
    NSMutableDictionary *assetSizes;
    NSMutableSet *allAssetKeySignatures;
    NSMutableDictionary *flushedAssets;
}

+ (id)sharedSystemCacheTracker;
- (void)flushLog;
- (id)_descriptionForKeySignature:(id)arg1;
- (void)trackAddedByteCount:(long long)arg1 forKeySignature:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)_getStoredCacheSize:(unsigned long long *)arg1 andKeySignatures:(id *)arg2;

@end

