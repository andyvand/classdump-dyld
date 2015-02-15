/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:35 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSNumberFormatter.h>

@class NSString;

@interface FI_TFileSizeFormatter : NSNumberFormatter {

	NSString* _invalidSizeStr;
	unsigned long long _options;

}

@property (retain) NSString * invalidSizeStr;              //@synthesize invalidSizeStr=_invalidSizeStr - In the implementation block
@property (assign) BOOL stableWidth; 
@property (assign) BOOL sizeInBytes; 
@property (assign) BOOL specialZeroHandling; 
+(id)fileSizeFormatter;
-(void)initCommon;
-(void)setInvalidSizeStr:(NSString *)arg1 ;
-(void)setStableWidth:(BOOL)arg1 ;
-(void)setSpecialZeroHandling:(BOOL)arg1 ;
-(NSString *)invalidSizeStr;
-(void)setSizeInBytes:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(id)numberFromString:(id)arg1 ;
@end

