//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WebKitFullScreenListener.h"

__attribute__((visibility("hidden")))
@interface WebKitFullScreenListener : NSObject <WebKitFullScreenListener>
{
    struct RefPtr<WebCore::Element> _element;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)webkitDidExitFullScreen;
- (void)webkitWillExitFullScreen;
- (void)webkitDidEnterFullScreen;
- (void)webkitWillEnterFullScreen;
- (id)initWithElement:(struct Element *)arg1;

@end

