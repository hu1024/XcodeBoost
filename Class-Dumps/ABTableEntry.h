//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ABTableEntry : NSObject
{
    NSMutableArray *_children;
}

@property(retain, nonatomic) NSMutableArray *children; // @synthesize children=_children;
- (BOOL)hasChildren;
- (BOOL)canSelect;
- (BOOL)canDrag;
@property(readonly) NSString *recordIdentifier;
- (void)dealloc;
- (id)init;

@end

