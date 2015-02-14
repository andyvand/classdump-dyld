/*
* This header is generated by classdump-dyld 0.7
* on Saturday, February 14, 2015 at 11:59:58 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/SocialUI.framework/Versions/A/SocialUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SocialUI/SocialUI-Structs.h>
#import <AppKit/NSImageView.h>

@class NSImage, BuddyPicture, NSString, CALayer;

@interface SOBuddyPictureView : NSImageView {

	CGPoint _lastMouseDownLocation;
	char _animates;
	char _allowsDrag;
	char _displaysImageCopy;
	NSImage* _placeholderImage;
	BuddyPicture* _buddyPicture;
	NSString* _baseFilename;
	SEL _doubleAction;
	CALayer* _contentSublayer;

}

@property (nonatomic,copy) NSImage * placeholderImage;                 //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (nonatomic,retain) BuddyPicture * buddyPicture;              //@synthesize buddyPicture=_buddyPicture - In the implementation block
@property (nonatomic,copy) NSString * baseFilename;                    //@synthesize baseFilename=_baseFilename - In the implementation block
@property (assign,nonatomic) char allowsDrag;                          //@synthesize allowsDrag=_allowsDrag - In the implementation block
@property (assign,nonatomic) SEL doubleAction;                         //@synthesize doubleAction=_doubleAction - In the implementation block
@property (assign,nonatomic) char displaysImageCopy;                   //@synthesize displaysImageCopy=_displaysImageCopy - In the implementation block
@property (assign,nonatomic) char animates;                            //@synthesize animates=_animates - In the implementation block
@property (nonatomic,retain) CALayer * contentSublayer;                //@synthesize contentSublayer=_contentSublayer - In the implementation block
-(BuddyPicture *)buddyPicture;
-(void)_buddyPictureNeedsDrawFromAnimate:(id)arg1 ;
-(void)_buddyPictureAnimationStateDidChange;
-(void)setContentSublayer:(CALayer *)arg1 ;
-(void)_commonBuddyPictureViewInit;
-(void)setBuddyPicture:(BuddyPicture *)arg1 ;
-(void)_sendDoubleAction;
-(CALayer *)contentSublayer;
-(NSImage *)placeholderImage;
-(char)allowsDrag;
-(id)_dragImageOfSize:(CGSize)arg1 ;
-(NSString *)baseFilename;
-(void)_sendAction:(SEL)arg1 ;
-(void)setPlaceholderImage:(NSImage *)arg1 ;
-(void)setDisplaysImageCopy:(char)arg1 ;
-(id)imagePreservingOriginalImage;
-(void)setBaseFilename:(NSString *)arg1 ;
-(void)setAllowsDrag:(char)arg1 ;
-(char)displaysImageCopy;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)image;
-(void)setImage:(id)arg1 ;
-(id)accessibilityAttributeNames;
-(id)accessibilityActionDescription:(id)arg1 ;
-(char)accessibilityShouldUseUniqueId;
-(id)accessibilityRoleAttribute;
-(id)accessibilityActionNames;
-(void)accessibilityPerformAction:(id)arg1 ;
-(id)accessibilityDescriptionAttribute;
-(char)_accessibilityIsTableViewDescendant;
-(void)layout;
-(void)performClick:(id)arg1 ;
-(void)updateLayer;
-(char)validateMenuItem:(id)arg1 ;
-(char)wantsUpdateLayer;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(SEL)doubleAction;
-(void)setDoubleAction:(SEL)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)copy:(id)arg1 ;
-(void)cut:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)_sendAction;
-(void)concludeDragOperation:(id)arg1 ;
-(void)setAnimates:(char)arg1 ;
-(void)delete:(id)arg1 ;
-(void)_setImageAndNotifyTarget:(id)arg1 ;
-(char)animates;
-(void)viewDidChangeBackingProperties;
@end

