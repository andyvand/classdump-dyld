/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:27:58 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <SocialUI/SOBuddyOutlineViewBaseRowView.h>

@class NSImageView, NSTextField;

@interface SOBuddyOutlineViewRowView : SOBuddyOutlineViewBaseRowView {

	char _shouldDrawEtchedSeparator;
	NSImageView* _availabilityImageView;
	NSTextField* _statusField;

}

@property (retain) NSImageView * availabilityImageView;              //@synthesize availabilityImageView=_availabilityImageView - In the implementation block
@property (retain) NSTextField * statusField;                        //@synthesize statusField=_statusField - In the implementation block
@property (assign) char shouldDrawEtchedSeparator;                   //@synthesize shouldDrawEtchedSeparator=_shouldDrawEtchedSeparator - In the implementation block
+(id)defaultStatusAttributes;
-(void)selectedDidChange;
-(void)setShouldDrawEtchedSeparator:(char)arg1 ;
-(NSImageView *)availabilityImageView;
-(char)shouldDrawEtchedSeparator;
-(void)setAvailabilityImageView:(NSImageView *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStatusField:(NSTextField *)arg1 ;
-(NSTextField *)statusField;
@end

