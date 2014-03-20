//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface CNPhoto : NSObject
{
    NSString *_identifier;
    NSData *_imageData;
    struct CGRect _cropRect;
}

@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSData *imageData; // @synthesize imageData=_imageData;
@property(readonly) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect)arg2 identifier:(id)arg3;
- (id)initWithImageData:(id)arg1;

@end

