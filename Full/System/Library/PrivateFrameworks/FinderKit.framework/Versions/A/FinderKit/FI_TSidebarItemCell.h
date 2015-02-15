/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 2:28:36 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/FinderKit.framework/Versions/A/FinderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FinderKit/FinderKit-Structs.h>
#import <AppKit/NSImageTextFieldCell.h>

@class NSButtonCell;

@interface FI_TSidebarItemCell : NSImageTextFieldCell {

	TFENode* _node;
	int _zoneKind;
	BOOL _selected;
	NSButtonCell* _actionButtonCell;
	BOOL _rolloverActionButton;
	BOOL _trackingActionButton;
	int _actionKind;
	BOOL _isEditing;
	BOOL _hasCloudIcon;

}

@property (assign,nonatomic) BOOL selected;                  //@synthesize selected=_selected - In the implementation block
@property (nonatomic,readonly) int actionKind;               //@synthesize actionKind=_actionKind - In the implementation block
@property (nonatomic,readonly) int zoneKind;                 //@synthesize zoneKind=_zoneKind - In the implementation block
@property (assign,nonatomic) BOOL isEditing;                 //@synthesize isEditing=_isEditing - In the implementation block
@property (assign,nonatomic) BOOL hasCloudIcon;              //@synthesize hasCloudIcon=_hasCloudIcon - In the implementation block
+(void)drawActionButton:(CGRect)arg1 inContext:(CGContextRef)arg2 inView:(id)arg3 actionButtonCell:(id)arg4 action:(int)arg5 mouseState:(int)arg6 highlighted:(BOOL)arg7 ;
+(const TFENode*)nodeForItem:(id)arg1 ;
+(TString*)imageName:(const TString*)arg1 forSize:(CGSize)arg2 ;
+(void)drawSidebarIcon:(id)arg1 inRect:(CGRect)arg2 inContext:(CGContextRef)arg3 highlighted:(BOOL)arg4 ;
+(CGRect)roughActionButtonRectForCell:(const CGRect*)arg1 ;
+(TFCGImage*)actionButtonLegacyCGImage:(long long)arg1 ;
+(unsigned long long)frameRateMicroseconds;
+(char)prefersTrackingUntilMouseUp;
-(id)actionButtonCell;
-(id)sidebar;
-(int)actionKind;
-(BOOL)isZone;
-(double)optimalWidthForHeight:(double)arg1 ;
-(void)prepareForDisplay:(int)arg1 isICloudLibrary:(BOOL)arg2 ;
-(int)zoneKind;
-(id)initWithNode:(const TFENode*)arg1 orZone:(int)arg2 ;
-(id)dataForIdentifier:(id)arg1 ;
-(CGRect)actionButtonFrameForCellFrame:(CGRect)arg1 ;
-(TString*)imageName:(const TString*)arg1 ;
-(BOOL)hasCloudIcon;
-(void)drawActionButton:(CGRect)arg1 inView:(id)arg2 ;
-(int)actionButtonMouseState;
-(void)actionButtonCoreUIOrLegacyImage:(int)arg1 coreUIName:(const _CFString*)arg2 appKitImageName:(id*)arg3 color:(TColor*)arg4 legacyImageID:(long long*)arg5 animate:(BOOL*)arg6 ;
-(id)actionButtonLegacyImage;
-(void)startAnimatingIfNeeded;
-(void)stopAnimatingIfNeeded;
-(void)setHasCloudIcon:(BOOL)arg1 ;
-(void)invalidateActionButtonAreaWithEvent:(id)arg1 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)hasActionButton;
-(void)dealloc;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)name;
-(id)accessibilityAttributeNames;
-(id)accessibilityAttributeValue:(id)arg1 ;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityIsAttributeSettable:(id)arg1 ;
-(void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2 ;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setControlView:(id)arg1 ;
-(CGSize)cellSizeForBounds:(CGRect)arg1 ;
-(BOOL)isEditing;
-(void)drawWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(unsigned long long)hitTestForEvent:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 ;
-(CGRect)titleRectForBounds:(CGRect)arg1 ;
-(void)drawInteriorWithFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(BOOL)trackMouse:(id)arg1 inRect:(CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4 ;
-(void)addTrackingAreasForView:(id)arg1 inFrame:(CGRect)arg2 withUserInfo:(id)arg3 mouseLocation:(CGPoint)arg4 ;
-(id)sidebarController;
-(void)setSelected:(BOOL)arg1 ;
-(long long)rowIndex;
@end

