//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAKeyUsageExtension : NSObject
{
    int _caKeyUsageExtensionIsEnabled;
    int _caKeyUsageExtensionIsCritical;
    int _caKeyUsageExtensionSignature;
    int _caKeyUsageExtensionNonRepudiation;
    int _caKeyUsageExtensionKeyEncipherment;
    int _caKeyUsageExtensionDataEncipherment;
    int _caKeyUsageExtensionKeyAgreement;
    int _caKeyUsageExtensionCertSigning;
    int _caKeyUsageExtensionCRLSigning;
    int _caKeyUsageExtensionEncipherOnly;
    int _caKeyUsageExtensionDecipherOnly;
    int _caCertAuthorityKeyUsageExtensionIsEnabled;
    int _caCertAuthorityKeyUsageExtensionIsCritical;
    int _caCertAuthorityKeyUsageExtensionSignature;
    int _caCertAuthorityKeyUsageExtensionNonRepudiation;
    int _caCertAuthorityKeyUsageExtensionKeyEncipherment;
    int _caCertAuthorityKeyUsageExtensionDataEncipherment;
    int _caCertAuthorityKeyUsageExtensionKeyAgreement;
    int _caCertAuthorityKeyUsageExtensionCertSigning;
    int _caCertAuthorityKeyUsageExtensionCRLSigning;
    int _caCertAuthorityKeyUsageExtensionEncipherOnly;
    int _caCertAuthorityKeyUsageExtensionDecipherOnly;
    int _caUserKeyUsageExtensionIsEnabled;
    int _caUserKeyUsageExtensionIsCritical;
    int _caUserKeyUsageExtensionSignature;
    int _caUserKeyUsageExtensionNonRepudiation;
    int _caUserKeyUsageExtensionKeyEncipherment;
    int _caUserKeyUsageExtensionDataEncipherment;
    int _caUserKeyUsageExtensionKeyAgreement;
    int _caUserKeyUsageExtensionCertSigning;
    int _caUserKeyUsageExtensionCRLSigning;
    int _caUserKeyUsageExtensionEncipherOnly;
    int _caUserKeyUsageExtensionDecipherOnly;
    BOOL _caDoneCAKeyUsageExts;
}

- (int)_decipherOnlyUsage;
- (int)_encipherOnlyUsage;
- (int)_crlSigningUsage;
- (int)_certSigningUsage;
- (int)_keyAgreementUsage;
- (int)_dataEnciphermentUsage;
- (int)_keyEnciphermentUsage;
- (int)_nonRepudiationUsage;
- (int)_signatureUsage;
- (int)_isCritical;
- (int)_isEnabled;
- (void)_setDecipherOnlyUsage:(id)arg1;
- (void)_setEncipherOnlyUsage:(id)arg1;
- (void)_setCRLSigningUsage:(id)arg1;
- (void)_setCertSigningUsage:(id)arg1;
- (void)_setKeyAgreementUsage:(id)arg1;
- (void)_setDataEnciphermentUsage:(id)arg1;
- (void)_setKeyEnciphermentUsage:(id)arg1;
- (void)_setNonRepudiationUsage:(id)arg1;
- (void)_setSignatureUsage:(id)arg1;
- (void)_setIsCritical:(id)arg1;
- (void)_setIsEnabled:(id)arg1;
- (void)_setUserSignature:(BOOL)arg1;
- (void)_setCertAuthoritySignature:(BOOL)arg1;
- (void)_setCertAuthorityCertSigning:(BOOL)arg1;
- (void)_setCertAuthorityIsEnabled:(BOOL)arg1;
- (void)_updateKeyUsageExtPanelToUserValues;
- (void)_saveUserKeyUsageExtPanelValues;
- (void)_updateKeyUsageExtPanelToCAValues;
- (void)_saveCAKeyUsageExtPanelValues;
- (BOOL)_doneCAKeyUsageExt;
- (void)_setDoneCAKeyUsageExt:(BOOL)arg1;
- (void)_fillInValuesInExtension:(struct __CE_DataAndType *)arg1 isCACertBeingCreated:(BOOL)arg2 extensionIsPresent:(char *)arg3;
- (void)_setToCodeSigning;
- (void)_setToVPNServer;
- (void)_setToVPNClient;
- (void)_setToSSLClient;
- (void)_setEnabledCriticalDigitalSignature;
- (void)_setToSSLServer;
- (void)_setToSMIME;
- (void)_setToDefaults;
- (BOOL)_validate;

@end

