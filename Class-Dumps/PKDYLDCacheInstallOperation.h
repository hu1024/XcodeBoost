//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PackageKit/PKInstallOperation.h>

@class PKInstallTask;

@interface PKDYLDCacheInstallOperation : PKInstallOperation
{
    PKInstallTask *_currentTask;
    BOOL _inSandbox;
}

+ (BOOL)canBackgroundForCurrentSystemState;
- (void)cancel;
- (void)main;
- (BOOL)_updateDYLDSharedCacheInSandboxReturningError:(id *)arg1;
- (id)_pathForTool:(id)arg1;
- (int)installState;
- (BOOL)_shouldUpdateDYLDSharedCache;
- (id)description;
- (id)initWithRequest:(id)arg1 sandbox:(id)arg2 analyzer:(id)arg3 updateInSandbox:(BOOL)arg4;

@end

