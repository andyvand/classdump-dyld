/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:11:03 AM Central European Standard Time
* Operating System: Versie 10.10.2 (build 14C109)
* Image Source: /Applications/HWMonitor.app/Contents/MacOS/HWMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <HWMonitor/PopupBasicCell.h>

@class NSTextField;

@interface PopupSensorCell : PopupBasicCell {

	NSTextField* _subtitleField;
	NSTextField* _valueField;

}

@property (assign) NSTextField * subtitleField;              //@synthesize subtitleField=_subtitleField - In the implementation block
@property (assign) NSTextField * valueField;                 //@synthesize valueField=_valueField - In the implementation block
+(void)destroyGlobalPopover;
+(id)globalPopover;
+(void)setGlobalPopoverDelegate:(id)arg1 ;
+(void)setGlobalPopover:(id)arg1 ;
-(void)colorThemeChanged:(id)arg1 ;
-(void)deallocate;
-(void)setSubtitleField:(NSTextField *)arg1 ;
-(void)setValueField:(NSTextField *)arg1 ;
-(NSTextField *)subtitleField;
-(NSTextField *)valueField;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)initialize;
@end

