//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

__attribute__((visibility("hidden")))
@interface ABComponentLayoutController : NSObject
{
    NSTextStorage *_textStorage;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}

+ (id)sharedInstance;
- (id)layoutOrderOfComponents:(id)arg1 joinedByString:(id)arg2;
- (void)dealloc;
- (id)init;

@end

