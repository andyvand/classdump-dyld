/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:52:19 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Reminders.app/Contents/MacOS/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Reminders/Reminders-Structs.h>
#import <AppKit/NSTableCellView.h>

@class CardContentViewController;

@interface ReminderGroupCellView : NSTableCellView {

	CardContentViewController* _controller;

}

@property (__weak) CardContentViewController * controller;              //@synthesize controller=_controller - In the implementation block
-(id)initWithFrame:(CGRect)arg1 controller:(id)arg2 groupObject:(id)arg3 ;
-(CardContentViewController *)controller;
-(void)setController:(CardContentViewController *)arg1 ;
@end
