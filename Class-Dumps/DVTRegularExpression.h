//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying.h"

@class NSString;

@interface DVTRegularExpression : NSObject <NSCopying>
{
    NSString *_expressionString;
    struct URegularExpression *_compiledExpression;
    int _options;
}

+ (struct URegularExpression *)testAndCompileExpressionString:(id)arg1 options:(int)arg2 error:(id *)arg3;
+ (id)descriptionForParseError:(struct UParseError *)arg1;
+ (void)initialize;
@property int options; // @synthesize options=_options;
@property struct URegularExpression *compiledExpression; // @synthesize compiledExpression=_compiledExpression;
@property(copy) NSString *expressionString; // @synthesize expressionString=_expressionString;
- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateMatchesInString:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateMatchesInString:(id)arg1 searchRange:(struct _NSRange)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)matchString:(id)arg1 error:(id *)arg2;
- (id)matchString:(id)arg1 searchRange:(struct _NSRange)arg2 error:(id *)arg3;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly) unsigned long long groupCount;
- (id)initWithExpressionString:(id)arg1 options:(int)arg2 error:(id *)arg3;

@end

