/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:57 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/CalUIListOccurrenceCell.h>

@class NSTextField;

@interface CalUISearchListOccurrenceCell : CalUIListOccurrenceCell {

	NSTextField* _dateField;
	char _isSelected;

}

@property (assign) char isSelected;              //@synthesize isSelected=_isSelected - In the implementation block
+(Class)expectedObjectClass;
-(Class)expectedObjectClass;
-(void)_objectValueDidChange;
-(void)_configureWithOccurrence:(id)arg1 ;
-(void)setIsSelected:(char)arg1 ;
-(long long)backgroundStyle;
-(void)_commonInit;
-(void)awakeFromNib;
-(char)isSelected;
@end

