//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ABProdIDStringBuilder : NSObject
{
    NSString *_product;
    NSString *_version;
    NSString *_language;
}

+ (id)defaultLanguage;
+ (id)buildProdIDString;
- (id)buildString;
- (void)dealloc;
- (id)initWithProduct:(id)arg1 version:(id)arg2 language:(id)arg3;

@end

