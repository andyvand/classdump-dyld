/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 12:16:00 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/Quartz.framework/Versions/A/Frameworks/ImageKit.framework/Versions/A/ImageKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ImageKit/ImageKit-Structs.h>
#import <AppKit/NSView.h>

@class IKNRootLayer, IKNImageLayer, IKNImageViewHandler, IKStatusLayer, NSArray, NSColor, CALayer, NSString;

@interface IKNImageView : NSView {

	IKNRootLayer* _rootLayer;
	IKNImageLayer* _imageLayer;
	IKNImageViewHandler* _imageViewHandler;
	double _rotation;
	IKStatusLayer* _statusLayer;
	NSArray* _selections;
	char _isDoubleClickEvent;
	id _delegate;
	NSColor* _backgroundColor;
	char _enabled;
	char _wasAcceptingMouseEvents;
	long long _trackingRectTag;
	double _progress;
	CGImageRef _cgImage;

}

@property (assign) id delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (readonly) IKNImageViewHandler * imageViewHandler;              //@synthesize imageViewHandler=_imageViewHandler - In the implementation block
@property (readonly) CALayer * rootLayer;                                 //@synthesize rootLayer=_rootLayer - In the implementation block
@property (readonly) IKNImageLayer * imageLayer;                          //@synthesize imageLayer=_imageLayer - In the implementation block
@property (assign) double rotation; 
@property (assign) NSArray * selections;                                  //@synthesize selections=_selections - In the implementation block
@property (assign) CGRect selectionRect; 
@property (readonly) CGSize imageSize; 
@property (assign) NSColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign) long long resolution; 
@property (copy) NSString * statusText; 
@property (assign) double progress;                                       //@synthesize progress=_progress - In the implementation block
@property (assign) char enabled;                                          //@synthesize enabled=_enabled - In the implementation block
@property (assign) char selectionsCanRotate; 
@property (assign) char singleSelection; 
@property (assign) char selectionsCanBeModified; 
@property (assign) char forceSelectionInsideView; 
+(CGImageRef)copyImageFromURL:(id)arg1 index:(long long)arg2 ;
+(CGImageRef)copyImageFromURL:(id)arg1 index:(long long)arg2 orientation:(long long*)arg3 ;
-(char)enabled;
-(void)setSelectionRect:(CGRect)arg1 ;
-(IKNImageLayer *)imageLayer;
-(void)setImageWithURL:(id)arg1 ;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 ;
-(CGRect)selectionRect;
-(void)dumpLayer:(id)arg1 prefix:(id)arg2 verbose:(char)arg3 ;
-(void)dumpLayer:(id)arg1 prefix:(id)arg2 ;
-(void)setOverlay:(id)arg1 forType:(id)arg2 ;
-(void)debugLayerTree:(id)arg1 ;
-(void)installStatusLayer;
-(void)resizeStatusLayer;
-(void)removeStatusLayer;
-(long long)resolution;
-(void)setNoImageSize:(CGSize)arg1 ;
-(void)installAlphaLayerWithGray:(double)arg1 alpha:(double)arg2 ;
-(void)removeAlphaLayer;
-(IKNImageViewHandler *)imageViewHandler;
-(void)createRootLayer;
-(void)createImageLayer;
-(void)setCGImage:(CGImageRef)arg1 properties:(id)arg2 ;
-(void)adjustToViewFrame;
-(void)deleteAllSelections;
-(void)hideAllSelections;
-(void)setImage:(CGImageRef)arg1 imageProperties:(id)arg2 keepSelections:(char)arg3 ;
-(void)setImageWithURL:(id)arg1 index:(long long)arg2 ;
-(void)setSelectionsCanRotate:(char)arg1 ;
-(char)selectionsCanRotate;
-(NSArray *)selections;
-(void)setSelections:(NSArray *)arg1 ;
-(void)showAllSelections;
-(void)deleteSelection:(id)arg1 ;
-(void)addSelection:(id)arg1 ;
-(CGRect*)getTemplateRects:(long long*)arg1 ;
-(char)selectionsCanBeModified;
-(void)doSelectAll;
-(void)showSelectionWithOrientation:(long long)arg1 ;
-(void)resetSelectionWithOrientation;
-(void)hiliteSelection:(id)arg1 ;
-(void)unhiliteSelections;
-(void)setResolution:(long long)arg1 ;
-(void)addScanArea:(id)arg1 withOverlay:(char)arg2 ;
-(void)removeTemplateRects;
-(void)addAutoDetectedItem:(id)arg1 ;
-(void)removeAllAutoDetectedItems;
-(id)autoDetectedItems;
-(char)singleSelection;
-(void)setSingleSelection:(char)arg1 ;
-(char)forceSelectionInsideView;
-(void)setForceSelectionInsideView:(char)arg1 ;
-(void)setSelectionsCanBeModified:(char)arg1 ;
-(CGPoint)convertEventLocationInWindow:(CGPoint)arg1 toLayer:(id)arg2 ;
-(void)installTemplateRects:(CGRect*)arg1 count:(long long)arg2 ;
-(void)applyImageCorrection:(id)arg1 ;
-(double)userSpaceScalingFactor;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)setBackgroundColor:(NSColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(char)arg1 ;
-(void)setFrameOrigin:(CGPoint)arg1 ;
-(id)delegate;
-(void)setFrameSize:(CGSize)arg1 ;
-(NSColor *)backgroundColor;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)selectAll:(id)arg1 ;
-(id)menuForEvent:(id)arg1 ;
-(void)viewDidMoveToWindow;
-(void)mouseDown:(id)arg1 ;
-(void)mouseEntered:(id)arg1 ;
-(void)mouseExited:(id)arg1 ;
-(CGSize)imageSize;
-(void)mouseDragged:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)viewWillMoveToWindow:(id)arg1 ;
-(void)flagsChanged:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(double)rotation;
-(double)progress;
-(void)viewDidEndLiveResize;
-(void)setRotation:(double)arg1 ;
-(void)viewWillStartLiveResize;
-(void)setStatusText:(NSString *)arg1 ;
-(NSString *)statusText;
-(CALayer *)rootLayer;
-(void)setProgress:(double)arg1 ;
@end

