//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPrefsSource.h>

__attribute__((visibility("hidden")))
@interface CFPrefsCompatibilitySource : CFPrefsSource
{
}

- (struct __CFDictionary *)alreadylocked_copyDictionary;
- (struct __CFArray *)alreadylocked_copyKeyList;
- (BOOL)alreadylocked_synchronize;
- (void)alreadylocked_setValue:(void *)arg1 forKey:(struct __CFString *)arg2;
- (void *)alreadylocked_copyValueForKey:(struct __CFString *)arg1;

@end

