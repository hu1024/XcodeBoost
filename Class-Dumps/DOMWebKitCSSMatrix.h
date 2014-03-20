//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebCore/DOMObject.h>

__attribute__((visibility("hidden")))
@interface DOMWebKitCSSMatrix : DOMObject
{
}

- (id)toString;
- (id)skewY:(double)arg1;
- (id)skewX:(double)arg1;
- (id)rotateAxisAngle:(double)arg1 y:(double)arg2 z:(double)arg3 angle:(double)arg4;
- (id)rotate:(double)arg1 rotY:(double)arg2 rotZ:(double)arg3;
- (id)scale:(double)arg1 scaleY:(double)arg2 scaleZ:(double)arg3;
- (id)translate:(double)arg1 y:(double)arg2 z:(double)arg3;
- (id)inverse;
- (id)multiply:(id)arg1;
- (void)setMatrixValue:(id)arg1;
@property double m44;
@property double m43;
@property double m42;
@property double m41;
@property double m34;
@property double m33;
@property double m32;
@property double m31;
@property double m24;
@property double m23;
@property double m22;
@property double m21;
@property double m14;
@property double m13;
@property double m12;
@property double m11;
@property double f;
@property double e;
@property double d;
@property double c;
@property double b;
@property double a;
- (void)finalize;
- (void)dealloc;

@end

