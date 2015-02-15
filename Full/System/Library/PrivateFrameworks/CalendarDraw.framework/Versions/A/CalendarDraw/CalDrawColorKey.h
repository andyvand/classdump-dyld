/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:49 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDraw/CalendarDraw-Structs.h>
#import <CalendarDraw/NSCopying.h>

@class NSString;

@interface CalDrawColorKey : NSObject <NSCopying> {

	NSString* _styleRef;

}

@property (copy) NSString * styleRef;              //@synthesize styleRef=_styleRef - In the implementation block
+(id)colorKeyForCGColor:(CGColorRef)arg1 ;
+(id)colorKeyForNSColor:(id)arg1 ;
+(id)colorKeyForConstantColor:(id)arg1 ;
-(void)setStyleRef:(NSString *)arg1 ;
-(NSString *)styleRef;
-(id)init;
-(id)description;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

