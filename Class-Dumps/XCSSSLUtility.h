//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface XCSSSLUtility : NSObject
{
}

+ (BOOL)DeleteIdentity:(struct OpaqueSecIdentityRef *)arg1;
+ (int)InsureAccessForIdentity:(struct OpaqueSecIdentityRef *)arg1 fromExecutablesAtPaths:(id)arg2;
+ (int)GetIdentityAndCertChainForName:(id)arg1 identity:(struct OpaqueSecIdentityRef **)arg2 certs:(id *)arg3;
+ (struct OpaqueSecIdentityRef *)GetPreferredIdentityForName:(id)arg1;
+ (id)GetChainForCert:(struct OpaqueSecCertificateRef *)arg1;
+ (struct OpaqueSecIdentityRef *)CreateSelfSignedIdentityNamed:(id)arg1 type:(id)arg2 keychain:(struct OpaqueSecKeychainRef *)arg3 allowedExecutablePaths:(id)arg4;

@end

