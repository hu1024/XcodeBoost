//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol DVTClickableLayer <NSObject>
@property BOOL disableClickHandler;
@property BOOL showsClickedState;
@property(copy) CDUnknownBlockType clickHandlerBlock;
- (void)layerShouldShowUnclickedState;
- (void)layerShouldShowClickedState;
- (void)fireClickHandler;
@end

