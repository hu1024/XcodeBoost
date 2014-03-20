//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VMULoadCommand : NSObject
{
    unsigned long long _cmdSize;
    unsigned int _command;
}

+ (id)loadCommandWithMemory:(id)arg1;
- (BOOL)isSegment64;
- (BOOL)isSegment32;
- (BOOL)isSegment;
- (BOOL)isIDDyLib;
- (BOOL)isLoadDyLib;
- (BOOL)isDyLinker;
- (BOOL)isDySymTab;
- (BOOL)isSymTab;
- (BOOL)isUUID;
- (unsigned long long)cmdSize;
- (id)initWithMemory:(id)arg1;

@end

