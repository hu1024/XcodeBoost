//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDFPopupView;

@interface PDFPopupLayoutInfo : NSObject
{
    PDFPopupView *popupView;
    struct CGRect bounds;
    struct CGRect parentBounds;
}

@property struct CGRect parentBounds; // @synthesize parentBounds;
@property struct CGRect bounds; // @synthesize bounds;
@property PDFPopupView *popupView; // @synthesize popupView;
@property double minY;
@property double maxY;

@end

