//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/CFPDDataBuffer.h>

__attribute__((visibility("hidden")))
@interface CFPDXPCBuffer : CFPDDataBuffer
{
    void *data;
}

- (void)finalize;
- (void)dealloc;
- (void *)copyXPCData;
- (unsigned long long)length;
- (void *)bytes;
- (id)initWithXPCData:(void *)arg1;

@end

