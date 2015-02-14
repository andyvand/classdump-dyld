/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:20 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalendarUI-Structs.h>
#import <CalendarUI/CalUILocationSuggestionView.h>

@class CalUILocationSuggestionTextField, CalUILocationSuggestionIconView;

@interface CalUILocationSuggestionTextView : CalUILocationSuggestionView {

	CalUILocationSuggestionTextField* _subtextField;
	CalUILocationSuggestionIconView* _iconView;

}

@property (retain) CalUILocationSuggestionTextField * subtextField;              //@synthesize subtextField=_subtextField - In the implementation block
@property (retain) CalUILocationSuggestionIconView * iconView;                   //@synthesize iconView=_iconView - In the implementation block
-(void)setIsSelected:(char)arg1 ;
-(void)setSubtextField:(CalUILocationSuggestionTextField *)arg1 ;
-(CalUILocationSuggestionTextField *)subtextField;
-(void)updateWithLocation:(id)arg1 subtextString:(id)arg2 icon:(id)arg3 progressIndicator:(id)arg4 frame:(CGRect)arg5 ;
-(id)init;
-(void)dealloc;
-(CalUILocationSuggestionIconView *)iconView;
-(void)setIconView:(CalUILocationSuggestionIconView *)arg1 ;
@end

