//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface PKBundleStorage : NSObject
{
    NSString *_path;
    NSString *_storageType;
    NSString *_identifier;
    NSDictionary *_versionAttributes;
}

+ (id)bundleStorageWithPath:(id)arg1;
+ (id)_allStorageClasses;
- (id)versionAttributes;
- (id)identifier;
- (id)storageType;
- (id)description;
- (void)dealloc;
- (id)_initWithPath:(id)arg1 storageType:(id)arg2 identifier:(id)arg3 versionAttributes:(id)arg4;
- (id)_initWithPath:(id)arg1 fileAttributes:(id)arg2;

@end

