/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:50:51 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/CalendarUI.framework/Versions/A/CalendarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextFieldCell.h>

@class CalUITextFieldEditor;

@interface CalUITextFieldCell : NSTextFieldCell {

	CalUITextFieldEditor* _fieldEditor;

}

@property (retain) CalUITextFieldEditor * fieldEditor;              //@synthesize fieldEditor=_fieldEditor - In the implementation block
-(CalUITextFieldEditor *)fieldEditor;
-(id)initWithFont:(id)arg1 Color:(id)arg2 LinkColor:(id)arg3 ;
-(void)setFieldEditor:(CalUITextFieldEditor *)arg1 ;
-(id)fieldEditorForView:(id)arg1 ;
@end

