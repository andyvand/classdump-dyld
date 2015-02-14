/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:01:39 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AppKit/AppKit-Structs.h>
@class NSViewWindowBackingStoreBuffer, NSView;

@interface NSTextDragInfo : NSObject {

	CGRect indicatorViewRect;
	char savedImageValid;
	NSViewWindowBackingStoreBuffer* cacheFromUnderIndicator;
	char draggingLinkedFile;
	NSView* dragAnimationOverlay;

}

@property (assign,nonatomic) CGRect indicatorViewRect; 
@property (assign,getter=isSavedImageValid,nonatomic) char savedImageValid; 
@property (nonatomic,retain) NSViewWindowBackingStoreBuffer * cacheFromUnderIndicator; 
@property (assign,getter=isDraggingLinkedFile,nonatomic) char draggingLinkedFile; 
@property (assign,nonatomic) NSView * dragAnimationOverlay; 
-(void)dealloc;
-(CGRect)indicatorViewRect;
-(char)isSavedImageValid;
-(NSViewWindowBackingStoreBuffer *)cacheFromUnderIndicator;
-(void)setSavedImageValid:(char)arg1 ;
-(void)setCacheFromUnderIndicator:(NSViewWindowBackingStoreBuffer *)arg1 ;
-(void)setIndicatorViewRect:(CGRect)arg1 ;
-(void)setDraggingLinkedFile:(char)arg1 ;
-(char)isDraggingLinkedFile;
-(NSView *)dragAnimationOverlay;
-(void)setDragAnimationOverlay:(NSView *)arg1 ;
@end

