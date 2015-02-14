/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:38 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSImage, NSString, NSURL;

@interface PUKDiskPickerHorizontalCell : NSActionCell {

	CGRect _bounds;
	char _highlightable;
	NSImage* _icon;
	NSString* _subtitle;
	NSString* _details;
	NSURL* _url;
	char _enableDuringTracking;
	id _delegate;
	id _popover;

}

@property (retain) NSImage * icon;                 //@synthesize icon=_icon - In the implementation block
@property (copy) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (copy) NSString * details;               //@synthesize details=_details - In the implementation block
@property (retain) NSURL * URL;                    //@synthesize url=_url - In the implementation block
-(id)_subtitleAttributes;
-(void)setDetails:(NSString *)arg1 ;
-(CGRect)_completeTextRectForBounds:(CGRect)arg1 ;
-(id)_titleAttributesForExpansion:(char)arg1 ;
-(CGRect)_horizontallyAdjustedTextSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(id)_detailsAttributes;
-(CGRect)subtitleRectForBounds:(CGRect)arg1 ;
-(CGRect)detailsRectForBounds:(CGRect)arg1 ;
-(CGRect)iconRectForBounds:(CGRect)arg1 ;
-(NSString *)details;
-(char)isHighlightable;
-(void)setHightable:(char)arg1 ;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(void)setState:(long long)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)popoverWillClose:(id)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

