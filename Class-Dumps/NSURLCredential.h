//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSURLCredentialInternal;

@interface NSURLCredential : NSObject <NSSecureCoding, NSCopying>
{
    NSURLCredentialInternal *_internal;
}

+ (BOOL)supportsSecureCoding;
+ (id)credentialForTrust:(struct __SecTrust *)arg1;
+ (id)credentialWithIdentity:(struct OpaqueSecIdentityRef *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
+ (id)credentialWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithTrust:(struct __SecTrust *)arg1;
- (id)certificates;
- (struct OpaqueSecIdentityRef *)identity;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)persistence;
- (BOOL)hasPassword;
- (id)password;
- (id)user;
- (struct _CFURLCredential *)_cfurlcredential;
- (void)dealloc;
- (id)initWithIdentity:(struct OpaqueSecIdentityRef *)arg1 certificates:(id)arg2 persistence:(unsigned long long)arg3;
- (id)_initWithCFURLCredential:(struct _CFURLCredential *)arg1;
- (id)initWithUser:(id)arg1 password:(id)arg2 persistence:(unsigned long long)arg3;
- (id)_initWithUser:(id)arg1 password:(id)arg2 initialAccess:(struct OpaqueSecAccessRef *)arg3 persistence:(unsigned long long)arg4;
- (id)initWithUser:(id)arg1 password:(id)arg2 initialAccess:(struct OpaqueSecAccessRef *)arg3;

@end

