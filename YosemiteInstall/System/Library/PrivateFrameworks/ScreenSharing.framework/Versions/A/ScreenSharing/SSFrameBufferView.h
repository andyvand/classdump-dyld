/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 9:53:56 AM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/PrivateFrameworks/ScreenSharing.framework/Versions/A/ScreenSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ScreenSharing/ScreenSharing-Structs.h>
#import <AppKit/NSView.h>
#import <ScreenSharing/SSFrameBufferObserver.h>
#import <ScreenSharing/SSDragDelegate.h>

@protocol SSInputEventConsumer, SSFrameBufferViewDelegate;
@class SSFrameBuffer, CALayer, NSTrackingArea, NSPasteboard, NSImage, NSArray, NSMutableDictionary, NSString;

@interface SSFrameBufferView : NSView <SSFrameBufferObserver, SSDragDelegate> {

	SSFrameBuffer* mFrameBuffer;
	id<SSInputEventConsumer> mInputEventConsumer;
	CALayer* cachedImageLayer;
	CALayer* flashLayer;
	id<SSFrameBufferViewDelegate> delegate;
	char mShouldWarnAboutScaling;
	double mXScaleFactor;
	double mXInverseScaleFactor;
	double mYScaleFactor;
	double mYInverseScaleFactor;
	NSTrackingArea* mTrackingArea;
	char mCursorInside;
	char mShouldMaskScreen;
	NSPasteboard* mRemotePasteboard;
	NSImage* mRemoteDragImage;
	NSArray* mRemoteFilePaths;
	NSMutableDictionary* mScreenIdsAndRenderViews;
	void* mReservedForInstanceVariables;
	char allowsDragAndDropFileCopyToRemote;
	char allowsDragAndDropFileCopyFromRemote;

}

@property (retain) SSFrameBuffer * frameBuffer; 
@property (retain) id<SSInputEventConsumer> inputEventConsumer; 
@property (assign) id<SSFrameBufferViewDelegate> delegate; 
@property (readonly) char isPBCopy; 
@property (readonly) char scalingNotInSync; 
@property (assign) char useCachedImage; 
@property (assign) char shouldMaskScreen; 
@property (assign) char allowsDragAndDropFileCopyToRemote; 
@property (assign) char allowsDragAndDropFileCopyFromRemote; 
@property (retain) NSPasteboard * remotePasteboard; 
@property (retain) NSImage * remoteDragImage; 
@property (copy) NSArray * remoteFilePaths; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isCompatibleWithResponsiveScrolling;
-(SSFrameBuffer *)frameBuffer;
-(void)setInputEventConsumer:(id<SSInputEventConsumer>)arg1 ;
-(void)setFrameBuffer:(SSFrameBuffer *)arg1 ;
-(void)setShouldMaskScreen:(char)arg1 ;
-(void)setUseCachedImage:(char)arg1 ;
-(char)shouldMaskScreen;
-(char)useCachedImage;
-(void)flash;
-(void)setAllowsDragAndDropFileCopyToRemote:(char)arg1 ;
-(void)setAllowsDragAndDropFileCopyFromRemote:(char)arg1 ;
-(void)gestureScrollWithEvent:(id)arg1 ;
-(id<SSInputEventConsumer>)inputEventConsumer;
-(void)ssFrameBuffer:(id)arg1 rectangleChanged:(SSRect)arg2 ;
-(void)ssFrameBuffer:(id)arg1 sizeWillChangeTo:(SSSize)arg2 ;
-(void)ssFrameBufferSizeDidChange:(id)arg1 ;
-(void)commonInitialization;
-(void)setupLayer;
-(void)setRemotePasteboard:(NSPasteboard *)arg1 ;
-(void)setRemoteDragImage:(NSImage *)arg1 ;
-(void)setRemoteFilePaths:(NSArray *)arg1 ;
-(void)updateScalingFactors;
-(void)sendMouseButtonEvent:(id)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 ;
-(void)sendMouseMovedEvent:(id)arg1 ;
-(NSPasteboard *)remotePasteboard;
-(NSArray *)remoteFilePaths;
-(char)allowsDragAndDropFileCopyFromRemote;
-(NSImage *)remoteDragImage;
-(SSPoint)frameBufferCoordinatesFromNSEvent:(id)arg1 ;
-(void)updateSubviews;
-(char)scalingNotInSync;
-(id)genericDocumentIconForDragWithItemCount:(unsigned long long)arg1 ;
-(char)allowsDragAndDropFileCopyToRemote;
-(void)sendMouseButtonEventWithWindowCoordinates:(CGPoint)arg1 withButton:(unsigned long long)arg2 withState:(int)arg3 ;
-(SSPoint)frameBufferCoordinatesFromWindowCoordinates:(CGPoint)arg1 ;
-(void)ssDragRemotePasteboardTransferred:(id)arg1 withDragImage:(id)arg2 withRemoteFilePaths:(id)arg3 ;
-(char)isPBCopy;
-(void)sendMouseEventWithWindowCoordinates:(CGPoint)arg1 ;
-(void)setDelegate:(id<SSFrameBufferViewDelegate>)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SSFrameBufferViewDelegate>)delegate;
-(void)updateLayer;
-(void)rightMouseDown:(id)arg1 ;
-(char)wantsUpdateLayer;
-(char)isOpaque;
-(char)acceptsFirstResponder;
-(void)keyDown:(id)arg1 ;
-(void)dragImage:(id)arg1 at:(CGPoint)arg2 offset:(CGSize)arg3 event:(id)arg4 pasteboard:(id)arg5 source:(id)arg6 slideBack:(char)arg7 ;
-(char)acceptsFirstMouse:(id)arg1 ;
-(unsigned long long)draggingSourceOperationMaskForLocal:(char)arg1 ;
-(void)draggedImage:(id)arg1 endedAt:(CGPoint)arg2 operation:(unsigned long long)arg3 ;
-(unsigned long long)draggingEntered:(id)arg1 ;
-(unsigned long long)draggingUpdated:(id)arg1 ;
-(void)draggingExited:(id)arg1 ;
-(char)performDragOperation:(id)arg1 ;
-(id)namesOfPromisedFilesDroppedAtDestination:(id)arg1 ;
-(void)scrollWheel:(id)arg1 ;
-(void)mouseDown:(id)arg1 ;
-(void)mouseDragged:(id)arg1 ;
-(void)awakeFromNib;
-(void)mouseUp:(id)arg1 ;
-(void)magnifyWithEvent:(id)arg1 ;
-(void)keyUp:(id)arg1 ;
-(void)rightMouseUp:(id)arg1 ;
-(void)rightMouseDragged:(id)arg1 ;
-(void)otherMouseDown:(id)arg1 ;
-(void)otherMouseDragged:(id)arg1 ;
-(void)otherMouseUp:(id)arg1 ;
-(void)mouseMoved:(id)arg1 ;
-(void)rotateWithEvent:(id)arg1 ;
-(void)smartMagnifyWithEvent:(id)arg1 ;
-(void)swipeWithEvent:(id)arg1 ;
-(void)beginGestureWithEvent:(id)arg1 ;
-(void)endGestureWithEvent:(id)arg1 ;
-(void)quickLookWithEvent:(id)arg1 ;
@end
