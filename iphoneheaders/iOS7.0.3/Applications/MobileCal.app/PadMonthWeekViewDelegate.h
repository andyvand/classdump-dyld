/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:35:18 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol PadMonthWeekViewDelegate <NSObject>
@optional
-(void)padMonthWeekView:(id)arg1 touchesBegan:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesMoved:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesEnded:(id)arg2 withEvent:(id)arg3;
-(void)padMonthWeekView:(id)arg1 touchesCancelled:(id)arg2 withEvent:(id)arg3;
-(void)didCompleteBackgroundOccurrenceRenderingForPadMonthWeekView:(id)arg1;

@required
-(void)padMonthWeekView:(id)arg1 didTapOccurrence:(id)arg2 onDay:(id)arg3;
@end
