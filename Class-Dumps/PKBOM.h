//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface PKBOM : NSObject
{
    NSData *_bomData;
    struct _BOMBom *_BOMBom;
}

+ (BOOL)_setAttributes:(id)arg1 ofBOMFSObject:(struct _BOMFSObject *)arg2;
+ (id)_attributesOfBOMFSObject:(struct _BOMFSObject *)arg1;
+ (id)_NSFileTypeFromBOMFSObjType:(int)arg1;
- (unsigned long long)totalSize;
- (unsigned long long)fileCount;
- (id)subpathsOfDirectoryAtPath:(id)arg1;
- (id)directoryEnumerator;
- (id)attributesOfItemAtPath:(id)arg1;
- (struct _BOMBom *)BOMBom;
- (void)dealloc;
- (void)finalize;
- (id)initWithBOMData:(id)arg1;
- (id)initWithBOMPath:(id)arg1;

@end

