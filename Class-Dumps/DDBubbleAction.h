//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <DataDetectors/DDAction.h>

__attribute__((visibility("hidden")))
@interface DDBubbleAction : DDAction
{
    struct __DDResult *_dataDetectorsResult;
}

- (BOOL)runForURL:(id)arg1 context:(id)arg2;
- (BOOL)runForResult:(struct __DDResult *)arg1 context:(id)arg2;
@property struct __DDResult *dataDetectorsResult;
- (void)dealloc;
- (id)initWithDict:(id)arg1;

@end

