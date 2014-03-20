//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DSADownloaderDelegate.h"

@class NSConnection, NSMachPort, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DSAUpdateManager : NSObject <DSADownloaderDelegate>
{
    NSMutableDictionary *_activeDownloaders;
    NSMutableArray *_updates;
    NSConnection *_daemonConnection;
    NSMachPort *_daemonLivePort;
    NSConnection *_agentConnection;
    NSMachPort *_agentLivePort;
    NSMutableDictionary *_blessedLocations;
    CDUnknownBlockType _credentialChallengeCompletionBlock;
}

+ (id)sharedUpdateManager;
- (void).cxx_destruct;
- (void)_installFinishedForUpdate:(id)arg1 atPath:(id)arg2;
- (void)installDidFinishForArchive:(id)arg1 atPath:(id)arg2;
- (void)installDidFailForArchive:(id)arg1 withCode:(int)arg2 andInfo:(id)arg3;
- (BOOL)verifyDocSetForArchive:(id)arg1 atPath:(id)arg2;
- (void)_checkForUpdatedContentForUpdateIdentifier:(id)arg1;
- (id)_installErrorForCode:(int)arg1 andInfo:(id)arg2 forUpdate:(id)arg3;
- (id)_truncatedMessageFromDictionary:(id)arg1;
- (void)downloader:(id)arg1 needsCredentialForChallenge:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)userNotificationCallbackComplete:(id)arg1;
- (void)downloaderWillResumeDownload:(id)arg1;
- (void)downloaderDidFinish:(id)arg1;
- (void)_quarantineDownload:(id)arg1 forUpdate:(id)arg2;
- (void)downloader:(id)arg1 didMakeProgress:(float)arg2;
- (void)downloader:(id)arg1 willDownloadFile:(id)arg2 ofSize:(long long)arg3;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)_finishUpdate:(id)arg1;
- (void)cancelUpdate:(id)arg1;
- (void)_cancelAllUpdates;
- (void)_removeUpdate:(id)arg1;
- (void)addUpdate:(id)arg1;
- (BOOL)_uniqueInstallPathForUpdate:(id)arg1 error:(id *)arg2;
- (BOOL)_blessUpdate:(id)arg1 error:(id *)arg2;
- (BOOL)_isLocation:(id)arg1 blessedForDocSetID:(id)arg2;
- (void)_loadBlessedLocations;
- (void)_recordBlessedLocation:(id)arg1 forDocSetID:(id)arg2;
- (id)_reapProcessWithOutput:(id)arg1;
- (unsigned int)_destinationStatusForUpdate:(id)arg1;
- (void)_runMaximumDownloads;
- (BOOL)_createDownloaderForUpdate:(id)arg1;
- (id)downloaderForUpdate:(id)arg1;
- (id)_updateForDownloader:(id)arg1;
- (id)_downloaderForArchivePath:(id)arg1;
- (BOOL)installDownload:(id)arg1 forUpdate:(id)arg2;
- (BOOL)_updateIsFromApple:(id)arg1;
- (id)_agentProxy;
- (void)_setupAgentConnection;
- (void)_agentDied:(id)arg1;
- (id)_agentPort;
- (id)_daemonProxy;
- (BOOL)_enableDaemon;
- (id)_daemonPort;
- (void)_daemonDied:(id)arg1;
- (void)_cancelInstallingUpdatesUsingAgent:(BOOL)arg1;
- (int)_authorizeInstallationForUpdate:(id)arg1;
- (int)_authorizeEnablingDaemon:(struct AuthorizationOpaqueRef *)arg1;
- (int)_authorizeBlessTool:(struct AuthorizationOpaqueRef *)arg1 forUpdate:(id)arg2;
- (void)dealloc;

@end

