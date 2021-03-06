/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:47:02 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Volumes/YosInst/System/Library/CoreServices/Applications/RAID Utility.app/Contents/MacOS/RAID Utility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface RUByteAmountFormatter : NSFormatter {

	NSNumberFormatter* _helper;
	char _binaryAmounts;

}
+(void)setBinaryUnitPrefixesAreSI:(char)arg1 ;
+(void)initialize;
-(id)binaryStringForNumber:(id)arg1 ;
-(id)siStringForNumber:(id)arg1 ;
-(void)setNumberOfDecimalPlaces:(unsigned long long)arg1 ;
-(unsigned long long)numberOfDecimalPlaces;
-(void)setBinary:(char)arg1 ;
-(id)init;
-(void)dealloc;
-(char)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(char)isBinary;
@end

