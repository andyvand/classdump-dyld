/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/PlugIns/com.apple.RemindersNC.appex/Contents/MacOS/com.apple.RemindersNC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSTextField.h>

@class RNCTableCellView;

@interface RNCTextField : NSTextField {

	int _style;
	RNCTableCellView* _controller;

}

@property (assign) int style;                                  //@synthesize style=_style - In the implementation block
@property (__weak) RNCTableCellView * controller;              //@synthesize controller=_controller - In the implementation block
+(id)fontForStyle:(int)arg1 ;
+(id)textColorForStyle:(int)arg1 ;
-(int)style;
-(RNCTableCellView *)controller;
-(char)wantsLayer;
-(id)initWithController:(id)arg1 ;
-(char)drawsBackground;
-(void)setController:(RNCTableCellView *)arg1 ;
-(void)setStyle:(int)arg1 ;
@end
