//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLDataDecoder.h"
#import "NSURLDownloadDecoder.h"

@class NSString;

@interface NSGZipDecoder : NSObject <NSURLDownloadDecoder, NSURLDataDecoder>
{
    struct z_stream_s _stream;
    unsigned long long _modificationTime;
    NSString *_filename;
    BOOL _streamInitialized;
    BOOL _decodedHeader;
    BOOL _finishedInflating;
    BOOL _pad;
}

+ (id)MIMEType;
+ (BOOL)canDecodeDownloadHeaderData:(id)arg1;
+ (BOOL)decodeDownloadHeader:(id)arg1 headerLength:(int *)arg2 modificationTime:(unsigned long long *)arg3 filename:(id *)arg4;
- (id)filenameWithOriginalFilename:(id)arg1;
- (id)fileAttributes;
- (BOOL)finishDownloadDecoding;
- (BOOL)isFinishedDecoding;
- (BOOL)decodeDownloadData:(id)arg1 dataForkData:(id *)arg2 resourceForkData:(id *)arg3;
- (id)decodeData:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

