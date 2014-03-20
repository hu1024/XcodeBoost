//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XCSRegistration : NSObject
{
    NSString *_preferencesPath;
    NSString *_toolName;
    NSString *_magicSession;
}

@property(retain) NSString *magicSession; // @synthesize magicSession=_magicSession;
@property(retain) NSString *toolName; // @synthesize toolName=_toolName;
@property(retain) NSString *preferencesPath; // @synthesize preferencesPath=_preferencesPath;
- (void).cxx_destruct;
- (void)cleanup;
- (void)registerRemotelyToServer:(id)arg1 port:(long long)arg2 asUser:(id)arg3 withPassword:(id)arg4 andHandler:(CDUnknownBlockType)arg5;
- (void)registerLocallyWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)isRegistered;
- (void)dealloc;
- (id)initWithName:(id)arg1 andPrefsPath:(id)arg2;

@end

