/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:05 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/PubSub.framework/Versions/A/PubSub
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PubSub/PubSub-Structs.h>
#import <PubSub/NSCopying.h>

@class NSString;

@interface PSRegularExpression : NSObject <NSCopying> {

	URegularExpressionRef _regexp;
	int _err;
	NSString* _retainedStr;
	unsigned short* _mallocedChars;

}
+(id)regularExpressionWithPattern:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(char)matches;
-(id)_initWithURegularExpression:(URegularExpressionRef)arg1 ;
-(NSRange)rangeOfNextMatch;
-(id)_searchStringRange:(NSRange)arg1 ;
-(NSRange)rangeOfMatchedGroup:(unsigned)arg1 ;
-(char)matchesFrom:(unsigned)arg1 ;
-(char)matchesString:(id)arg1 ;
-(void)resetMatches;
-(id)nextMatch;
-(id)matchedGroup:(unsigned)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)setSearchString:(id)arg1 ;
-(id)initWithPattern:(id)arg1 options:(int)arg2 error:(id*)arg3 ;
-(int)lastError;
@end

