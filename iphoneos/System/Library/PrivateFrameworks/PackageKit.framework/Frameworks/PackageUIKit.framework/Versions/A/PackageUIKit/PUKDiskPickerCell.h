/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:00:41 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/PackageKit.framework/Frameworks/PackageUIKit.framework/Versions/A/PackageUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PackageUIKit/PackageUIKit-Structs.h>
#import <AppKit/NSActionCell.h>

@class NSImage, NSString, NSURL, NSButtonCell;

@interface PUKDiskPickerCell : NSActionCell {

	NSImage* _icon;
	NSString* _slug;
	NSString* _subtitle;
	NSString* _details;
	NSURL* _url;
	NSButtonCell* _actionButtonCell;
	CGRect _buttonTrackingRect;
	char _enableDuringTracking;
	id _delegate;

}

@property (retain) NSImage * icon;                   //@synthesize icon=_icon - In the implementation block
@property (copy) NSString * slug;                    //@synthesize slug=_slug - In the implementation block
@property (copy) NSString * subtitle;                //@synthesize subtitle=_subtitle - In the implementation block
@property (copy) NSString * details;                 //@synthesize details=_details - In the implementation block
@property (copy) NSString * actionName; 
@property (retain) NSURL * URL;                      //@synthesize url=_url - In the implementation block
-(NSString *)actionName;
-(id)_subtitleAttributes;
-(void)setSlug:(NSString *)arg1 ;
-(void)setDetails:(NSString *)arg1 ;
-(CGRect)_completeTextRectForBounds:(CGRect)arg1 ;
-(id)_titleAttributesForExpansion:(char)arg1 ;
-(CGRect)_horizontallyAdjustedTextSize:(CGSize)arg1 inBounds:(CGRect)arg2 ;
-(CGRect)slugRectForBounds:(CGRect)arg1 ;
-(CGRect)_rectExcludingActionButton:(CGRect)arg1 inBounds:(CGRect)arg2 ;
-(id)_slugAttributes;
-(id)_detailsAttributes;
-(CGRect)subtitleRectForBounds:(CGRect)arg1 ;
-(CGRect)detailsRectForBounds:(CGRect)arg1 ;
-(CGRect)actionButtonRectForBounds:(CGRect)arg1 ;
-(CGRect)iconRectForBounds:(CGRect)arg1 ;
-(void)didClickActionButton:(id)arg1 ;
-(NSString *)slug;
-(NSString *)details;
-(void)dealloc;
-(id)description;
-(NSURL *)URL;
-(char)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControlView:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(void)setIcon:(NSImage *)arg1 ;
-(NSImage *)icon;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(void)setControlSize:(unsigned long long)arg1 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(CGRect)expansionFrameWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)drawWithExpansionFrame:(CGRect)arg1 inView:(id)arg2 ;
-(char)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(char)arg4 ;
-(char)startTrackingAt:(CGPoint)arg1 inView:(id)arg2 ;
-(char)continueTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 ;
-(void)stopTracking:(CGPoint)arg1 at:(CGPoint)arg2 inView:(id)arg3 mouseIsUp:(char)arg4 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setActionName:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

