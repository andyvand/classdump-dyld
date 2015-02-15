/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/AppKit-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSString, _NSTextFinderImpl;

@interface _NSTextFinderReplacementStringArray : NSArray {

	NSRange* replacementRanges;
	unsigned long long length;
	NSString* string;
	NSString* replacementString;
	char hasReplacePattern;
	char replacePatternHasBackreferences;
	id replacementStringCache;
	_NSTextFinderImpl* impl;

}
-(void)finalize;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)initWithTextFinder:(id)arg1 replacementRanges:(NSRange*)arg2 length:(unsigned long long)arg3 ;
@end

