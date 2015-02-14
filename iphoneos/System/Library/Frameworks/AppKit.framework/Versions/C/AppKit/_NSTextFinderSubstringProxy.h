/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:13 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <Foundation/NSString.h>

@class NSMutableArray;

@interface _NSTextFinderSubstringProxy : NSString {

	id _client;
	NSMutableArray* _strings;
	NSMutableArray* _subRanges;
	NSMutableArray* _endsInBoundaryArray;
	unsigned long long _length;

}
-(void)dealloc;
-(unsigned long long)length;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
-(void)getCharacters:(unsigned short*)arg1 range:(NSRange)arg2 ;
-(NSRange)_textfinder_firstMatchForRegularExpression:(id)arg1 inRange:(NSRange)arg2 ;
-(void)_getSubstring:(id*)arg1 effectiveRange:(NSRange*)arg2 searchBoundary:(char*)arg3 atCharacterIndex:(unsigned long long)arg4 ;
-(unsigned long long)_nextSearchBoundaryAfterOrIncluding:(char)arg1 index:(unsigned long long)arg2 forward:(char)arg3 ;
-(NSRange)rangeOfString:(id)arg1 options:(unsigned long long)arg2 range:(NSRange)arg3 locale:(id)arg4 ;
-(id)initWithTextFinderClient:(id)arg1 ;
@end

