/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSTextFieldCell.h>

@class NSProgressIndicator;

@interface CalCalendarTitleCell : NSTextFieldCell {

	NSProgressIndicator* _progressIndicator;
	int _alertState;
	char _isMouseOver;
	char _isMouseDown;
	unsigned long long _badgeCount;
	unsigned long long _badgeHeight;
	unsigned long long _badgeMargins;
	unsigned long long _badgeWidthForSingleDigit;
	char _isMouseOverAlert;
	char _isMouseDelayHovered;
	char _isCalendarSharable;
	char _isInspectedNode;

}

@property (assign) char isMouseOverAlert;                 //@synthesize isMouseOverAlert=_isMouseOverAlert - In the implementation block
@property (assign) char isMouseDelayHovered;              //@synthesize isMouseDelayHovered=_isMouseDelayHovered - In the implementation block
@property (assign) char isCalendarSharable;               //@synthesize isCalendarSharable=_isCalendarSharable - In the implementation block
@property (assign) char isInspectedNode;                  //@synthesize isInspectedNode=_isInspectedNode - In the implementation block
-(void)setIsMouseOverAlert:(char)arg1 ;
-(void)setIsMouseDelayHovered:(char)arg1 ;
-(void)controlTintChanged:(id)arg1 ;
-(id)badgeTextColor;
-(id)badgeTextAttributes;
-(char)isMouseOverAlert;
-(id)badgeColor;
-(id)indicatorColor;
-(double)badgeWidth;
-(void)drawIndicator:(id)arg1 circled:(char)arg2 cellFrame:(CGRect*)arg3 ;
-(char)isMouseDelayHovered;
-(char)isCalendarSharable;
-(char)isInspectedNode;
-(void)drawBadgeCenteredInRect:(CGRect)arg1 ;
-(void)positionProgressIndicatorInRect:(CGRect)arg1 ;
-(unsigned long long)badgeCount;
-(void)setBadgeCount:(unsigned long long)arg1 ;
-(int)alertState;
-(void)setAlertState:(int)arg1 ;
-(void)setIsCalendarSharable:(char)arg1 ;
-(void)setIsInspectedNode:(char)arg1 ;
-(void)setMouseDown:(char)arg1 ;
-(void)setProgressIndicator:(id)arg1 ;
-(void)setMouseOver:(char)arg1 ;
-(char)isMouseOver;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(id)progressIndicator;
-(char)isMouseDown;
@end
