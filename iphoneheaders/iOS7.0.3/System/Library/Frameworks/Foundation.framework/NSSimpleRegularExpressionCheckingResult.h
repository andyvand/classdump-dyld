/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:28:12 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSSimpleRegularExpressionCheckingResult : NSRegularExpressionCheckingResult {

	NSRegularExpression* _regularExpression;
	NSRange _ranges[3];

}
-(NSRange)rangeAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfRanges;
-(BOOL)_adjustRangesWithOffset:(int)arg1 ;
-(id)regularExpression;
-(id)initWithRanges:(NSRange*)arg1 count:(unsigned)arg2 regularExpression:(id)arg3 ;
-(id)rangeArray;
-(id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2 ;
-(void)dealloc;
-(NSRange)range;
@end
