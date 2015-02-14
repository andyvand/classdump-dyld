/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:27 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSTokenField.h>

@class NSTrackingArea, NSWindow;

@interface SOTokenField : NSTokenField {

	NSTrackingArea* _tokenFieldTrackingArea;
	char _needsRefresh;
	NSWindow* _axChild;

}

@property (assign,nonatomic) NSWindow * axChild;              //@synthesize axChild=_axChild - In the implementation block
@property (assign,nonatomic) char needsRefresh;               //@synthesize needsRefresh=_needsRefresh - In the implementation block
-(void)tokenFieldNeedsRefresh;
-(NSWindow *)axChild;
-(void)_commonSOTokenFieldInit;
-(void)setAxChild:(NSWindow *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(char)needsRefresh;
-(void)setNeedsRefresh:(char)arg1 ;
@end

