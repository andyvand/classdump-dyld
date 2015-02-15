/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:23:53 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Calendar.app/Contents/MacOS/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Calendar/Calendar-Structs.h>
#import <AppKit/NSWindow.h>

@class CALMainController, NSString;

@interface CALWindow : NSWindow {

	CALMainController* _controller;
	NSString* _defaultTitle;
	double _defaultTitleWidth;

}

@property (__weak,readonly) CALMainController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSString * defaultTitle;                    //@synthesize defaultTitle=_defaultTitle - In the implementation block
@property (assign) double defaultTitleWidth;                             //@synthesize defaultTitleWidth=_defaultTitleWidth - In the implementation block
-(void)setDefaultTitle:(NSString *)arg1 ;
-(void)setDefaultTitleWidth:(double)arg1 ;
-(double)defaultTitleWidth;
-(void)setTitleUpdating:(char)arg1 ;
-(NSString *)defaultTitle;
-(id)toolbar;
-(CALMainController *)controller;
-(void)sendEvent:(id)arg1 ;
-(void)orderWindow:(long long)arg1 relativeTo:(long long)arg2 ;
-(char)validateMenuItem:(id)arg1 ;
-(void)close;
-(id)initWithController:(id)arg1 ;
-(void)becomeMainWindow;
-(CGRect)_growBoxRect;
-(void)updateUserActivityState:(id)arg1 ;
-(void)restoreUserActivityState:(id)arg1 ;
-(CGRect)_customTitleFrame;
@end
