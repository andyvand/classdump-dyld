/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CalUIDotOccurrenceDelegate <CalUIOccurrenceDelegate>
@optional
-(id)dateColor;
-(id)titleColor;

@required
-(char)occurrenceHasValidColumnLayout:(id)arg1;
-(char)occurrenceAlwaysDrawsBackground:(id)arg1;
-(char)shouldOccurrenceDrawBackground:(id)arg1;
-(char)shouldOccurrenceDrawDot:(id)arg1;
-(double)desiredHeightForOccurrence:(id)arg1;
-(char)shouldOccurrenceShowStartTime:(id)arg1;
-(char)shouldOccurrenceShowEndTime:(id)arg1;
-(char)shouldOccurrenceShowAllDayString:(id)arg1;

@end

