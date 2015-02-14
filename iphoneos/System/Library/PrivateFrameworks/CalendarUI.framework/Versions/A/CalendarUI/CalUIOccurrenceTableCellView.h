/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:30 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class EKEvent, NSArray, NSImageView, NSTextField, NSImage;

@interface CalUIOccurrenceTableCellView : NSTableCellView {

	EKEvent* _event;
	NSArray* _detailsFields;
	NSImageView* _dotImageView;
	NSTextField* _titleField;
	NSImage* _dotImage;
	NSImage* _selectedDotImage;

}

@property (retain) EKEvent * event;                         //@synthesize event=_event - In the implementation block
@property (retain) NSArray * detailsFields;                 //@synthesize detailsFields=_detailsFields - In the implementation block
@property (retain) NSImageView * dotImageView;              //@synthesize dotImageView=_dotImageView - In the implementation block
@property (retain) NSTextField * titleField;                //@synthesize titleField=_titleField - In the implementation block
@property (retain) NSImage * dotImage;                      //@synthesize dotImage=_dotImage - In the implementation block
@property (retain) NSImage * selectedDotImage;              //@synthesize selectedDotImage=_selectedDotImage - In the implementation block
-(id)initWithEvent:(id)arg1 hideDateField:(char)arg2 hideTimeField:(char)arg3 hideLocationField:(char)arg4 hideAttendeeField:(char)arg5 ;
-(id)dotImageSelected:(char)arg1 ;
-(void)setDotImage:(NSImage *)arg1 ;
-(void)setSelectedDotImage:(NSImage *)arg1 ;
-(void)setDotImageView:(NSImageView *)arg1 ;
-(void)updateTitleFontIsSelected:(char)arg1 ;
-(id)topTimeFieldString;
-(id)bottomTimeFieldString;
-(void)setDetailsFields:(NSArray *)arg1 ;
-(NSArray *)detailsFields;
-(NSImageView *)dotImageView;
-(NSImage *)selectedDotImage;
-(NSImage *)dotImage;
-(id)dateStringForDate:(id)arg1 ;
-(id)timeStringForDate:(id)arg1 ;
-(char)isMultiDayEvent;
-(id)dateAndTimeStringForDate:(id)arg1 ;
-(id)timeStringWithClarifiedTimeZoneIfNecessary:(id)arg1 ;
-(id)effectiveEndDate;
-(NSTextField *)titleField;
-(void)setTitleField:(NSTextField *)arg1 ;
-(void)setBackgroundStyle:(long long)arg1 ;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
@end

