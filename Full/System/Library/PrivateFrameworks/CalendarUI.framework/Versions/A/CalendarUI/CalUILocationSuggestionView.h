/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:26:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTableCellView.h>

@class CalUILocationSuggestionTextField;

@interface CalUILocationSuggestionView : NSTableCellView {

	char _isSelected;
	CalUILocationSuggestionTextField* _titleField;

}

@property (assign) char isSelected;                                            //@synthesize isSelected=_isSelected - In the implementation block
@property (retain) CalUILocationSuggestionTextField * titleField;              //@synthesize titleField=_titleField - In the implementation block
-(void)setIsSelected:(char)arg1 ;
-(CalUILocationSuggestionTextField *)titleField;
-(void)setTitleField:(CalUILocationSuggestionTextField *)arg1 ;
-(char)isSelected;
@end

