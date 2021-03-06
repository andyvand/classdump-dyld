/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 10:12:18 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /Applications/Utilities/Activity Monitor.app/Contents/MacOS/Activity Monitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Activity Monitor/Activity Monitor-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSImage, NSColor;

@interface ImageTextCell : NSActionCell {

	NSImage* _image;
	NSColor* _textColor;

}
-(id)init;
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initTextCell:(id)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)textColor;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
@end

