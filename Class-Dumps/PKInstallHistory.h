//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKInstallHistory : NSObject
{
    NSString *_path;
}

+ (id)defaultHistory;
+ (id)historyOnVolume:(id)arg1;
- (id)installedItems;
- (BOOL)addInstallRequest:(id)arg1;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

