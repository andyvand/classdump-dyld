/*
* This header is generated by classdump-dyld 0.1
* on Wednesday, November 27, 2013 at 10:34:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Copilot.app/Copilot
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Copilot/Copilot-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSTimer;

@interface CPClockView : UIView {

	UILabel* _timeLabel;
	UILabel* _dateLabel;
	NSTimer* _clockUpdateTimer;

}
-(void)updateContentAndRescheduleTimer;
-(void)stopUpdateTimer;
-(void)rescheduleUpdateTimer;
-(void)updateDate;
-(id)dateAttributedString;
-(void)buildUI;
-(void)updateContent;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)updateTime;
-(void).cxx_destruct;
@end
