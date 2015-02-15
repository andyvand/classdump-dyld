/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/InspectorGadget.h>
#import <Reminders/NSTextViewDelegate.h>

@class NSTextView, NSString;

@interface IGTextView : InspectorGadget <NSTextViewDelegate> {

	double _textViewMinHeight;
	double _textViewMaxHeight;
	double _oldHeight;

}

@property (retain) NSTextView * view; 
@property (assign) double textViewMinHeight;                        //@synthesize textViewMinHeight=_textViewMinHeight - In the implementation block
@property (assign) double textViewMaxHeight;                        //@synthesize textViewMaxHeight=_textViewMaxHeight - In the implementation block
@property (assign) double oldHeight;                                //@synthesize oldHeight=_oldHeight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)numberOfVisibleRows;
-(void)syncFields;
-(double)oldHeight;
-(void)setOldHeight:(double)arg1 ;
-(id)initWithLabel:(id)arg1 ;
-(double)textViewMinHeight;
-(void)setTextViewMinHeight:(double)arg1 ;
-(double)textViewMaxHeight;
-(void)setTextViewMaxHeight:(double)arg1 ;
-(void)sizeToFit;
-(void)textDidChange:(id)arg1 ;
-(id)textView;
-(void)textDidEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 doCommandBySelector:(SEL)arg2 ;
@end
