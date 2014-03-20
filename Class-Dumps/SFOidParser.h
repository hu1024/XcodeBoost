//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SFOidParser : NSObject
{
    struct cssm_data *configData;
    NSDictionary *oidDict;
}

+ (unsigned int)DER_ToInt:(const struct cssm_data *)arg1;
+ (id)printStringEscapingInvisibles:(id)arg1;
+ (id)printStringRemovingPercentEscapes:(id)arg1;
+ (id)printString:(const struct cssm_data *)arg1 encoding:(unsigned long long)arg2;
+ (id)printStringWithEncoding:(const struct cssm_data *)arg1 encoding:(unsigned long long)arg2;
+ (id)printBlobBytes:(id)arg1 quanta:(id)arg2 bytesToPrint:(unsigned int)arg3 thing:(const struct cssm_data *)arg4;
+ (id)printDigest:(unsigned int)arg1 thingToDigest:(const struct cssm_data *)arg2;
+ (id)printNumericData:(const struct cssm_data *)arg1;
+ (id)printDataAsHex:(const struct cssm_data *)arg1 maxToPrint:(unsigned int)arg2;
+ (id)killTrailingString:(id)arg1 end:(id)arg2;
+ (id)printCertTypeString:(unsigned int)arg1 isRoot:(BOOL)arg2;
+ (id)printTagTypeString:(unsigned char)arg1;
+ (BOOL)compareOid:(const struct cssm_data *)arg1 toOid:(const struct cssm_data *)arg2;
- (id)printSigAlgParams:(struct cssm_x509_algorithm_identifier *)arg1;
- (id)printECDSASigAlgParams:(struct cssm_data *)arg1;
- (id)printSigAlg:(struct cssm_x509_algorithm_identifier *)arg1;
- (id)printDerThing:(unsigned char)arg1 thing:(const struct cssm_data *)arg2;
- (id)printOid:(const struct cssm_data *)arg1;
- (id)parseOid:(const struct cssm_data *)arg1;
- (id)parseOidWithDictionary:(const struct cssm_data *)arg1;
- (id)cachedObjectForKey:(id)arg1;
- (id)printOidAsDecimal:(const struct cssm_data *)arg1;
- (void)cleanup;
- (void)dealloc;
- (id)init;

@end

