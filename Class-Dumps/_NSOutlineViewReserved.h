//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSOutlineButtonCell;

__attribute__((visibility("hidden")))
@interface _NSOutlineViewReserved : NSObject
{
    NSMutableArray *draggedItems;
    NSMutableArray *autoExpandedItems;
    struct CGPoint lastHoverPoint;
    unsigned long long lastDragOperation;
    BOOL shouldShowChildrenLimitRow;
    id outlineCellTrackingAreaItem;
    NSOutlineButtonCell *textOutlineCell;
    long long userInterfaceLayoutDirection;
}

@end

