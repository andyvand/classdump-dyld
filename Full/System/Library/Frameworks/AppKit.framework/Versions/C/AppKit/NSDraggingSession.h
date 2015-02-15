/*
* This header is generated by classdump-dyld 0.7
* on Sunday, February 15, 2015 at 4:33:41 PM Central European Standard Time
* Operating System: Version 10.10.2 (Build 14C109)
* Image Source: /System/Library/Frameworks/AppKit.framework/Versions/C/AppKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSDraggingSource;
#import <AppKit/AppKit-Structs.h>
@class NSPasteboard, NSImage;

@interface NSDraggingSession : NSObject {

	void* _private;
	CGPoint _offset;
	id<NSDraggingSource> _source;
	id _alternateDragSource;
	id<NSDraggingSource> _filePromiseDragSource;
	NSPasteboard* _pboard;
	NSImage* _compositeImageCache;
	char _animatesOnCancelOrFail;

}

@property (assign) long long draggingFormation; 
@property (assign) char animatesToStartingPositionsOnCancelOrFail; 
@property (assign) long long draggingLeaderIndex; 
@property (readonly) NSPasteboard * draggingPasteboard; 
@property (readonly) long long draggingSequenceNumber; 
@property (assign) CGPoint draggingLocation; 
@property (assign) OpaqueCoreDrag* dragRef; 
@property (assign) id alternateDragSource;                                      //@synthesize alternateDragSource=_alternateDragSource - In the implementation block
@property (readonly) id<NSDraggingSource> source;                               //@synthesize source=_source - In the implementation block
@property (readonly) id<NSDraggingSource> filePromiseDragSource;                //@synthesize filePromiseDragSource=_filePromiseDragSource - In the implementation block
@property (assign) CGPoint draggingImageOffset;                                 //@synthesize offset=_offset - In the implementation block
@property (assign) char animatesToDraggingFormationOnBeginDrag; 
-(void)dealloc;
-(CGPoint)draggingLocation;
-(NSPasteboard *)draggingPasteboard;
-(id)_compositeImage;
-(CGPoint)draggingImageOffset;
-(long long)draggingFormation;
-(void)setDraggingFormation:(long long)arg1 ;
-(long long)draggingSequenceNumber;
-(void)enumerateDraggingItemsWithOptions:(unsigned long long)arg1 forView:(id)arg2 classes:(id)arg3 searchOptions:(id)arg4 usingBlock:(/*^block*/id)arg5 ;
-(void)enumerateDraggingItemsForClass:(Class)arg1 view:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id<NSDraggingSource>)source;
-(void)setDraggingLocation:(CGPoint)arg1 ;
-(OpaqueCoreDrag*)dragRef;
-(id<NSDraggingSource>)filePromiseDragSource;
-(void)setAlternateDragSource:(id)arg1 ;
-(id)alternateDragSource;
-(id)_initWithPasteboard:(id)arg1 draggingItems:(id)arg2 clippingRect:(CGRect)arg3 source:(id)arg4 ;
-(id)_initWithPasteboard:(id)arg1 image:(id)arg2 offset:(CGPoint)arg3 source:(id)arg4 ;
-(void)setAnimatesToStartingPositionsOnCancelOrFail:(char)arg1 ;
-(void)setDraggingLeaderIndex:(long long)arg1 ;
-(id)_commonInitWithPasteboard:(id)arg1 source:(id)arg2 ;
-(char)animatesToStartingPositionsOnCancelOrFail;
-(CGPoint)locationForSlideBack;
-(void)setLocationForSlideBack:(CGPoint)arg1 ;
-(char)animatesToDraggingFormationOnBeginDrag;
-(void)setAnimatesToDraggingFormationOnBeginDrag:(char)arg1 ;
-(long long)draggingLeaderIndex;
-(CGPoint)setDraggingLocation;
-(void)setDragRef:(OpaqueCoreDrag*)arg1 ;
-(void)setDraggingImageOffset:(CGPoint)arg1 ;
@end
