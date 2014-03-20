//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CSServiceClient/XCSCredential.h>

@class NSDictionary, NSString;

@interface XCSCredentialSSHKey : XCSCredential
{
    NSDictionary *_credential;
    NSString *_sshKeyPath;
}

@property(retain) NSString *sshKeyPath; // @synthesize sshKeyPath=_sshKeyPath;
@property(retain) NSDictionary *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)pathToCredential;
- (BOOL)applyToPath:(id)arg1 error:(id *)arg2;
- (id)copyPrivateKey;
- (id)copyPublicKey;
- (BOOL)hasPrivateKey;
- (BOOL)hasPublicKey;
- (id)copyUsername;
- (BOOL)hasUsername;
- (id)initWithData:(id)arg1;

@end

