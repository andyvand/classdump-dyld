/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:31 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalendarUI/CalUIResizingTextField.h>
#import <CalendarUI/NSTextViewDelegate.h>
#import <CalendarUI/CalUIAutocompletingField.h>

@class NSString;

@interface CalUILocationTextField : CalUIResizingTextField <NSTextViewDelegate, CalUIAutocompletingField> {

	char _expanded;
	double _menuWidth;

}

@property (getter=isExpanded) char expanded;                        //@synthesize expanded=_expanded - In the implementation block
@property (assign) double menuWidth;                                //@synthesize menuWidth=_menuWidth - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectValueAsArray;
-(void)configureText;
-(double)menuWidth;
-(void)setMenuWidth:(double)arg1 ;
-(id)init;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)mouseDown:(id)arg1 ;
-(void)setObjectValue:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(id)textView:(id)arg1 menu:(id)arg2 forEvent:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(char)isExpanded;
-(void)setExpanded:(char)arg1 ;
@end

