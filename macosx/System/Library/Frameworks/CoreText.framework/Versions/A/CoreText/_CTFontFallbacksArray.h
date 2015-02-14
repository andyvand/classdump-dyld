/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:16 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/CoreText.framework/Versions/A/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	int _lock;
	const TBaseFont* _baseFont;
	unsigned long long _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;

}
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
@end

