//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Symbolication/VMULoadCommand.h>

@class NSString;

@interface VMUDyLibLoadCommand : VMULoadCommand
{
    NSString *_path;
    unsigned int _currentVersion;
    unsigned int _compatibilityVersion;
}

- (void)dealloc;
- (id)description;
- (BOOL)isLoadDyLib;
- (unsigned int)compatibilityVersion;
- (unsigned int)currentVersion;
- (id)path;
- (id)initWithMemory:(id)arg1;

@end

