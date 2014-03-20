//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSXPCCoder.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface NSXPCEncoder : NSXPCCoder
{
    void *_oolObjects;
    NSXPCConnection *_connection;
    struct __CFDictionary *_replacedObjects;
    struct __CFDictionary *_replacedByDelegateObjects;
    id <NSXPCEncoderDelegate> _delegate;
    BOOL _askForReplacement;
    void **_encoder;
    unsigned long long _genericIndex;
}

@property id <NSXPCEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property NSXPCConnection *_connection; // @synthesize _connection;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)encodeXPCObject:(void *)arg1 forKey:(id)arg2;
- (void)_encodeCString:(const char *)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(BOOL)arg1 forKey:(id)arg2;
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_encodeObject:(id)arg1;
- (void)_checkObject:(id)arg1;
- (id)_replaceObject:(id)arg1;
- (void)encodeInvocation:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (BOOL)allowsKeyedCoding;
- (void *)_createRootXPCObject;
- (id)debugDescription;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

