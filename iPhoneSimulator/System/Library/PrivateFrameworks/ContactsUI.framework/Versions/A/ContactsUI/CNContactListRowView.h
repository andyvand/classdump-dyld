/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:49:59 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ContactsUI.framework/Versions/A/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <AppKit/NSTableRowView.h>

@class NSColor;

@interface CNContactListRowView : NSTableRowView {

	char _shouldDrawBackground;
	char _shouldDrawBottomGridLine;
	NSColor* _bottomGridLineColor;

}

@property (assign) char shouldDrawBackground;                  //@synthesize shouldDrawBackground=_shouldDrawBackground - In the implementation block
@property (assign) char shouldDrawBottomGridLine;              //@synthesize shouldDrawBottomGridLine=_shouldDrawBottomGridLine - In the implementation block
@property (copy) NSColor * bottomGridLineColor;                //@synthesize bottomGridLineColor=_bottomGridLineColor - In the implementation block
+(id)postHeaderRowView;
+(id)headerRowView;
+(id)rowView;
-(void)setShouldDrawBottomGridLine:(char)arg1 ;
-(void)setBottomGridLineColor:(NSColor *)arg1 ;
-(char)shouldDrawBottomGridLine;
-(NSColor *)bottomGridLineColor;
-(char)shouldDrawBackground;
-(void)setShouldDrawBackground:(char)arg1 ;
-(char)allowsVibrancy;
-(void)drawSeparatorInRect:(CGRect)arg1 ;
@end

