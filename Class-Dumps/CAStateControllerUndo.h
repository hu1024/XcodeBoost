//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAStateRecorder.h"

@class CAState, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CAStateControllerUndo : NSObject <CAStateRecorder>
{
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property(retain, nonatomic) NSMutableArray *transitions; // @synthesize transitions=_transitions;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) CAState *state; // @synthesize state=_state;
@property(readonly) CAStateControllerUndo *next; // @synthesize next=_next;
- (void)dealloc;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;
- (void)addElement:(id)arg1;

@end

