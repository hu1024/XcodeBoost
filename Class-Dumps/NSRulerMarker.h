//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding.h"
#import "NSCopying.h"

@class NSImage, NSRulerView;

@interface NSRulerMarker : NSObject <NSCopying, NSCoding>
{
    NSRulerView *_ruler;
    double _location;
    NSImage *_image;
    struct CGPoint _imageOrigin;
    struct __rFlags {
        unsigned int movable:1;
        unsigned int removable:1;
        unsigned int dragging:1;
        unsigned int pinned:1;
        unsigned int _reserved:28;
    } _rFlags;
    id _representedObject;
}

+ (void)initialize;
+ (id)_numericIndicatorFormatter;
+ (id)_numericIndicatorCell;
+ (id)tabStopContextMenuForMarker:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)_tabStopContextMenuAction:(id)arg1;
+ (id)decimalTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)centerTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftTabMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)firstIndentMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)rightMarginMarkerWithRulerView:(id)arg1 location:(double)arg2;
+ (id)leftMarginMarkerWithRulerView:(id)arg1 location:(double)arg2;
- (double)_locationOfOriginPoint:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)trackMouse:(id)arg1 adding:(BOOL)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (double)thicknessRequiredInRuler;
- (struct CGRect)imageRectInRuler;
- (struct CGPoint)_compositePointInRuler;
- (struct CGPoint)_originPointInRuler;
- (id)representedObject;
- (void)setRepresentedObject:(id)arg1;
- (BOOL)isDragging;
- (BOOL)isRemovable;
- (BOOL)isMovable;
- (void)setRemovable:(BOOL)arg1;
- (void)setMovable:(BOOL)arg1;
- (struct CGPoint)imageOrigin;
- (void)setImageOrigin:(struct CGPoint)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (double)markerLocation;
- (void)setMarkerLocation:(double)arg1;
- (id)ruler;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRulerView:(id)arg1 markerLocation:(double)arg2 image:(id)arg3 imageOrigin:(struct CGPoint)arg4;

@end

