/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:29:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AppSupport/AppSupport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@class NSString;

@interface CPRegularExpression : NSObject <NSCopying, NSCoding> {

	NSString* _expressionString;
	void* _reserved;

}
+(void)initialize;
+(const char*)getBytesForString:(id)arg1 lossByte:(unsigned char)arg2 ;
+(id)regularExpressionWithString:(id)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)initWithExpressionString:(id)arg1 ;
-(NSRange)matchedRangeForCString:(const char*)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
-(id)initWithExpressionString:(id)arg1 options:(unsigned)arg2 ;
-(id)expressionString;
-(unsigned)numberOfSubexpressions;
-(NSRange)matchedRangeForString:(id)arg1 range:(NSRange)arg2 subexpressionRanges:(NSRange*)arg3 count:(unsigned)arg4 ;
@end
