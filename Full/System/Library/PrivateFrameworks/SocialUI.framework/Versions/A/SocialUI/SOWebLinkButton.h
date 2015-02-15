/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:34:03 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppKit/NSButton.h>

@class NSDictionary;

@interface SOWebLinkButton : NSButton {

	NSDictionary* _attributes;
	NSDictionary* _mouseOverAttributes;

}

@property (nonatomic,retain) NSDictionary * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSDictionary * mouseOverAttributes;              //@synthesize mouseOverAttributes=_mouseOverAttributes - In the implementation block
+(Class)cellClass;
-(void)_initializeButtonStyle;
-(void)updateAttributedTitle:(char)arg1 ;
-(void)setMouseOverAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)mouseOverAttributes;
-(id)init;
-(void)setFont:(id)arg1 ;
-(void)setTitle:(id)arg1 ;
-(void)sizeToFit;
-(void)setAlignment:(unsigned long long)arg1 ;
-(void)setAttributedTitle:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(void)awakeFromNib;
-(void)updateTrackingAreas;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)cursorUpdate:(id)arg1 ;
@end
