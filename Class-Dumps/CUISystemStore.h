//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreUI/CUIStructuredThemeStore.h>

#import "NSCoding.h"

@interface CUISystemStore : CUIStructuredThemeStore <NSCoding>
{
}

+ (BOOL)isUsingSharedSystemCache;
- (void)invalidateCache;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)assetExistsForKey:(struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1;
- (id)prefilteredAssetDataForKey:(struct _renditionkeytoken *)arg1;
- (id)lookupAssetForKey:(struct _renditionkeytoken *)arg1 withSignature:(id)arg2;
- (void)cacheAssetData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 withSignature:(id)arg3;
- (id)assetDataFromCacheWithKeySignature:(id)arg1;
- (BOOL)getPhysicalColor:(struct _colordef *)arg1 withName:(id)arg2;
- (id)init;
- (id)_systemCarPath;
- (id)_systemCarBundle;

@end

