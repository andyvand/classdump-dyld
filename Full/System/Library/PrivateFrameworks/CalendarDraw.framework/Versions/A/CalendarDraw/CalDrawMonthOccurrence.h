/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:54 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarDraw.framework/Versions/A/CalendarDraw
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarDraw/CalendarDraw-Structs.h>
#import <CalendarDraw/CalDrawOccurrence.h>

@class NSString;

@interface CalDrawMonthOccurrence : CalDrawOccurrence {

	char _flatLeft;
	char _flatRight;
	char _drawDot;
	NSString* _eventEndTime;
	double _firstDayWidth;
	CGSize _textSize;

}

@property (assign) char flatLeft;                        //@synthesize flatLeft=_flatLeft - In the implementation block
@property (assign) char flatRight;                       //@synthesize flatRight=_flatRight - In the implementation block
@property (assign) char drawDot;                         //@synthesize drawDot=_drawDot - In the implementation block
@property (retain) NSString * eventEndTime;              //@synthesize eventEndTime=_eventEndTime - In the implementation block
@property (assign) double firstDayWidth;                 //@synthesize firstDayWidth=_firstDayWidth - In the implementation block
@property (assign) CGSize textSize;                      //@synthesize textSize=_textSize - In the implementation block
+(void)pushRoundedRectPath:(CGRect)arg1 inContext:(CGContextRef)arg2 flatLeft:(char)arg3 flatRight:(char)arg4 radius:(double)arg5 ;
+(CGColorRef)tentativeEventSelectionBackgroundColor;
+(id)backgroundImageForColor:(id)arg1 selected:(char)arg2 needsReply:(char)arg3 isStatusMaybe:(char)arg4 isAllDay:(char)arg5 flatLeft:(char)arg6 flatRight:(char)arg7 ;
+(CGColorRef)eventSelectionBackgroundColorRef;
+(CGColorRef)dimmedTextColor;
+(CGColorRef)tentativeTextColorRef;
+(CGColorRef)defaultDarkTextColorRefWithOpaque:(char)arg1 ;
+(void)pushRoundedRectPath:(CGRect)arg1 inContext:(CGContextRef)arg2 flatLeft:(char)arg3 flatRight:(char)arg4 ;
+(CGGradientRef)whiteGradient;
+(CGColorRef)tentativeDotColor;
-(CGSize)textSize;
-(void)setTextSize:(CGSize)arg1 ;
-(id)initWithWritingDirection:(long long)arg1 ;
-(void)drawRect;
-(void)setFlatLeft:(char)arg1 ;
-(void)setFlatRight:(char)arg1 ;
-(void)setDrawDot:(char)arg1 ;
-(void)setFirstDayWidth:(double)arg1 ;
-(char)flatLeft;
-(char)flatRight;
-(void)drawBackgroundInFrame:(CGRect)arg1 visibleRect:(CGRect)arg2 ;
-(char)drawDot;
-(NSString *)eventEndTime;
-(double)firstDayWidth;
-(void)setEventEndTime:(NSString *)arg1 ;
-(id)init;
@end

