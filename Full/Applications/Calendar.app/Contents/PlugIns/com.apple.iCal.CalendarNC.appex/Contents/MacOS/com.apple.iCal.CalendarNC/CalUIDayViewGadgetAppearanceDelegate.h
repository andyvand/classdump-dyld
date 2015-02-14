/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/PlugIns/com.apple.iCal.CalendarNC.appex/Contents/MacOS/com.apple.iCal.CalendarNC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSFont, NSColor, NSString;


@protocol CalUIDayViewGadgetAppearanceDelegate <NSObject>
@property (readonly) double heightBeforeFirstEvent; 
@property (readonly) double heightAfterLastEvent; 
@property (readonly) char shouldDisplayTimeline; 
@property (readonly) double timelineWidth; 
@property (nonatomic,readonly) NSFont * timelineFont; 
@property (nonatomic,readonly) unsigned long long numberOfEmptyHoursDisplayed; 
@property (readonly) char shouldClip; 
@property (readonly) double hourHeight; 
@property (readonly) double hourLineOutdent; 
@property (readonly) double verticalOffset; 
@property (readonly) double horizontalOffset; 
@property (readonly) double hourLabelTopMargin; 
@property (readonly) double hourLabelWidth; 
@property (readonly) double hourLabelOutdent; 
@property (readonly) NSColor * hourLineColor; 
@property (readonly) NSString * dateFormat; 
@property (readonly) NSColor * nowLineColor; 
@property (readonly) double nowLineHeight; 
@property (readonly) double nowCircleRadius; 
@property (readonly) NSString * nowLabelFormat; 
@property (readonly) NSString * truncatedNowLabelFormat; 
@required
-(char)shouldDisplayTimeline;
-(double)hourLabelTopMargin;
-(double)hourLabelWidth;
-(NSString *)nowLabelFormat;
-(double)horizontalOffset;
-(double)heightAfterLastEvent;
-(double)hourHeight;
-(double)heightBeforeFirstEvent;
-(double)nowLineHeight;
-(NSColor *)hourLineColor;
-(NSFont *)timelineFont;
-(double)timelineWidth;
-(NSColor *)nowLineColor;
-(double)nowCircleRadius;
-(double)hourLineOutdent;
-(NSString *)truncatedNowLabelFormat;
-(char)shouldClip;
-(unsigned long long)numberOfEmptyHoursDisplayed;
-(double)hourLabelOutdent;
-(id)fontForEventOccurrencesWithWeight:(int)arg1;
-(char)shouldShowTime;
-(id)locationFont;
-(double)verticalOffset;
-(id)titleFont;
-(long long)backgroundStyle;
-(NSString *)dateFormat;

@end

